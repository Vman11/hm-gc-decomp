// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF170[];
extern void *memset(void *, int, unsigned long);

u32 * fn_801FB5E0(u32 *param_1) {
    param_1[9] = (u32)lbl_802EF170;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    memset(param_1 + 5,0,0x10);
    return param_1;
}

} /* extern "C" */
