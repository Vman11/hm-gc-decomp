// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __ct__9C800FB754Fv(int);
extern void *memset(void *, int, unsigned long);

u32 * __ct__9C80214C34Fv(u32 *param_1) {
    __ct__9C800FB754Fv((int)(param_1 + 0x11));
    __ct__9C800FB754Fv((int)(param_1 + 0x26));
    *param_1 = 0;
    memset(param_1 + 1,0,0x40);
    memset(param_1 + 0x16,0,0x40);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    memset(param_1 + 0x47,0,0xa0);
    *(u8 *)(param_1 + 0x32) = 0;
    *(u8 *)(param_1 + 0x3a) = 0;
    param_1[0x6f] = 0;
    return param_1;
}

} /* extern "C" */
