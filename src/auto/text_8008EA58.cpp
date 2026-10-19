// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8008EA58 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(void *); };
extern u8 lbl_802994E4[];
extern u8 lbl_802994F0[];

void fn_8008EA58(V_8008EA58 *p) {
    p->m(lbl_802994E4);
    p->m(lbl_802994F0);
}

} /* extern "C" */
