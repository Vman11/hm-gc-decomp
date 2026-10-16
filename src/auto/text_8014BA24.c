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
