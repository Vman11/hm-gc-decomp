// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8014721C { u8 pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(void *, s32, u16); };
extern f32 lbl_80364398;
void fn_801482DC(void *, void *);

void fn_8014721C(u8 *p, void *a, void *b, V_8014721C *c) {
    if (*(u32 *)p & 1) {
        *(s32 *)p = 0;
        *(s32 *)(p + 0x598) = 0;
        *(s32 *)(p + 0x594) = 0;
        *(s32 *)(p + 0x59C) = 0;
        *(f32 *)(p + 0x6CC) = lbl_80364398;
    }
    *(s32 *)p = 1;
    fn_801482DC(p + 0x14, a);
    fn_801482DC(p + 0x28, b);
    if (c != NULL) {
        c->m(p + 0x194, 0, *(u16 *)c);
    }
}

} /* extern "C" */
