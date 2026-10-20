// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *fn_80243FC8(void *);
s32 fn_80242F44(void *, void *);

s32 fn_802421C0(u8 *p) {
    void *x = *(void **)(p + 228);
    if (x != NULL && *(void **)(p + 248) != NULL) {
        return fn_80242F44(fn_80243FC8(*(void **)(p + 248)), x);
    }
    return 0;
}

} /* extern "C" */
