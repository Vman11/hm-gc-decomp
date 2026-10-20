// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801166BC { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual f32 *m(s32); };
extern "C" V_801166BC **fn_80110444(void *, void *, s32);

BOOL fn_801166BC(void *p, void *a, f32 *out) {
    V_801166BC **r = fn_80110444(p, a, 0);
    if (r != NULL && *r != NULL) {
        *out = *(*r)->m(0);
        return TRUE;
    }
    return FALSE;
}

} /* extern "C" */
