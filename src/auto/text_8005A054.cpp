// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_802421C0(void *p, s32 k);

s32 fn_8005A054(u8 *p, s32 mode) {
    u8 r;
    switch (mode) {
    case 2:
        r = 0;
        if (fn_802421C0(p, 0) != 0 || (fn_802421C0(p, 2) != 0 && **(s32 **)(p + 340) != 0)) r = 1;
        return r;
    case 3:
        r = 0;
        if (fn_802421C0(p, 0) != 0 || (fn_802421C0(p, 2) != 0 && **(s32 **)(p + 340) != 0)) r = 1;
        return r;
    }
    return 1;
}

} /* extern "C" */
