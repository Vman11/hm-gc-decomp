// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80159120 { u8 pad[8]; virtual void p0(); virtual void a(s32, s32); virtual void p2(); virtual void b(u8 **, s32); };

void fn_80159120(u8 *p, u32 n, u8 **out) {
    s32 k;
    u8 *b;
    *(u32 *)(p + 0x74) = n;
    if (*(u32 *)(p + 0x30) == 0) {
        ((S_80159120 *)(p + 0x30))->a(12288, 1);
        ((S_80159120 *)(p + 0x4C))->a(12288, 1);
    }
    if (*(u32 *)(p + 0x6C) + n > 12288) {
        *(u32 *)(p + 0x68) = (*(u32 *)(p + 0x68) + 1) & 1;
        *(u32 *)(p + 0x6C) = 0;
        k = 8;
    } else {
        k = 4;
    }
    *(u32 *)(p + 0x70) = *(u32 *)(p + 0x6C);
    ((S_80159120 *)(p + *(u32 *)(p + 0x68) * 28 + 0x30))->b(&b, k);
    *out = b + *(u32 *)(p + 0x6C) * 2;
}

} /* extern "C" */
