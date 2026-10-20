// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801FF15C { virtual void p0(); virtual s32 m(); };
extern "C" { s32 fn_80202B68(void *); void fn_802025B8(void *, void *); }

void fn_801FF15C(u8 *p, u32 x, void *a) {
    V_801FF15C *n;
    for (n = *(V_801FF15C **)(p + 104); n != NULL; n = *(V_801FF15C **)((u8 *)n + 468)) {
        if ((n->m() != 0 || fn_80202B68(n) != 0) && *(u32 *)((u8 *)n + 16) == x) {
            fn_802025B8(n, a);
        }
    }
}

} /* extern "C" */
