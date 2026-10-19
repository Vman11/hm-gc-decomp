// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80138C44 { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void b(void *, s32); virtual void a(); };
extern u8 *lbl_8035AC5C;

void fn_80138C44(void *p, V_80138C44 *x) {
    V_80138C44 *c = *(V_80138C44 **)(lbl_8035AC5C + 0xC);
    if (c != x) {
        if (c != NULL) {
            c->a();
        }
        *(V_80138C44 **)(lbl_8035AC5C + 0xC) = x;
        (*(V_80138C44 **)(lbl_8035AC5C + 0xC))->b(lbl_8035AC5C + 0x80, 1);
    }
}

} /* extern "C" */
