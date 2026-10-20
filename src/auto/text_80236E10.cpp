// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80236E10 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
extern "C" { extern char lbl_802A8A88[]; s32 fn_800F6CD0(void *, const char *); void fn_80241DD0(void *, void *, void *, void *, void *, void *); }

void fn_80236E10(V_80236E10 *q, void *a, void *b, void *c, void *d, void *e) {
    if (fn_800F6CD0(a, lbl_802A8A88) != 0) {
        q->m();
    } else if (*(void **)((u8 *)q + 524) != NULL) {
        fn_80241DD0(*(void **)((u8 *)q + 524), a, b, c, d, e);
    }
}

} /* extern "C" */
