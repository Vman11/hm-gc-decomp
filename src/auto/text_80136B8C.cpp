// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E5340[];
extern void *memset(void *, int, unsigned long);

u32 * fn_80136B8C(u32 *param_1) {
    param_1[0xd] = (u32)lbl_802E5340;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0xc] = 0;
    memset(param_1 + 4,0,0x20);
    return param_1;
}

} /* extern "C" */
