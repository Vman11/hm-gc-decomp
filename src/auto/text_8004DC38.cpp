// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_802421C0(void *, s32);

s32 fn_8004DC38(void *p, s32 a) {
    switch (a) {
    case 4:
        return fn_802421C0(p, 0);
    case 5:
        return fn_802421C0(p, 0);
    case 6:
        return fn_802421C0(p, 1);
    case 7:
        return fn_802421C0(p, 2);
    case 8:
        return fn_802421C0(p, 3);
    }
    return 1;
}

} /* extern "C" */
