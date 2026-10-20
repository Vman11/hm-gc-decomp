// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_80164574(void *, u32);

s32 fn_80177B14(u8 *p, u32 n) {
    u32 k = 0;
    u32 i;
    for (i = 0; i < *(u32 *)(p + 6804); i++) {
        if (fn_80164574(p, i) == 1) {
            if (k == n) {
                return i;
            }
            k++;
        }
    }
    return -1;
}

} /* extern "C" */
