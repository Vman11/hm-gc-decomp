// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8022AECC { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void *m(); };

BOOL fn_8022AECC(void *p, u8 *q) {
    if (q != NULL && (*(u16 *)(q + 4) == 2 || *(u16 *)(q + 4) == 3) && *(V_8022AECC **)(q + 144) != NULL && (*(V_8022AECC **)(q + 144))->m() != NULL) {
        return TRUE;
    }
    return FALSE;
}

} /* extern "C" */
