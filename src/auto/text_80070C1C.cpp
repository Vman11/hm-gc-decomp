// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_802421C0(void *, s32);
s32 fn_80242198(void *, s32);

s32 fn_80070C1C(void *p, s32 a) {
    switch (a) {
    case 18:
        return fn_802421C0(p, 0);
    case 19:
        return fn_802421C0(p, 1);
    case 33: {
        u8 r = 0;
        if (fn_80242198(p, 4) != 0 && fn_80242198(p, 2) == 0) {
            r = 1;
        }
        return r;
    }
    }
    return 1;
}

} /* extern "C" */
