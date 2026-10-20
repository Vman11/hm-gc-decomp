// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8022AF34 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(); };
extern "C" { extern u8 *lbl_8035B65C; void fn_8019B6B8(void *, void *); }

void fn_8022AF34(V_8022AF34 *q) {
    u8 *p = (u8 *)q;
    if (*(u8 **)(p + 156) != NULL) {
        u16 t = *(u16 *)(*(u8 **)(p + 156) + 4);
        u8 ok = 0;
        if (t >= 1 && t <= 13) {
            ok = 1;
        }
        if (ok) {
            u32 *n;
            q->m();
            for (n = *(u32 **)(*(u8 **)(p + 156) + 88); n != NULL; n = (u32 *)n[21]) {
                if (n[0] & 0x800) {
                    fn_8019B6B8(*(void **)(lbl_8035B65C + 12), n);
                    n[0] &= ~0x800;
                }
            }
        }
    }
}

} /* extern "C" */
