// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8008B338 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(void *); };
extern u8 lbl_802990B0[];
extern u8 lbl_802990BC[];

void fn_8008B338(V_8008B338 *p) {
    p->m(lbl_802990B0);
    p->m(lbl_802990BC);
}

} /* extern "C" */
