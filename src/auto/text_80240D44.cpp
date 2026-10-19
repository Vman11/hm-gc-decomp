// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_802487B4(int);

void fn_80240D44(s32 param_1) {
    if (*(void **)(param_1 + 0x108) != 0) {
        fn_802487B4((int)(*(void **)(param_1 + 0x108)));
    }
}

} /* extern "C" */
