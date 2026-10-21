// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8010E450(void *, void *, void *);

void fn_8010EA74(u8 **p, s32 k, void **a, void *d, s32 e) {
    s32 i;
    s32 n;
    void **q;
    i = 0;
    n = *(s32 *)(*p + 32);
    for (; i < n; i++) {
        ((s32 *)p[1])[i] = i;
    }
    k--;
    q = &a[k];
    for (; k >= 0; k--) {
        u8 f = 0;
        if (d != 0 && e == k) {
            f = 1;
        }
        fn_8010E450(p, *q, f ? d : 0);
        q--;
    }
}

} /* extern "C" */
