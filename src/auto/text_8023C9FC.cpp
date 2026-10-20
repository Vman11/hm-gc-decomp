// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 *fn_800F8274(void *);

s32 fn_8023C9FC(u8 *p) {
    u8 *r = fn_800F8274(p + 44);
    if (r == NULL) {
        return -1;
    }
    return (r - *(u8 **)(p + 40)) / 32;
}

} /* extern "C" */
