// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80361C20[8];
s32 fn_800F6CD0(void *, const char *);
void fn_800F6E40(void *, void *);
double fn_800EB838(void *);

void fn_800A2198(u8 *p) {
    if (fn_800F6CD0(*(void **)(p + 236), lbl_80361C20) != 0) {
        **(f32 **)(p + 332) = *(f32 *)(p + 428);
    } else {
        u8 buf[12];
        fn_800F6E40(buf, *(void **)(p + 236));
        **(f32 **)(p + 332) = fn_800EB838(buf);
    }
}

} /* extern "C" */
