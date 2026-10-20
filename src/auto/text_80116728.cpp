// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80116728 { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u32 *m(s32); };
extern "C" V_80116728 **fn_80110444(void *, void *, s32);

BOOL fn_80116728(void *p, void *a, u32 *out) {
    V_80116728 **r = fn_80110444(p, a, 0);
    if (r != NULL && *r != NULL) {
        *out = *(*r)->m(0);
        return TRUE;
    }
    return FALSE;
}

} /* extern "C" */
