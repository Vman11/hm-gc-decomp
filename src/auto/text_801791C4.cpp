// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801791C4 { u8 pad[0x20]; virtual void p0(); virtual void m(); };
extern u32 lbl_803647CC;
void fn_80128550(void *, void *, void *, s32);
void fn_8012844C(void *, void *, void *);

void fn_801791C4(u8 *p, u8 *q) {
    if (!(*(u32 *)(p + 8) & 0x10)) {
        fn_80128550(p, q, p + 0x9C, 0);
        fn_8012844C(p, q, p + 0x9C);
        if (!(*(u32 *)(q + 0x2C) & 4)) {
            ((S_801791C4 *)(p + 0x9C))->m();
        }
        *(u32 *)(p + 8) |= lbl_803647CC;
    }
}

} /* extern "C" */
