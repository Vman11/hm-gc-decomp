/* Functions from 0x801409B0 to 0x80142990, found by decomp-toolkit. */
#include "common.h"

typedef struct ImgDec {
    u8 pad0[0x3C];
    u32 shr[3];
    u8 pad48[4];
    u32 shl[3];
    u8 pad58[0x7C - 0x58];
    u32 mask[3];
    u8 pad88[0x9C - 0x88];
    s32 count;
    u8 padA0[0xB0 - 0xA0];
    u8 *src;
    u8 padB4[0x138 - 0xB4];
    u8 buf[0x184 - 0x138];
    u8 *dst;
} ImgDec;
