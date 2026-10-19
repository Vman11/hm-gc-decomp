// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8017DA78 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(s32); };
extern f32 lbl_8036488C;
void fn_800FF6D0(void *, void *);
void fn_80101124(f32 *, void *);

void fn_8017DA78(u8 *p, V_8017DA78 *q, s32 c) {
    switch (c) {
    case 63:
        fn_800FF6D0(p + 0x1C, q);
        break;
    case 69: {
        f32 a[3];
        f32 b[3];
        fn_80101124(a, q);
        fn_80101124(b, q);
        *(f32 *)(p + 0x28) = b[0] - a[0];
        *(f32 *)(p + 0x2C) = b[1] - a[1];
        *(f32 *)(p + 0x30) = b[2] - a[2];
        *(f32 *)(p + 0x28) = *(f32 *)(p + 0x28) * lbl_8036488C;
        *(f32 *)(p + 0x2C) = *(f32 *)(p + 0x2C) * lbl_8036488C;
        *(f32 *)(p + 0x30) = *(f32 *)(p + 0x30) * lbl_8036488C;
        *(f32 *)(p + 0x1C) = *(f32 *)(p + 0x28) + a[0];
        *(f32 *)(p + 0x20) = *(f32 *)(p + 0x2C) + a[1];
        *(f32 *)(p + 0x24) = *(f32 *)(p + 0x30) + a[2];
        break;
    }
    default:
        q->m(30);
        break;
    }
}

} /* extern "C" */
