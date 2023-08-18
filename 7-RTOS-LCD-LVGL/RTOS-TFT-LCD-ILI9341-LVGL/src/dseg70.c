/*******************************************************************************
 * Size: 70 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef DSEG70
#define DSEG70 1
#endif

#if DSEG70

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+002D "-" */
    0x1f, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff,
    0xdf, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff,
    0xef, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff,
    0xe0,

    /* U+002E "." */
    0x3e, 0x3f, 0xbf, 0xff, 0xff, 0xff, 0xfd, 0xfc,
    0x7c,

    /* U+0030 "0" */
    0x7f, 0xff, 0xff, 0xff, 0xff, 0x4f, 0xff, 0xff,
    0xff, 0xff, 0xcc, 0x7f, 0xff, 0xff, 0xff, 0xf3,
    0xe3, 0xff, 0xff, 0xff, 0xfe, 0xff, 0x1f, 0xff,
    0xff, 0xff, 0x9f, 0xf8, 0xff, 0xff, 0xff, 0xe7,
    0xff, 0x80, 0x0, 0x0, 0x1, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xc0, 0x0, 0x0, 0x1, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0x3,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xc0, 0x0, 0x0, 0x1,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80,
    0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x7f, 0xfe, 0x0, 0x0, 0x0, 0xf, 0xff, 0xc0,
    0x0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0x0, 0x0, 0x0, 0x7, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0x80, 0x0, 0x0, 0x1, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0xf, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xe0,
    0x0, 0x0, 0x0, 0xe, 0x1c, 0x0, 0x0, 0x0,
    0x1, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x80,
    0x0, 0x0, 0x0, 0x1f, 0xfc, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x7f, 0xfe,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xc0, 0x0, 0x0,
    0x1, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0x80, 0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xc0, 0x0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xc0, 0x0, 0x0, 0x1, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x0, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80, 0x0,
    0x0, 0x3, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f,
    0xfe, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x9f, 0xff,
    0xff, 0xfe, 0x3f, 0xe7, 0xff, 0xff, 0xff, 0xf1,
    0xfd, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x3f, 0xff,
    0xff, 0xff, 0xfc, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0x80,

    /* U+0031 "1" */
    0x4, 0xc, 0x38, 0xf1, 0xe7, 0xcf, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xdf, 0x8f, 0x6, 0x20, 0xf1, 0xf7,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x3e, 0x1c, 0x8,

    /* U+0032 "2" */
    0x7f, 0xff, 0xff, 0xff, 0xff, 0x4f, 0xff, 0xff,
    0xff, 0xff, 0xcc, 0x7f, 0xff, 0xff, 0xff, 0xf3,
    0x83, 0xff, 0xff, 0xff, 0xfe, 0xf0, 0x1f, 0xff,
    0xff, 0xff, 0x9e, 0x0, 0xff, 0xff, 0xff, 0xe7,
    0xc0, 0x0, 0x0, 0x0, 0x1, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xe0, 0x0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0x80, 0x0, 0x0, 0x0, 0x7,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0, 0x1,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0,
    0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0,
    0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0, 0x0,
    0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0x0, 0xff, 0xff, 0xff,
    0xf8, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0x4, 0x7,
    0xff, 0xff, 0xff, 0xe0, 0x1, 0xff, 0xff, 0xff,
    0xf8, 0x8, 0x3f, 0xff, 0xff, 0xfe, 0x1, 0xc7,
    0xff, 0xff, 0xff, 0xc0, 0x3e, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x0, 0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0,
    0x0, 0x1, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0x80, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xc0, 0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xe0, 0x0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0x80, 0x0, 0x0, 0x0, 0x7,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0, 0x1,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0,
    0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0xfe, 0xff, 0xff, 0xff, 0xc0, 0x1f, 0x9f, 0xff,
    0xff, 0xfe, 0x3, 0xe7, 0xff, 0xff, 0xff, 0xf0,
    0x7d, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x3f, 0xff,
    0xff, 0xff, 0xfc, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0x80,

    /* U+0033 "3" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0x5f, 0xff, 0xff,
    0xff, 0xff, 0xcc, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0x87, 0xff, 0xff, 0xff, 0xfe, 0xf0, 0x3f, 0xff,
    0xff, 0xff, 0x9e, 0x1, 0xff, 0xff, 0xff, 0xe7,
    0xc0, 0x0, 0x0, 0x0, 0x1, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xe0, 0x0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0x80, 0x0, 0x0, 0x0, 0x7,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0, 0x1,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0,
    0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0,
    0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0, 0x0,
    0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0x1, 0xff, 0xff, 0xff,
    0xf8, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0x4, 0xf,
    0xff, 0xff, 0xff, 0xee, 0x3, 0xff, 0xff, 0xff,
    0xf9, 0xf0, 0x7f, 0xff, 0xff, 0xfe, 0x7e, 0xf,
    0xff, 0xff, 0xff, 0xdf, 0xc0, 0x0, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x80,
    0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0,
    0x0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xe0, 0x0, 0x0, 0x0, 0x1, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x0, 0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x1, 0xff, 0xff, 0xff, 0xc7, 0xe0, 0x7f, 0xff,
    0xff, 0xfe, 0x3c, 0xf, 0xff, 0xff, 0xff, 0xf1,
    0x83, 0xff, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0x80,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xc, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x7e, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x7,
    0xff, 0x80, 0x0, 0x0, 0x0, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xc0, 0x0, 0x0, 0x1, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0x3,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xc0, 0x0, 0x0, 0x1,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80,
    0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x7f, 0xfe, 0x0, 0x0, 0x0, 0xf, 0xff, 0xc0,
    0x0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0x0, 0x0, 0x0, 0x7, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x1f, 0xfe, 0xff, 0xff, 0xff,
    0xf8, 0xff, 0x9f, 0xff, 0xff, 0xff, 0x7, 0xe7,
    0xff, 0xff, 0xff, 0xee, 0x1d, 0xff, 0xff, 0xff,
    0xf9, 0xf0, 0x3f, 0xff, 0xff, 0xfe, 0x7e, 0x7,
    0xff, 0xff, 0xff, 0xdf, 0xc0, 0x0, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x80,
    0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0,
    0x0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xe0, 0x0, 0x0, 0x0, 0x1, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x0, 0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x80,

    /* U+0035 "5" */
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xf0,
    0x63, 0xff, 0xff, 0xff, 0xfe, 0xf, 0x1f, 0xff,
    0xff, 0xff, 0x81, 0xf8, 0xff, 0xff, 0xff, 0xe0,
    0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xe0, 0x0, 0x0, 0x0, 0x1, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x80,
    0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0,
    0x0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xfe, 0xff, 0xff, 0xff,
    0xf8, 0x1f, 0x9f, 0xff, 0xff, 0xff, 0x3, 0xe7,
    0xff, 0xff, 0xff, 0xee, 0x1d, 0xff, 0xff, 0xff,
    0xf9, 0xf0, 0x3f, 0xff, 0xff, 0xfe, 0x7e, 0x7,
    0xff, 0xff, 0xff, 0xdf, 0xc0, 0x0, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x80,
    0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0,
    0x0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xe0, 0x0, 0x0, 0x0, 0x1, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x0, 0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0xff, 0xff, 0xff, 0xc7, 0xe0, 0x1f, 0xff,
    0xff, 0xfe, 0x3c, 0x7, 0xff, 0xff, 0xff, 0xf1,
    0x81, 0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff,
    0xff, 0xff, 0xfc, 0xf, 0xff, 0xff, 0xff, 0xff,
    0x80,

    /* U+0036 "6" */
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xf0,
    0x63, 0xff, 0xff, 0xff, 0xfe, 0xf, 0x1f, 0xff,
    0xff, 0xff, 0x81, 0xf8, 0xff, 0xff, 0xff, 0xe0,
    0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xe0, 0x0, 0x0, 0x0, 0x1, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x80,
    0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0,
    0x0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xfe, 0xff, 0xff, 0xff,
    0xf8, 0x1f, 0x9f, 0xff, 0xff, 0xff, 0x3, 0xe7,
    0xff, 0xff, 0xff, 0xee, 0x1d, 0xff, 0xff, 0xff,
    0xf9, 0xf8, 0x3f, 0xff, 0xff, 0xfe, 0x7f, 0xc7,
    0xff, 0xff, 0xff, 0xdf, 0xfe, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f, 0xfe,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xc0, 0x0, 0x0,
    0x1, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0x80, 0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xc0, 0x0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xc0, 0x0, 0x0, 0x1, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x0, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80, 0x0,
    0x0, 0x3, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f,
    0xfe, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x9f, 0xff,
    0xff, 0xfe, 0x3f, 0xe7, 0xff, 0xff, 0xff, 0xf1,
    0xfd, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x3f, 0xff,
    0xff, 0xff, 0xfc, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0x80,

    /* U+0037 "7" */
    0x7f, 0xff, 0xff, 0xff, 0xff, 0x4f, 0xff, 0xff,
    0xff, 0xff, 0xcc, 0x7f, 0xff, 0xff, 0xff, 0xf3,
    0xe3, 0xff, 0xff, 0xff, 0xfe, 0xff, 0x1f, 0xff,
    0xff, 0xff, 0x9f, 0xf8, 0xff, 0xff, 0xff, 0xe7,
    0xff, 0x80, 0x0, 0x0, 0x1, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xc0, 0x0, 0x0, 0x1, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0x3,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xc0, 0x0, 0x0, 0x1,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80,
    0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x7f, 0xfe, 0x0, 0x0, 0x0, 0xf, 0xff, 0xc0,
    0x0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0x0, 0x0, 0x0, 0x7, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0x80, 0x0, 0x0, 0x1, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0xf, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0x80, 0x0, 0x0, 0x0, 0x21, 0xe0,
    0x0, 0x0, 0x0, 0xf, 0x8, 0x0, 0x0, 0x0,
    0x3, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x7e, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x80,
    0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0,
    0x0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xe0, 0x0, 0x0, 0x0, 0x1, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x0, 0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x80,

    /* U+0038 "8" */
    0x7f, 0xff, 0xff, 0xff, 0xff, 0x4f, 0xff, 0xff,
    0xff, 0xff, 0xcc, 0x7f, 0xff, 0xff, 0xff, 0xf3,
    0xe3, 0xff, 0xff, 0xff, 0xfe, 0xff, 0x1f, 0xff,
    0xff, 0xff, 0x9f, 0xf8, 0xff, 0xff, 0xff, 0xe7,
    0xff, 0x80, 0x0, 0x0, 0x1, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xc0, 0x0, 0x0, 0x1, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0x3,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xc0, 0x0, 0x0, 0x1,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80,
    0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x7f, 0xfe, 0x0, 0x0, 0x0, 0xf, 0xff, 0xc0,
    0x0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0x0, 0x0, 0x0, 0x7, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x1f, 0xfe, 0xff, 0xff, 0xff,
    0xf8, 0xff, 0x9f, 0xff, 0xff, 0xff, 0x7, 0xe7,
    0xff, 0xff, 0xff, 0xee, 0x1d, 0xff, 0xff, 0xff,
    0xf9, 0xf8, 0x3f, 0xff, 0xff, 0xfe, 0x7f, 0xc7,
    0xff, 0xff, 0xff, 0xdf, 0xfe, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f, 0xfe,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xc0, 0x0, 0x0,
    0x1, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0x80, 0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xc0, 0x0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xc0, 0x0, 0x0, 0x1, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x0, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80, 0x0,
    0x0, 0x3, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f,
    0xfe, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x9f, 0xff,
    0xff, 0xfe, 0x3f, 0xe7, 0xff, 0xff, 0xff, 0xf1,
    0xfd, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x3f, 0xff,
    0xff, 0xff, 0xfc, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0x80,

    /* U+0039 "9" */
    0x7f, 0xff, 0xff, 0xff, 0xff, 0x4f, 0xff, 0xff,
    0xff, 0xff, 0xcc, 0x7f, 0xff, 0xff, 0xff, 0xf3,
    0xe3, 0xff, 0xff, 0xff, 0xfe, 0xff, 0x1f, 0xff,
    0xff, 0xff, 0x9f, 0xf8, 0xff, 0xff, 0xff, 0xe7,
    0xff, 0x80, 0x0, 0x0, 0x1, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xc0, 0x0, 0x0, 0x1, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x0, 0x7,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0x3,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xc0, 0x0, 0x0, 0x1,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80,
    0x0, 0x0, 0x3, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x7f, 0xfe, 0x0, 0x0, 0x0, 0xf, 0xff, 0xc0,
    0x0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0x0, 0x0, 0x0, 0x7, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x1f, 0xfe, 0xff, 0xff, 0xff,
    0xf8, 0xff, 0x9f, 0xff, 0xff, 0xff, 0x7, 0xe7,
    0xff, 0xff, 0xff, 0xee, 0x1d, 0xff, 0xff, 0xff,
    0xf9, 0xf0, 0x3f, 0xff, 0xff, 0xfe, 0x7e, 0x7,
    0xff, 0xff, 0xff, 0xdf, 0xc0, 0x0, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0x80,
    0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0,
    0x0, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0x80, 0x0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xe0, 0x0, 0x0, 0x0, 0x1, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x0, 0x3, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0xff, 0xff, 0xff, 0xc7, 0xe0, 0x1f, 0xff,
    0xff, 0xfe, 0x3c, 0x7, 0xff, 0xff, 0xff, 0xf1,
    0x81, 0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff,
    0xff, 0xff, 0xfc, 0xf, 0xff, 0xff, 0xff, 0xff,
    0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 224, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 914, .box_w = 33, .box_h = 6, .ofs_x = 12, .ofs_y = 32},
    {.bitmap_index = 26, .adv_w = 0, .box_w = 9, .box_h = 8, .ofs_x = -4, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 914, .box_w = 43, .box_h = 70, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 914, .box_w = 7, .box_h = 67, .ofs_x = 44, .ofs_y = 3},
    {.bitmap_index = 471, .adv_w = 914, .box_w = 43, .box_h = 70, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 914, .box_w = 43, .box_h = 70, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 1225, .adv_w = 914, .box_w = 43, .box_h = 67, .ofs_x = 7, .ofs_y = 3},
    {.bitmap_index = 1586, .adv_w = 914, .box_w = 43, .box_h = 70, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 1963, .adv_w = 914, .box_w = 43, .box_h = 70, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 2340, .adv_w = 914, .box_w = 43, .box_h = 67, .ofs_x = 7, .ofs_y = 3},
    {.bitmap_index = 2701, .adv_w = 914, .box_w = 43, .box_h = 70, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 3078, .adv_w = 914, .box_w = 43, .box_h = 70, .ofs_x = 7, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0xd, 0xe
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 15, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 4,
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
    .bpp = 1,
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
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t dseg70 = {
#else
lv_font_t dseg70 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 70,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -9,
    .underline_thickness = 4,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if DSEG70*/

