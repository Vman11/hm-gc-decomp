// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memset(void *, int, unsigned long);

u32 * __ct__9C8020F220Fv(u32 *param_1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    memset(param_1 + 3,0,8);
    memset(param_1 + 5,0,8);
    return param_1;
}

} /* extern "C" */
