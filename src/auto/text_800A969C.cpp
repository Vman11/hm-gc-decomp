// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_802421C0(void *, s32);

s32 fn_800A969C(void *p, s32 a) {
    switch (a) {
    case 3:
        return fn_802421C0(p, 0);
    }
    return 1;
}

} /* extern "C" */
