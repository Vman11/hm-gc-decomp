// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memset(void *, int, unsigned long);

u32 * __ct__9C8018FFC4Fv(u32 *param_1) {
    memset(param_1 + 1,0,0x38);
    *param_1 = 0;
    return param_1;
}

} /* extern "C" */
