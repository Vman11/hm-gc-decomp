// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80209408 { u8 pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual s32 m(); };
void fn_80209408(u8 *p) {
    if (((S_80209408 *)(p + 0x1C))->m() == 0) {
        ((S_80209408 *)(p + 0x68))->m();
    }
}

} /* extern "C" */
