const fs = require('fs');
const https = require('https');
const urlModule = require('url');

const url = 'https://e.bambulab.com/query.php?lang=zh-cn';
const hmsDataFileC = 'src/xtouch/bbl/bbl-errors.c';
const hmsDataFileH = 'src/xtouch/bbl/bbl-errors.h';

// 从 URL 中提取语言代码
const lang = urlModule.parse(url, true).query.lang || 'en';

// StatusPanel.cpp
const message_containing_retry = [
    "07018004",
    "07018005",
    "07018006",
    "07018006",
    "07018007",
    "07008012",
    "07018012",
    "07028012",
    "07038012",
    "07FF8003",
    "07FF8004",
    "07FF8005",
    "07FF8006",
    "07FF8007",
    "07FF8010",
    "07FF8011",
    "07FF8012",
    "07FF8013",
    "12FF8007"
];
const message_containing_done = [
    "07FF8007",
    "12FF8007"
];

// 添加字符串转义函数
function escapeCString(str) {
    return str
        .replace(/\\/g, '\\\\')
        .replace(/"/g, '\\"')
        .replace(/\r/g, '\\r')
        .replace(/\n/g, '\\n');
}

const getFlatRecordsKeysC = (root, varName) => {
    return `const char *${varName}[] PROGMEM = {${root.map((e) => '"' + escapeCString(String(e.ecode)) + '"').join(',\n')}};`;
};
const getFlatRecordsKeysH = (root, varName) => {
    return `extern const char *${varName}[] PROGMEM;`;
};
const getFlatRecordsValuesC = (root, varName) => {
    return `const char *${varName}[] PROGMEM = {${root.map((e) => '"' + escapeCString(String(e.intro)) + '"').join(',\n')}};`;
};
const getFlatRecordsValuesH = (root, varName) => {
    return `extern const char *${varName}[] PROGMEM;`;
};

const getKeyValueLengthC = (root, varName) => {
    return `int ${varName} = ${root.length};`;
};
const getKeyValueLengthH = (root, varName) => {
    return `extern int ${varName};`;
};

https.get(url, (response) => {
    if (response.statusCode === 200) {
        let data = '';

        // 设置响应编码为 UTF-8
        response.setEncoding('utf8');

        response.on('data', (chunk) => {
            data += chunk;
        });

        response.on('end', () => {
            try {
                const jsonData = JSON.parse(data);

                console.log('Received JSON data:', jsonData);

                // 检查 data 属性是否存在
                if (!jsonData.data) {
                    console.error('[xtouch error downloader] JSON 数据缺少 data 属性。');
                    process.exit(1);
                }

                const dataSection = jsonData.data;

                // 检查 device_hms 和 device_error 是否存在
                if (!dataSection.device_hms || !dataSection.device_error) {
                    console.error('[xtouch error downloader] JSON 数据缺少 device_hms 或 device_error 属性。');
                    process.exit(1);
                }

                // 获取对应语言的错误信息数组
                const device_hms = dataSection.device_hms[lang];
                const device_error = dataSection.device_error[lang];

                // 检查数组是否存在
                if (!Array.isArray(device_hms) || !Array.isArray(device_error)) {
                    console.error(`[xtouch error downloader] JSON 数据中缺少 '${lang}' 语言的错误信息。`);
                    process.exit(1);
                }

                // 生成 C 文件内容
                const outputC = [
                    `#include "bbl-errors.h"`,
                    getKeyValueLengthC(device_hms, "hms_error_length"),
                    getFlatRecordsKeysC(device_hms, "hms_error_keys"),
                    getFlatRecordsValuesC(device_hms, "hms_error_values"),
                    getKeyValueLengthC(device_error, "device_error_length"),
                    getFlatRecordsKeysC(device_error, "device_error_keys"),
                    getFlatRecordsValuesC(device_error, "device_error_values"),
                    `int message_containing_retry_total = ${message_containing_retry.length};`,
                    `int message_containing_done_total = ${message_containing_done.length};`,
                    `const char *message_containing_retry[] PROGMEM = {${message_containing_retry.map(e => `"${e}"`).join(',\n')}};`,
                    `const char *message_containing_done[] PROGMEM = {${message_containing_done.map(e => `"${e}"`).join(',\n')}};`
                ].join('\n\n');

                fs.writeFileSync(hmsDataFileC, outputC);

                // 生成 H 文件内容
                const outputH = [
                    `#ifndef _XLCD_BBL_ERRORS
#define _XLCD_BBL_ERRORS

#ifdef __cplusplus
extern "C"
{
#endif

#include <pgmspace.h>`,
                    getKeyValueLengthH(device_hms, "hms_error_length"),
                    getFlatRecordsKeysH(device_hms, "hms_error_keys"),
                    getFlatRecordsValuesH(device_hms, "hms_error_values"),
                    getKeyValueLengthH(device_error, "device_error_length"),
                    getFlatRecordsKeysH(device_error, "device_error_keys"),
                    getFlatRecordsValuesH(device_error, "device_error_values"),
                    `extern int message_containing_retry_total;`,
                    `extern int message_containing_done_total;`,
                    `extern const char *message_containing_retry[] PROGMEM;`,
                    `extern const char *message_containing_done[] PROGMEM;`,
                    `#ifdef __cplusplus
}
#endif

#endif`
                ].join('\n\n');

                fs.writeFileSync(hmsDataFileH, outputH);
                console.log('[xtouch error downloader] Done!!');
            } catch (error) {
                console.error('[xtouch error downloader] 解析数据时出错:', error);
                process.exit(1);
            }
        });
    } else {
        console.error('[xtouch error downloader] 下载文件时出错。状态码:', response.statusCode);
        process.exit(1);
    }
}).on('error', (error) => {
    console.error('[xtouch error downloader] 请求时出错:', error);
    process.exit(1);
});
