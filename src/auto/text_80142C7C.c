/* Functions from 0x80142C7C to 0x80144B64, found by decomp-toolkit. */
#include "common.h"
typedef struct Img {
    u8 pad0[4];
    u32 key;
    u32 val;
    u8 c[4];
    u8 r[4];
    u8 pad14[0x9c - 0x14];
    s32 n;
    u8 padA0[4];
    s32 m;
    u8 padA8[0x138 - 0xa8];
    u8 buf[0x44];
    u8 *dst;
    u8 pad180[4];
    u8 *px;
} Img;
