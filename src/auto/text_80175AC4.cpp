// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad0[4];
    u32 f4;
    s32 f8;
    u8 padC[4];
    u32 f10;
    u8 pad14[4];
    u8 f18;
    u8 pad19[2];
    u8 f1B;
    u8 pad1C[40];
    void *f44;
    void *f48;
    void *f4C;
    u8 pad50[8];
    void *f58;
    void *f5C;
    u8 pad60[4];
    s32 f64;
} S_80175AC4;

extern u32 lbl_80364770;
s32 fn_80101A7C(u8);
void fn_800B48F4(void *, s32);
void fn_800D5F10(void);

void fn_80175AC4(S_80175AC4 *p) {
    s32 n;
    if (p->f4 & 8) {
        if (p->f10 & 0x40) {
            n = fn_80101A7C(p->f18);
            fn_800B48F4(p->f4C, p->f8 * (n * 2));
        } else if (p->f10 & 0x80) {
            n = fn_80101A7C(p->f18);
            fn_800B48F4(p->f4C, p->f8 * (n * 3));
        } else if (p->f10 & 0x100) {
            n = fn_80101A7C(p->f18);
            fn_800B48F4(p->f4C, p->f8 * (n * 4));
        }
        if (p->f10 & 0x800) {
            n = fn_80101A7C(p->f1B);
            fn_800B48F4(p->f58, p->f8 * (n * 3));
        }
        if (p->f10 & 0x2000) {
            fn_800B48F4(p->f44, p->f8 * 4);
        }
        if (p->f10 & 0x4000) {
            fn_800B48F4(p->f48, p->f8 * 4);
        }
        if (p->f10 & 0x8000) {
            fn_800B48F4(p->f5C, p->f64 * p->f8);
        }
        fn_800D5F10();
    }
    p->f4 |= lbl_80364770;
    p->f4 &= ~0xE;
}

} /* extern "C" */
