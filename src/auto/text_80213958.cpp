// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(void *);
s32 fn_80211394(void *);

s32 fn_80213958(u8 *p) {
    if (*(void **)(p + 20) != NULL) {
        if (*(void **)(p + 12) != NULL) {
            __dla__FPv(*(void **)(p + 12));
        }
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
        return fn_80211394(p);
    }
    return 0;
}

} /* extern "C" */
