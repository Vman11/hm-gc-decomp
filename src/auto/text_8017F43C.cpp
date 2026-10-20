// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_80199910(void *, void *);

BOOL fn_8017F43C(u8 *p, void *a) {
    u8 *s = p + 564;
    u8 *n;
    for (n = *(u8 **)(p + 580); n != NULL; n = *(u8 **)(n + 8)) {
        if (n == s) {
            return TRUE;
        }
        if (fn_80199910(n, a) != 0) {
            return TRUE;
        }
    }
    return FALSE;
}

} /* extern "C" */
