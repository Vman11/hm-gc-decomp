// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF1B8[];
void __ct__9C800FB754Fv(int);
extern void *memset(void *, int, unsigned long);

u32 * fn_801FB798(u32 *param_1) {
    param_1[0xf] = (u32)lbl_802EF1B8;
    __ct__9C800FB754Fv((int)(param_1 + 5));
    __ct__9C800FB754Fv((int)(param_1 + 10));
    *param_1 = 0;
    memset(param_1 + 1,0,0x10);
    return param_1;
}

} /* extern "C" */
