// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801FED50 { virtual void p0(); virtual s32 m(); };
extern "C" { void fn_801FDC30(void *, void *); s32 fn_80202B68(void *); void fn_80201F68(void *, f32); }

void fn_801FED50(u8 *p, f32 f) {
    if (*(void **)(p + 104) == NULL) {
        fn_801FDC30(*(void **)(p + 4), p);
    }
    for (p = *(u8 **)(p + 104); p != NULL; p = *(u8 **)(p + 468)) {
        if (((V_801FED50 *)p)->m() != 0 || fn_80202B68(p) != 0) {
            fn_80201F68(p, f);
        }
    }
}

} /* extern "C" */
