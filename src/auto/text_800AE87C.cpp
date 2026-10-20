// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_802421C0(void *, s32);

s32 fn_800AE87C(void *p, s32 a) {
    switch (a) {
    case 10:
        return fn_802421C0(p, 1);
    case 11:
        return fn_802421C0(p, 2);
    case 12:
        return fn_802421C0(p, 3);
    }
    return 1;
}

} /* extern "C" */
