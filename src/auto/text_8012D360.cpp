// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8012D360 { u8 pad[0x34]; virtual void p0(); virtual void m1(void *); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m8(); };
extern "C" { extern volatile f32 lbl_80363E98; void fn_800F6E88(void *, void *); }

void fn_8012D360(V_8012D360 *q, void *x, u8 *c, void *d, u8 *e, void *f) {
    if (*(u32 *)((u8 *)q + 12) != 0) {
        q->m8();
    }
    *(u32 *)((u8 *)q + 12) = *(u32 *)(e + 8) - *(u32 *)(e + 4);
    if (*(u32 *)((u8 *)q + 12) != 0) {
        *(u8 **)((u8 *)q + 20) = c;
        *(u8 **)((u8 *)q + 24) = c + 20;
        *(void **)((u8 *)q + 8) = f;
        *(f32 *)((u8 *)q + 28) = lbl_80363E98;
        *(f32 *)((u8 *)q + 32) = lbl_80363E98;
        fn_800F6E88(q, d);
        q->m1(e);
    }
}

} /* extern "C" */
