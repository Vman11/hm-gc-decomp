// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800BFAA8(void *);
s32 fn_8020B1E0(void);

s32 fn_80208CB0(u8 *p) {
    if (*(s32 *)(p + 72) != 0) {
        s32 r;
        fn_800BFAA8(p + 12);
        r = fn_8020B1E0();
        if (r != 7) {
            *(s32 *)(p + 72) = 0;
        }
        return r;
    }
    return 0;
}

} /* extern "C" */
