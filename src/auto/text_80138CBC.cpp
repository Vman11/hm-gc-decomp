// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80138CBC { u8 pad[0xC]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void a(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void b(void *, s32); };
extern u8 *lbl_8035AC5C;

void fn_80138CBC(void *p, V_80138CBC *x) {
    V_80138CBC *c = *(V_80138CBC **)(lbl_8035AC5C + 0x8);
    if (c != x) {
        if (c != NULL) {
            c->a();
        }
        *(V_80138CBC **)(lbl_8035AC5C + 0x8) = x;
        (*(V_80138CBC **)(lbl_8035AC5C + 0x8))->b(lbl_8035AC5C + 0x10, 1);
    }
}

} /* extern "C" */
