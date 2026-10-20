// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80197B58 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u32 n(); };
extern "C" { extern u32 lbl_80364C54; void fn_800FAEF8(void *); f32 fn_800FB2E0(void *); void fn_8018E20C(void *, void *, u32); }

void fn_80197B58(u8 *p, S_80197B58 *s) {
    u32 t;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        if (t == 109) {
            *(f32 *)(p + 16) = fn_800FB2E0(s);
        } else {
            fn_8018E20C(p, s, t);
        }
    }
    *(u32 *)p |= lbl_80364C54;
}

} /* extern "C" */
