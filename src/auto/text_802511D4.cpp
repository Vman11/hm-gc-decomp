// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2160[];
void __ct__9C8023D2ACFv(void);

u32 * fn_802511D4(u32 *param_1) {
    __ct__9C8023D2ACFv();
    *param_1 = (u32)lbl_802F2160;
    *(u8 *)(param_1 + 5) = 0;
    *(u8 *)(param_1 + 7) = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    *(u8 *)(param_1 + 0x47) = 0;
    return param_1;
}

} /* extern "C" */
