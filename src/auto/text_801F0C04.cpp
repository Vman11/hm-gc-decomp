// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { s32 v[4]; } I4_801F0C04;
typedef struct {
    u8 pad0[8];
    u8 *f8;
    u8 pad1[0x28 - 0xC];
    I4_801F0C04 *f28;
    u8 *f2C;
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
    f32 f48;
    f32 f4C;
    f32 f50;
    f32 f54;
    f32 f58;
    f32 f5C;
    f32 f60;
    f32 f64;
    f32 f68;
    f32 f6C;
    f32 f70;
} S_801F0C04;
extern f32 lbl_8036546C;

void fn_801F0C04(S_801F0C04 *p) {
    f32 w;
    w = (s32)*(u16 *)(*(u8 **)(*(u8 **)(p->f8 + 208) + 4) + 28);
    p->f3C = p->f30;
    p->f38 = *(f32 *)(p->f2C + 52);
    p->f40 = (p->f34 - p->f38) / p->f3C;
    p->f68 = p->f28->v[1] / lbl_8036546C;
    p->f64 = p->f28->v[0] / w;
    p->f6C = p->f28->v[2] / w;
    p->f70 = p->f28->v[3] / lbl_8036546C;
    p->f58 = (p->f48 - p->f68) / p->f3C;
    p->f54 = (p->f44 - p->f64) / p->f3C;
    p->f5C = (p->f4C - p->f6C) / p->f3C;
    p->f60 = (p->f50 - p->f70) / p->f3C;
}

} /* extern "C" */
