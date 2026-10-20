// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_80210480(void *, void *, s32 *);

BOOL fn_8020FA5C(void *p, void *a, s32 *out) {
    s32 r = fn_80210480(p, a, out);
    if (r == -1) {
        *out = 0;
        return FALSE;
    }
    *out = r;
    return TRUE;
}

} /* extern "C" */
