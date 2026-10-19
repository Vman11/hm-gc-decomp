// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800B13D0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(void *); };
extern u32 lbl_80362E74;
extern u8 lbl_8029BAE8[];

void fn_800B13D0(V_800B13D0 *p) {
    p->m(&lbl_80362E74);
    p->m(lbl_8029BAE8);
}

} /* extern "C" */
