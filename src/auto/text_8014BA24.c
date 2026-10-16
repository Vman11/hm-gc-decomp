/* Functions from 0x8014BA24 to 0x8014BC1C, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 b;
    u8 g;
    u8 r;
    u8 a;
} Pixel_8014BA24;

typedef struct {
    u8 pad0[0x38];
    u32 count;
    Pixel_8014BA24 pixels[(0x550 - 0x3C) / 4];
    u8 pad550;
    u8 bits;
    u8 flags;
    u8 pad553;
    u32 offset;
} Image_8014BA24;

void fn_8014BA24(Image_8014BA24* img, u8* out) {
    u32 abits = img->flags & 0xF;
    u32 shift = (img->bits - abits) / 3;
    u32 i;

    switch ((img->bits + 7) >> 3) {
    case 1: {
        u8* dst = out + img->offset;
        for (i = img->offset; i < img->count; i++) {
            *dst = img->pixels[i].r;
            *dst |= img->pixels[i].g << shift;
            *dst |= img->pixels[i].b << (shift * 2);
            *dst |= img->pixels[i].a << (img->bits - abits);
            dst++;
        }
        break;
    }
    case 2: {
        u16* dst = (u16*)out + img->offset;
        for (i = 0; i < img->count; i++) {
            *dst = img->pixels[i].r;
            *dst |= img->pixels[i].g << shift;
            *dst |= img->pixels[i].b << (shift * 2);
            *dst |= img->pixels[i].a << (img->bits - abits);
            dst++;
        }
        break;
    }
    case 3: {
        u8* dst = out + img->offset * 3;
        for (i = 0; i < img->count; i++) {
            dst[0] = img->pixels[i].r;
            dst[1] = img->pixels[i].g;
            dst[2] = img->pixels[i].b;
            dst += 3;
        }
        break;
    }
    case 4: {
        u8* dst = out + img->offset * 4;
        for (i = 0; i < img->count; i++) {
            dst[0] = img->pixels[i].r;
            dst[1] = img->pixels[i].g;
            dst[2] = img->pixels[i].b;
            dst[3] = img->pixels[i].a;
            dst += 4;
        }
        break;
    }
    }
}
