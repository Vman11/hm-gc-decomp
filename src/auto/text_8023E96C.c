// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_80366118;
void *memcpy(void *, const void *, u32);

static inline u8 *find_8023E96C(u8 *p) {
    s32 i;
    for (i = 0; i < 128; i++) {
        if (*(s32 *)(p + i * 100 + 0x2804) != 0) {
            return p + i * 100 + 0x27F4;
        }
    }
    return NULL;
}

void *fn_8023E96C(u8 *p, s32 a, void *src, u32 n, s32 b, s32 c, f32 x, f32 y) {
    u8 *e = find_8023E96C(p);
    if (e == NULL) {
        return NULL;
    }
    *(f32 *)e = x;
    *(s32 *)(e + 0xC) = b;
    *(s32 *)(e + 0x10) = 0;
    *(s32 *)(e + 0x14) = 0;
    *(s32 *)(e + 0x1C) = a;
    *(s32 *)(e + 8) = c;
    if (lbl_80366118 == y) {
        *(f32 *)(e + 4) = x;
    } else {
        *(f32 *)(e + 4) = y;
    }
    memcpy(e + 0x20, src, n);
    *(u32 *)(e + 0x60) = n;
    *(void **)(e + 0x18) = *(void **)(p + 0x59F4);
    *(u8 **)(p + 0x59F4) = e;
    return e;
}
