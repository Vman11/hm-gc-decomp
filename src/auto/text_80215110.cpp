// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {

struct V_80215110 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(); };

BOOL fn_80215110(u8 *p) {
    if (*(V_80215110 **)(p + 4) != NULL) {
        (*(V_80215110 **)(p + 4))->m();
        return TRUE;
    }
    return FALSE;
}

} /* extern "C" */

} /* extern "C" */
