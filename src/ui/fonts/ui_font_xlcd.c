/*******************************************************************************
 * Size: 24 px
 * Bpp: 2
 * Opts: --bpp 2 --size 24 --font /Users/xperiments/Documents/PlatformIO/Projects/x-lcd/screens/COMPONENTS/status/assets/fonts/icomoon.ttf -o /Users/xperiments/Documents/PlatformIO/Projects/x-lcd/screens/COMPONENTS/status/assets/fonts/ui_font_xlcd.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_XLCD
#define UI_FONT_XLCD 1
#endif

#if UI_FONT_XLCD

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0030 "0" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0xfd, 0x0, 0x7,
    0xf4, 0x7f, 0xf4, 0x1, 0xff, 0xdf, 0xff, 0xc0,
    0x3f, 0xff, 0xff, 0xfc, 0x3, 0xff, 0xff, 0xff,
    0xc0, 0x3f, 0xff, 0xff, 0xfc, 0x3, 0xff, 0xff,
    0xff, 0xc0, 0x3f, 0xff, 0xff, 0xfc, 0x3, 0xff,
    0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xfc, 0x3,
    0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xfc,
    0x3, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff,
    0xfc, 0x3, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff,
    0xff, 0xfc, 0x3, 0xff, 0xff, 0xff, 0xc0, 0x3f,
    0xff, 0xff, 0xfc, 0x3, 0xff, 0xff, 0xff, 0xc0,
    0x3f, 0xff, 0xff, 0xfc, 0x3, 0xff, 0xff, 0xff,
    0xc0, 0x3f, 0xff, 0xff, 0xfc, 0x3, 0xff, 0xf7,
    0xff, 0x40, 0x1f, 0xfd, 0x1f, 0xd0, 0x0, 0x7f,
    0x40,

    /* U+0031 "1" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfd,
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff,
    0xff, 0xfd, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0x6, 0xff, 0xff, 0xff, 0xff, 0xd0,

    /* U+0032 "2" */
    0x0, 0x0, 0x6f, 0xf9, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xfd, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0x40,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xd0, 0xf, 0xff,
    0xfc, 0x3f, 0xff, 0xf0, 0x2f, 0xff, 0xfc, 0x3f,
    0xff, 0xf8, 0x3f, 0xff, 0xfc, 0x3f, 0xff, 0xfc,
    0x7f, 0xff, 0xfc, 0x3f, 0xff, 0xfd, 0xbf, 0xff,
    0xfc, 0x3f, 0xff, 0xfe, 0xff, 0xff, 0xfc, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfd,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xd0,
    0x1, 0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0x7f,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x6f, 0xf9, 0x0, 0x0,

    /* U+0033 "3" */
    0x0, 0x0, 0x1, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xf4, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0x40, 0x0, 0x0, 0xb, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0xfd, 0x0, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xf4, 0x1, 0xff, 0xff, 0xff,
    0xff, 0x40, 0xa0, 0x2f, 0xff, 0xff, 0xf8, 0xa,
    0xfe, 0x3, 0xff, 0xff, 0xc0, 0xbf, 0x2f, 0xd0,
    0x7f, 0xfd, 0x7, 0xf8, 0x2, 0xfc, 0xb, 0xe0,
    0x3f, 0x80, 0x0, 0x7f, 0x80, 0x2, 0xfd, 0x0,
    0xf8, 0x7, 0xf4, 0x1f, 0xd0, 0x2f, 0x7f, 0x40,
    0xbf, 0xfe, 0x1, 0xfd, 0xb, 0xf4, 0x1f, 0xf4,
    0x1f, 0xe0, 0x0, 0xfe, 0x1, 0x40, 0xbf, 0x0,
    0x0, 0x1f, 0xe0, 0xb, 0xf4, 0x0, 0x0, 0x2,
    0xfd, 0x7f, 0x80, 0x0, 0x0, 0x0, 0x2f, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xf4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2f, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xf4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff,
    0x90, 0x0, 0x0, 0x2f, 0x40, 0x0, 0x1f, 0x80,
    0x2f, 0xf4, 0xbd, 0x0, 0x0, 0x7f, 0xfd, 0x0,
    0x0, 0x2f, 0x40, 0x0, 0x2f, 0x40, 0x0, 0xb,
    0xff, 0xff, 0xd0, 0x3, 0xff, 0xff, 0xe4, 0x0,
    0x7f, 0xc0, 0x0, 0x3f, 0xd0, 0x2f, 0xf5, 0xff,
    0x0, 0x7, 0xff, 0xff, 0xd0, 0x0, 0xbf, 0xc0,
    0x0, 0x7f, 0xc0, 0x0, 0x7f, 0xff, 0xff, 0xf0,
    0x1, 0xff, 0xff, 0xfe, 0x0, 0xbf, 0xd0, 0x0,
    0x7f, 0xe0, 0x2f, 0xf6, 0xff, 0x40, 0x1f, 0xff,
    0xff, 0xf4, 0x0, 0xff, 0xd0, 0x0, 0xbf, 0xd0,
    0x2, 0xff, 0xff, 0xff, 0xf4, 0x0, 0xbf, 0xff,
    0xff, 0xc0, 0xbf, 0xe0, 0x0, 0x3f, 0xd0, 0x2f,
    0xf4, 0xff, 0x0, 0x3f, 0xff, 0xff, 0xfc, 0x0,
    0xff, 0xd0, 0x0, 0xbf, 0xe0, 0x7, 0xff, 0xff,
    0xff, 0xf0, 0x0, 0x1f, 0xff, 0xff, 0xe0, 0x7f,
    0xf0, 0x0, 0x1f, 0x40, 0x2f, 0xf4, 0x7d, 0x0,
    0xbf, 0xff, 0xff, 0xff, 0x0, 0xff, 0xd0, 0x0,
    0xbf, 0xe0, 0xf, 0xff, 0xff, 0xff, 0xd0, 0x0,
    0x1, 0xff, 0xff, 0xf4, 0x3f, 0xfd, 0x0, 0x0,
    0x0, 0x2f, 0xf4, 0x0, 0x0, 0xff, 0xf4, 0xb,
    0xff, 0x0, 0xff, 0xd0, 0x0, 0xbf, 0xe0, 0x1f,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xf8, 0x2f, 0xff, 0xfe, 0x40, 0x0, 0x2f, 0xf4,
    0x0, 0x1, 0xff, 0xc0, 0x3, 0xff, 0x40, 0xff,
    0xd0, 0x0, 0xbf, 0xe0, 0x2f, 0xf8, 0x0, 0x0,
    0x0, 0x2, 0xe0, 0x0, 0x1f, 0xfc, 0xf, 0xff,
    0xff, 0xf0, 0x0, 0x2f, 0xf4, 0x0, 0x1, 0xff,
    0x80, 0x2, 0xff, 0x80, 0xff, 0xd0, 0x0, 0xbf,
    0xe0, 0x3f, 0xf4, 0x0, 0x0, 0x0, 0xb, 0xfc,
    0x0, 0xf, 0xfc, 0x7, 0xff, 0xff, 0xfc, 0x0,
    0x2f, 0xf4, 0x0, 0x2, 0xff, 0x80, 0x1, 0xff,
    0x80, 0xff, 0xd0, 0x0, 0xbf, 0xd0, 0x3f, 0xf0,
    0x0, 0x0, 0x0, 0xf, 0xfc, 0x0, 0xf, 0xfc,
    0x0, 0xff, 0xff, 0xff, 0x0, 0x2f, 0xf4, 0x0,
    0x2, 0xff, 0x80, 0x2, 0xff, 0x80, 0xff, 0xd0,
    0x0, 0xbf, 0xd0, 0x3f, 0xf4, 0x0, 0x0, 0x0,
    0xf, 0xfc, 0x0, 0xf, 0xfc, 0x0, 0x1b, 0xff,
    0xff, 0x80, 0x1f, 0xfc, 0x0, 0x1, 0xff, 0xc0,
    0x3, 0xff, 0x40, 0xbf, 0xf0, 0x0, 0xff, 0xd0,
    0x2f, 0xf8, 0x0, 0x0, 0x0, 0xf, 0xfc, 0x0,
    0xf, 0xfc, 0x0, 0x0, 0x3, 0xff, 0xc0, 0xf,
    0xff, 0x40, 0x0, 0xff, 0xf4, 0x1f, 0xff, 0x0,
    0x7f, 0xfd, 0x7, 0xff, 0xc0, 0x1f, 0xfe, 0x0,
    0x0, 0x0, 0xf, 0xfc, 0x0, 0xf, 0xfc, 0x2f,
    0x40, 0x0, 0xff, 0xd0, 0xb, 0xff, 0xfd, 0x0,
    0xbf, 0xff, 0xff, 0xfe, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0x80, 0xf, 0xff, 0xff, 0xff, 0xd0, 0xf,
    0xfc, 0x0, 0xf, 0xfc, 0xbf, 0xc0, 0x0, 0xbf,
    0xd0, 0x3, 0xff, 0xff, 0x0, 0x3f, 0xff, 0xff,
    0xfc, 0x0, 0x1f, 0xff, 0xff, 0xff, 0x0, 0x7,
    0xff, 0xff, 0xff, 0xf0, 0xf, 0xfc, 0x0, 0xf,
    0xfc, 0xbf, 0xd0, 0x0, 0x7f, 0xe0, 0x1, 0xff,
    0xff, 0x40, 0xf, 0xff, 0xff, 0xf4, 0x0, 0x7,
    0xff, 0xff, 0xfc, 0x0, 0x2, 0xff, 0xff, 0xff,
    0xf4, 0xf, 0xfc, 0x0, 0xf, 0xfc, 0x7f, 0xc0,
    0x0, 0x3f, 0xd0, 0x0, 0x3f, 0xff, 0x0, 0x3,
    0xff, 0xff, 0xc0, 0x0, 0x1, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0xf0, 0xb, 0xfc,
    0x0, 0xb, 0xfc, 0x2f, 0x40, 0x0, 0x1f, 0x40,
    0x0, 0x6, 0xfd, 0x0, 0x0, 0x6f, 0xf9, 0x0,
    0x0, 0x0, 0x1b, 0xfe, 0x40, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xd0, 0x2, 0xf0, 0x0, 0x2, 0xf0,

    /* U+0061 "a" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1b, 0xf4, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xfe,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xd0, 0x0,
    0x0, 0x2f, 0xff, 0xff, 0xf8, 0x0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0x40, 0xb, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff,
    0xff, 0xfd, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0x6, 0xff, 0xff, 0xff, 0xff, 0xd0,

    /* U+0062 "b" */
    0x1, 0xff, 0xff, 0xff, 0xf4, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xc7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0x0,
    0xff, 0x2, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xf,
    0xff, 0xff, 0x55, 0xfc, 0x30, 0xbf, 0xff, 0xf9,
    0x6f, 0xc3, 0xb, 0xff, 0xff, 0xeb, 0xfc, 0x30,
    0xbf, 0xff, 0xf0, 0xf, 0xc3, 0xb, 0xff, 0xff,
    0xff, 0xfc, 0x30, 0x7f, 0xff, 0xf4, 0x1f, 0x3,
    0x2, 0xff, 0xff, 0xff, 0xd0, 0x30, 0xf, 0xff,
    0xff, 0xfd, 0x7, 0x80, 0xff, 0xff, 0xff, 0xd0,
    0x34, 0xf, 0xff, 0xff, 0xfe, 0x0, 0x0, 0xff,
    0xff, 0xff, 0xf0, 0x0, 0x2f, 0xff, 0xff, 0xff,
    0xc0, 0xb, 0xff, 0x7f, 0xff, 0xff, 0xab, 0xff,
    0xe3, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x1f, 0xff, 0xff, 0xff,
    0x40,

    /* U+0063 "c" */
    0x0, 0x1, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0x80, 0x0, 0x0, 0x2, 0xf0, 0xf8, 0x0,
    0x0, 0x0, 0x2d, 0x57, 0x80, 0x0, 0x0, 0x2,
    0xff, 0xb8, 0x0, 0x0, 0x0, 0x2f, 0xff, 0x80,
    0x0, 0x0, 0x2, 0xff, 0xf8, 0x0, 0xb, 0xff,
    0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xe5, 0xbf,
    0xff, 0xff, 0xdb, 0xf8, 0x3, 0xfe, 0xbf, 0xf1,
    0xff, 0x40, 0x1f, 0xf4, 0xff, 0x5f, 0xf4, 0x1,
    0xff, 0x1f, 0xfe, 0xbf, 0x80, 0x3f, 0xeb, 0xff,
    0xff, 0xff, 0x5f, 0xff, 0xff, 0x0, 0x3, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x2f, 0xff, 0x80, 0x0,
    0x0, 0x2, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x2d,
    0xfb, 0x80, 0x0, 0x0, 0x2, 0xe4, 0xf8, 0x0,
    0x0, 0x0, 0x2f, 0x2f, 0x80, 0x0, 0x0, 0x2,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x40,
    0x0,

    /* U+0064 "d" */
    0x0, 0x1f, 0xff, 0xff, 0x80, 0x0, 0x1, 0xff,
    0xff, 0xff, 0x80, 0x0, 0xf, 0xff, 0xff, 0xff,
    0x0, 0x0, 0xbf, 0xff, 0xff, 0xff, 0x0, 0x3,
    0xff, 0xff, 0xff, 0xfd, 0x0, 0x2f, 0xff, 0xff,
    0xff, 0xfc, 0x1, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0xf, 0xff, 0xf4, 0x1f, 0xff, 0xf0, 0x7f, 0xff,
    0x40, 0x1f, 0xff, 0xe3, 0xff, 0xfc, 0x0, 0x3f,
    0xff, 0xcf, 0xff, 0xf0, 0x0, 0xff, 0xff, 0x1f,
    0xff, 0xd0, 0x7, 0xff, 0xf8, 0x3f, 0xff, 0xd0,
    0x7f, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0x40, 0x2, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0x3, 0xff, 0xff, 0xff, 0xc0, 0x0,
    0xb, 0xff, 0xff, 0xfe, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xe0, 0x0,

    /* U+0065 "e" */
    0x0, 0x10, 0x1, 0x0, 0x4, 0x0, 0x3c, 0x2,
    0xd0, 0xb, 0x0, 0xbd, 0x3, 0xe0, 0x1f, 0x40,
    0x38, 0x2, 0xd0, 0xf, 0x0, 0xf, 0x80, 0x7d,
    0x2, 0xe0, 0x0, 0x78, 0x7, 0xd0, 0x1f, 0x0,
    0x1e, 0x0, 0xb4, 0x7, 0xc0, 0x2f, 0x1, 0xf4,
    0xb, 0xc0, 0xe, 0x0, 0xb4, 0x3, 0xc0, 0x2,
    0xf0, 0xf, 0x80, 0xbd, 0x0, 0x1e, 0x0, 0xb4,
    0x7, 0xc0, 0xb, 0x80, 0x7c, 0x2, 0xf0, 0xf,
    0x80, 0x7d, 0x3, 0xe0, 0x3, 0x40, 0x1c, 0x0,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x15,
    0x55, 0x55, 0x55, 0x50, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0xf, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xff,
    0xf4,

    /* U+0066 "f" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xfd, 0x0, 0x0, 0x0, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x3f, 0xff, 0xf0, 0x0, 0x0, 0xf, 0xff,
    0xfc, 0x0, 0x0, 0x3, 0xff, 0xff, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x3f, 0xff,
    0xf0, 0x0, 0x0, 0xf, 0xff, 0xfc, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xff,
    0xff, 0x40, 0x3, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x3f, 0xff, 0xfe, 0x0, 0x0, 0x2, 0xff, 0xfe,
    0x0, 0x0, 0x38, 0x1f, 0xfd, 0x0, 0x0, 0xf,
    0x41, 0xfc, 0xe, 0x0, 0x0, 0xb0, 0x4, 0x1,
    0xf0, 0x0, 0xbc, 0x0, 0x0, 0xb8, 0x0, 0x3c,
    0x0, 0x0, 0x78, 0x0, 0xb, 0xc0, 0x2c, 0xb,
    0x80, 0x0, 0xf0, 0xf, 0x1, 0xf0, 0x0, 0xf4,
    0xf, 0x41, 0xe0, 0x0, 0x20, 0x1, 0x0, 0x10,
    0x0,

    /* U+0067 "g" */
    0x3f, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xd7, 0xff, 0xff, 0xff, 0xff, 0xf5,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0x5f, 0xfe, 0xaa, 0xaa, 0xff, 0xd7,
    0xfd, 0x0, 0x0, 0x2f, 0xf5, 0xff, 0x95, 0x55,
    0x5f, 0xfd, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x5f,
    0xff, 0xff, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xff,
    0xff, 0xf5, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0x5f, 0xff, 0xff, 0xff,
    0xff, 0xd7, 0xfd, 0x0, 0x2f, 0xff, 0xf5, 0xff,
    0xea, 0xaf, 0xff, 0xfd, 0x7f, 0xff, 0xff, 0xff,
    0xff, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xff,
    0xff, 0xff, 0xff, 0xf5, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0x3f, 0xff, 0xff, 0xff, 0xfe, 0x0,

    /* U+0068 "h" */
    0x0, 0x0, 0x6f, 0xf9, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xfd, 0x0, 0x1, 0xff, 0x90, 0x6, 0xff, 0x40,
    0x7, 0xfc, 0x0, 0x0, 0x3f, 0xd0, 0xf, 0xe0,
    0x1f, 0xf4, 0xb, 0xf0, 0x2f, 0xc1, 0xff, 0xff,
    0x43, 0xf8, 0x3f, 0x7, 0xff, 0xff, 0xd0, 0xfc,
    0x7e, 0xf, 0xff, 0xff, 0xf0, 0xbd, 0xbd, 0x1f,
    0xff, 0xff, 0xf8, 0x7e, 0xfc, 0x3f, 0xf8, 0x2f,
    0xfc, 0x3f, 0xfc, 0x3f, 0xf0, 0xf, 0xfc, 0x7f,
    0xfc, 0x3f, 0xf0, 0x1, 0xff, 0xff, 0xfc, 0x3f,
    0xf8, 0x10, 0x1b, 0xff, 0xbd, 0x2f, 0xff, 0xfd,
    0x2, 0xfe, 0x7e, 0xf, 0xff, 0xff, 0xe7, 0xfd,
    0x3f, 0x7, 0xff, 0xff, 0xff, 0xfc, 0x2f, 0xc1,
    0xff, 0xff, 0xff, 0xf8, 0xf, 0xe2, 0xff, 0xff,
    0xff, 0xf0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xd0,
    0x1, 0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0x2f,
    0xff, 0xff, 0xf9, 0x0,

    /* U+0069 "i" */
    0x0, 0x0, 0x2f, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xfc, 0x0, 0x0, 0x0, 0x1, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x2, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0xbf, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0x80, 0x0,
    0x0, 0x0, 0xf, 0xff, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0x0, 0x0, 0x0, 0x7f, 0xc7, 0x88,
    0x0, 0x0, 0x3, 0xff, 0xcf, 0xd0, 0x0, 0x0,
    0xf, 0xff, 0xcf, 0xd7, 0xbf, 0xe0, 0x2f, 0xff,
    0xdb, 0x8f, 0xff, 0xf8, 0x3f, 0xff, 0xf4, 0x7f,
    0xff, 0xfc, 0x3f, 0xff, 0xf1, 0xff, 0xff, 0xfd,
    0x7f, 0xff, 0xc0, 0xff, 0xff, 0xfd, 0x7f, 0xff,
    0xc0, 0xbf, 0xff, 0xfc, 0x3f, 0xff, 0x40, 0x2f,
    0xff, 0xf8, 0x1f, 0xff, 0x0, 0xb, 0xff, 0xd0,
    0x7, 0xf8, 0x0, 0x0, 0x69, 0x0,

    /* U+006A "j" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xd0, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xf8, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xfd,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xfe, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xb, 0xff, 0xf0, 0xff, 0x1f, 0xff,
    0x1f, 0xff, 0xf0, 0x3c, 0xf, 0xff, 0x3f, 0xff,
    0xfc, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff,
    0x3f, 0xff, 0xfc, 0x0, 0x3f, 0xff, 0x1f, 0xff,
    0xf0, 0x3c, 0xf, 0xff, 0xb, 0xff, 0xf0, 0xff,
    0xf, 0xff, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xfd, 0x0, 0xb, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0x1, 0xff, 0xff, 0xff, 0xd0,

    /* U+006B "k" */
    0xbf, 0xff, 0x40, 0x38, 0xf, 0xaa, 0xb8, 0xf,
    0xd0, 0xe0, 0x3, 0x83, 0xff, 0x4f, 0xa8, 0x38,
    0xb3, 0xad, 0xff, 0xc3, 0x80, 0x38, 0x8e, 0x0,
    0x38, 0x3, 0x80, 0xe0, 0x3, 0x80, 0x38, 0xf,
    0xe0, 0x38, 0x3, 0x80, 0xf5, 0x3, 0x80, 0x38,
    0xe, 0x0, 0x38, 0x3, 0x80, 0xf5, 0x43, 0x80,
    0x38, 0xf, 0xfc, 0x38, 0x3, 0x80, 0xe0, 0x3,
    0x80, 0x38, 0xe, 0x0, 0x38, 0x3, 0x80, 0xfe,
    0x3, 0x80, 0x38, 0xf, 0x90, 0x38, 0x3, 0x80,
    0xe0, 0x3, 0x80, 0x38, 0xe, 0x54, 0x38, 0x3,
    0x80, 0xff, 0xc3, 0x8b, 0x38, 0xde, 0x0, 0x38,
    0x3f, 0xbc, 0xe0, 0x3, 0x80, 0xff, 0xb, 0xff,
    0xf4, 0x3, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+006C "l" */
    0x0, 0x0, 0x7f, 0xf0, 0x0, 0x0, 0x0, 0x1,
    0x6e, 0x0, 0x0, 0x0, 0x0, 0x3, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0xb4, 0x0, 0x0, 0x0, 0x0,
    0x1e, 0x0, 0x0, 0x0, 0x0, 0x3, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0xbf, 0xe0, 0x0, 0x0, 0x0,
    0x6, 0xa9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x60, 0x0, 0x0, 0x0,
    0x0, 0xb, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0x6b, 0x90, 0x0, 0x0,
    0x0, 0x2f, 0xbb, 0xd0, 0x0, 0x0, 0x1f, 0x8b,
    0x1f, 0x80, 0x0, 0xf, 0x80, 0xb0, 0x2f, 0x40,
    0xb, 0xd0, 0x0, 0x0, 0x7f, 0x7, 0xe0, 0x0,
    0x0, 0x0, 0xbd, 0xbc, 0x0, 0x0, 0x0, 0x2,
    0xeb, 0xf4, 0x0, 0x0, 0x1, 0xfe, 0xb2, 0xf0,
    0x0, 0x0, 0xfd, 0x6b, 0x2, 0xe0, 0x0, 0xbd,
    0x6,

    /* U+006D "m" */
    0x0, 0x1, 0x41, 0x40, 0x0, 0x0, 0x2, 0xe0,
    0xfc, 0x0, 0x0, 0x7, 0xd0, 0xb, 0xe0, 0x0,
    0xb, 0x80, 0x0, 0x2f, 0x40, 0x2f, 0x0, 0x0,
    0x1, 0xfc, 0x3e, 0x0, 0x0, 0x0, 0xf, 0xcf,
    0xf0, 0x0, 0x0, 0xf, 0xf3, 0xaf, 0x80, 0x0,
    0x2f, 0xac, 0xe0, 0xfd, 0x0, 0x7e, 0xb, 0x38,
    0x7, 0xe0, 0xfd, 0x2, 0xce, 0x0, 0x2f, 0xf8,
    0x0, 0xb3, 0x80, 0x1, 0xf0, 0x0, 0x2c, 0xe0,
    0x0, 0x3c, 0x0, 0xb, 0x38, 0x0, 0xf, 0x0,
    0x2, 0xc4, 0x0, 0x3, 0xc0, 0x0, 0x10, 0x4,
    0x0, 0xf0, 0x1, 0x0, 0x3, 0xd0, 0x3c, 0x7,
    0xc0, 0x0, 0x2f, 0xf, 0xf, 0xd0, 0x0, 0x1,
    0xfb, 0xef, 0x80, 0x0, 0x40, 0xb, 0xfe, 0x4,
    0x0, 0x35, 0xc0, 0x3d, 0x3, 0x9c, 0xb, 0xf0,
    0x0, 0x0, 0xbe, 0x0, 0xf0, 0x0, 0x0, 0xf,
    0x0, 0x7d, 0x0, 0x0, 0x2, 0x80, 0x3f, 0xc0,
    0x0, 0x0, 0xa0, 0xc, 0x34, 0x0, 0x0, 0x24,
    0x0,

    /* U+006E "n" */
    0x0, 0x2f, 0x40, 0x1, 0xfd, 0x0, 0x3, 0xff,
    0x40, 0x1f, 0xfd, 0x0, 0x3f, 0xff, 0x0, 0xff,
    0xfc, 0x1, 0xff, 0xfe, 0xf, 0xff, 0xf8, 0xf,
    0xff, 0xfc, 0x0, 0x2f, 0xf0, 0x3f, 0xff, 0xf4,
    0x86, 0x3f, 0xd1, 0xff, 0xff, 0xe3, 0x1c, 0xbf,
    0x4b, 0xf8, 0x7f, 0xcd, 0x35, 0xfe, 0x3f, 0xc4,
    0xff, 0x28, 0xd3, 0xfc, 0xff, 0x32, 0xfc, 0xa3,
    0x8f, 0xf3, 0xf8, 0xcb, 0xf2, 0x8e, 0x3f, 0xcf,
    0xf3, 0x2f, 0xca, 0x38, 0xff, 0x3f, 0xcc, 0xbf,
    0x28, 0xe3, 0xfc, 0xff, 0x3, 0xfc, 0xa3, 0x4f,
    0xf2, 0xff, 0x2f, 0xf3, 0xcc, 0x7f, 0x8b, 0xff,
    0xff, 0x8f, 0x22, 0xfd, 0x1f, 0xff, 0xfd, 0x0,
    0xf, 0xf0, 0x3f, 0xff, 0xf0, 0x54, 0x7f, 0xc0,
    0xbf, 0xff, 0x82, 0xf4, 0xbd, 0x0, 0xff, 0xfc,
    0x3, 0xf4, 0x60, 0x1, 0xff, 0xd0, 0x7, 0xf4,
    0xb8, 0x1, 0xfd, 0x0, 0x7, 0xe2, 0xb0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+006F "o" */
    0x3, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x60, 0x0,
    0x0, 0x0, 0x90, 0x6, 0x0, 0x0, 0x0, 0x6,
    0x0, 0x60, 0x0, 0x0, 0x0, 0x60, 0x6, 0x5,
    0x5, 0x5, 0x6, 0x0, 0x60, 0x60, 0x60, 0x60,
    0x60, 0x6, 0x6, 0x6, 0x6, 0x6, 0x0, 0x60,
    0x60, 0x60, 0x60, 0x60, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xff,
    0xff, 0xfd, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xd7,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xd7, 0xff, 0xff, 0xff, 0xff, 0xfd,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+0070 "p" */
    0x0, 0x7, 0xc0, 0x0, 0x7, 0xff, 0xff, 0xd0,
    0x2f, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xfd,
    0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfe,
    0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xf0, 0xf, 0xfe,
    0x7f, 0xc0, 0x3, 0xfe, 0x7f, 0x80, 0x2, 0xfe,
    0x7f, 0x80, 0x2, 0xfe, 0x7f, 0xc0, 0x3, 0xfe,
    0x7f, 0xe0, 0xb, 0xfe, 0x7f, 0xfd, 0x7f, 0xfe,
    0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfe,
    0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfe,
    0x7f, 0xff, 0xff, 0xfe, 0x7c, 0x1f, 0xf8, 0x3d,
    0x0, 0xf, 0xf4, 0x0, 0x0, 0xb, 0xe0, 0x0,

    /* U+0071 "q" */
    0x0, 0x0, 0x6f, 0xf9, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xfd, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0x40,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xd0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x7f, 0xff, 0xff, 0xff, 0xbf, 0xfd, 0xbf, 0xff,
    0xff, 0xfc, 0x2f, 0xfe, 0xff, 0xff, 0xff, 0xf0,
    0x3f, 0xff, 0xff, 0xfe, 0xff, 0xc0, 0xff, 0xff,
    0xff, 0xf8, 0x3f, 0x3, 0xff, 0xff, 0xff, 0xfc,
    0x8, 0xf, 0xff, 0xff, 0xbf, 0xff, 0x0, 0x3f,
    0xff, 0xfe, 0x7f, 0xff, 0xd1, 0xff, 0xff, 0xfd,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xd0,
    0x1, 0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0x7f,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x6f, 0xf9, 0x0, 0x0,

    /* U+0072 "r" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x6f, 0xf9, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xfd, 0x0,
    0x1, 0xff, 0xff, 0xff, 0xff, 0x40, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff,
    0xf, 0xf0, 0xff, 0xfd, 0xbf, 0xff, 0x3, 0xc0,
    0xff, 0xfe, 0xff, 0xff, 0xc0, 0x3, 0xff, 0xff,
    0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3,
    0xff, 0xff, 0xbf, 0xff, 0x3, 0xc0, 0xff, 0xfe,
    0x7f, 0xff, 0xf, 0xf0, 0xbf, 0xfd, 0x3f, 0xff,
    0xbf, 0xfe, 0xff, 0xfc, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0xf, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x7f, 0xff, 0xff,
    0xfd, 0x0, 0x0, 0xb, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x6f, 0xf9, 0x0, 0x0,

    /* U+0073 "s" */
    0x0, 0x0, 0x7, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x2f, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfe,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x1f,
    0xe7, 0xeb, 0xf8, 0x0, 0x0, 0x3f, 0x87, 0xe2,
    0xfc, 0x0, 0x0, 0xe, 0x7, 0xe0, 0xb0, 0x0,
    0x0, 0x0, 0x7, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3c, 0xf,
    0x3, 0xc0, 0xf0, 0x3c, 0x7d, 0x1f, 0x47, 0xd1,
    0xf4, 0x7d, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,

    /* U+0074 "t" */
    0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c, 0x7d, 0x1f,
    0x47, 0xd1, 0xf4, 0x7d, 0x3c, 0xf, 0x3, 0xc0,
    0xf0, 0x3c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xe0, 0x0, 0x0,
    0x0, 0xe, 0x7, 0xe0, 0xb0, 0x0, 0x0, 0x3f,
    0x87, 0xe2, 0xfc, 0x0, 0x0, 0x2f, 0xe7, 0xeb,
    0xf8, 0x0, 0x0, 0xb, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x2, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0xbf, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xd0, 0x0, 0x0,

    /* U+0075 "u" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1e, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0x80, 0x0, 0x0, 0x7, 0x80, 0xf, 0xf0,
    0x0, 0x0, 0x3, 0xf0, 0xf, 0xf4, 0x0, 0x0,
    0x0, 0x78, 0xf, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xf4, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xff, 0xff, 0xc2, 0xe3, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0xfc, 0xbf, 0xff, 0xff, 0xff, 0xfc,
    0x1e, 0xf, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf4,
    0x0, 0x0, 0x0, 0x78, 0x0, 0xff, 0x0, 0x0,
    0x0, 0x3f, 0x0, 0xf, 0x80, 0x0, 0x0, 0xb,
    0x80, 0x0, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xe0,

    /* U+0076 "v" */
    0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x10, 0x0, 0x1e,
    0x0, 0x0, 0x0, 0x1f, 0x0, 0xf, 0xc0, 0x0,
    0x0, 0xf, 0xf0, 0x1, 0xe0, 0x0, 0x0, 0x0,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0x7, 0x83,
    0xff, 0xff, 0xff, 0xff, 0xf3, 0xf0, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x78, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0x1, 0xe0, 0x0,
    0x0, 0x0, 0xff, 0x0, 0xfc, 0x0, 0x0, 0x0,
    0xff, 0x0, 0x1e, 0x0, 0x0, 0x0, 0x1f, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x78, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0077 "w" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xe0,
    0x0, 0x0, 0xbf, 0xff, 0xe0, 0x0, 0x3f, 0xff,
    0xff, 0xc0, 0xb, 0xff, 0xff, 0xfe, 0x1, 0xff,
    0xff, 0xff, 0xf4, 0x3f, 0xff, 0xff, 0xff, 0x83,
    0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff,
    0xc3, 0xff, 0xff, 0xff, 0xfd, 0x3f, 0xff, 0xff,
    0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x2f, 0xff,
    0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xf0, 0x7,
    0xff, 0xff, 0xfd, 0x0, 0x1f, 0xff, 0xff, 0x40,
    0x0, 0xbf, 0xff, 0xe0, 0x0, 0x1, 0x55, 0x54,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xaa,
    0xa4, 0x0, 0x0, 0x2f, 0xff, 0x80, 0x0, 0x0,
    0xff, 0xf0, 0x0, 0x0, 0x2, 0xf8, 0x0, 0x0,

    /* U+0078 "x" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0xff, 0x90, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xe0,
    0x0, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0x2f, 0xfd,
    0x0, 0x1b, 0xff, 0x4b, 0xfd, 0x0, 0x0, 0x7,
    0xfd, 0xfe, 0x0, 0x0, 0x0, 0xb, 0xf7, 0x40,
    0xb, 0xfe, 0x40, 0x1e, 0x0, 0xb, 0xff, 0xff,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0xbf, 0x40, 0x1f, 0xe0, 0x0, 0x7, 0x80, 0x0,
    0x2d, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2, 0xf4, 0x0, 0x0, 0x0, 0x0, 0xbf,
    0xd0, 0x0, 0x0, 0x0, 0xf, 0xff, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xf0, 0x0, 0x0, 0x0, 0xb,
    0xfd, 0x0, 0x0, 0x0, 0x0, 0x2f, 0x40, 0x0,
    0x0,

    /* U+0079 "y" */
    0x2, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x1f, 0xff,
    0xff, 0xff, 0xd0, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xf0, 0x14, 0xbf, 0x40, 0x0, 0x7, 0xf8, 0xbe,
    0xfd, 0x0, 0x0, 0x1, 0xff, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0xff, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0xff, 0xff, 0xfd, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xbf, 0x40, 0x0, 0x7,
    0xf8, 0xbe, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x14,
    0x1f, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x2, 0xff,
    0xff, 0xfe, 0x0, 0x0,

    /* U+007A "z" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xfd, 0x0,
    0x0, 0x0, 0x2f, 0xff, 0x80, 0x0, 0x0, 0x7f,
    0xff, 0xf0, 0x0, 0x0, 0xbf, 0xff, 0xfd, 0x0,
    0x0, 0xff, 0xff, 0xff, 0x80, 0x0, 0xff, 0xff,
    0xff, 0xf0, 0x0, 0xff, 0xff, 0xff, 0xfd, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff,
    0xff, 0x80, 0xff, 0xff, 0xff, 0xfd, 0x0, 0xff,
    0xff, 0xff, 0xf0, 0x0, 0xff, 0xff, 0xff, 0x80,
    0x0, 0xbf, 0xff, 0xfd, 0x0, 0x0, 0x7f, 0xff,
    0xf0, 0x0, 0x0, 0x2f, 0xff, 0x80, 0x0, 0x0,
    0x6, 0xf9, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 192, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 384, .box_w = 18, .box_h = 25, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 113, .adv_w = 384, .box_w = 24, .box_h = 25, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 263, .adv_w = 384, .box_w = 24, .box_h = 24, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 407, .adv_w = 384, .box_w = 24, .box_h = 25, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 557, .adv_w = 1848, .box_w = 116, .box_h = 24, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1253, .adv_w = 384, .box_w = 24, .box_h = 25, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1403, .adv_w = 384, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1524, .adv_w = 384, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1645, .adv_w = 384, .box_w = 23, .box_h = 20, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1760, .adv_w = 384, .box_w = 21, .box_h = 20, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1865, .adv_w = 384, .box_w = 21, .box_h = 23, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1986, .adv_w = 384, .box_w = 21, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2097, .adv_w = 384, .box_w = 24, .box_h = 22, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2229, .adv_w = 384, .box_w = 24, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2355, .adv_w = 384, .box_w = 24, .box_h = 21, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2481, .adv_w = 384, .box_w = 18, .box_h = 23, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 2585, .adv_w = 384, .box_w = 22, .box_h = 22, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2706, .adv_w = 384, .box_w = 21, .box_h = 26, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 2843, .adv_w = 384, .box_w = 23, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2976, .adv_w = 384, .box_w = 22, .box_h = 17, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 3070, .adv_w = 384, .box_w = 16, .box_h = 22, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3158, .adv_w = 384, .box_w = 24, .box_h = 24, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3302, .adv_w = 384, .box_w = 24, .box_h = 25, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3452, .adv_w = 384, .box_w = 24, .box_h = 24, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3596, .adv_w = 384, .box_w = 24, .box_h = 24, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3740, .adv_w = 384, .box_w = 25, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3884, .adv_w = 384, .box_w = 25, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 4028, .adv_w = 384, .box_w = 18, .box_h = 23, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4132, .adv_w = 384, .box_w = 22, .box_h = 19, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 4237, .adv_w = 384, .box_w = 24, .box_h = 18, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 4345, .adv_w = 384, .box_w = 20, .box_h = 25, .ofs_x = 3, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x10, 0x11, 0x12, 0x13, 0x14
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 21, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 6, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 97, .range_length = 26, .glyph_id_start = 7,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_xlcd = {
#else
lv_font_t ui_font_xlcd = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 29,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_XLCD*/

