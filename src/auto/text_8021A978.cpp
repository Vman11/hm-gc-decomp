// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8021A978 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual s32 m(void *); };

BOOL fn_8021A978(V_8021A978 *p, void *a, s32 *out) {
    if (p->m(a) == 0) {
        *out = 2;
        return FALSE;
    }
    return TRUE;
}

} /* extern "C" */
