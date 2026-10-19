// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8019D75C { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(s32); };
void fn_80101124(void *, void *);
double fn_800FB2E0(void *);

void fn_8019D75C(u8 *p, V_8019D75C *q, s32 c) {
    switch (c) {
    case 64:
        fn_80101124(p + 0x1C, q);
        *(f32 *)(p + 0x28) = __fabs(fn_800FB2E0(q));
        break;
    default:
        q->m(30);
        break;
    }
}

} /* extern "C" */
