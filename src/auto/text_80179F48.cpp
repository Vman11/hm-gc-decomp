// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80179F48 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u32 n(); };
extern "C" { extern u32 lbl_803647E8; void fn_800FAEF8(void *); void fn_8014AC00(void *, void *); void fn_8018E20C(void *, void *, u32); }

void fn_80179F48(u8 *p, S_80179F48 *s) {
    u32 t;
    *(s32 *)(p + 4) = 1;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        if (t == 87) {
            fn_8014AC00(p + 16, s);
        } else {
            fn_8018E20C(p, s, t);
        }
    }
    *(u32 *)p |= lbl_803647E8;
}

} /* extern "C" */
