// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8020C19C { u8 pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
void fn_8020C19C(u8 *p) {
    ((S_8020C19C *)(p + 0x18))->m();
}

} /* extern "C" */
