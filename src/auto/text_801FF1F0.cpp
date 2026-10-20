// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801FF1F0 { virtual void p0(); virtual s32 m(); };
extern "C" { s32 fn_80202B68(void *); void fn_802025B8(void *, void *); }

void fn_801FF1F0(u8 *p, void *x, void *a) {
    V_801FF1F0 *n;
    for (n = *(V_801FF1F0 **)(p + 104); n != NULL; n = *(V_801FF1F0 **)((u8 *)n + 468)) {
        if ((n->m() != 0 || fn_80202B68(n) != 0) && n == x) {
            fn_802025B8(n, a);
        }
    }
}

} /* extern "C" */
