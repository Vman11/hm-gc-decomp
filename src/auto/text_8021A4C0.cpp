// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_8021AEE8(void *, void *, void *);

BOOL fn_8021A4C0(void *p, void *a, s32 *out, void *b) {
    s32 r = fn_8021AEE8(p, a, b);
    if (r == -1) {
        *out = 0;
        return FALSE;
    }
    *out = r;
    return TRUE;
}

} /* extern "C" */
