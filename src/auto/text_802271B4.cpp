// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0DC0[];
void __ct__9C80239B40Fv(u32 *);

#pragma opt_propagation off
u32 *fn_802271B4(u32 *param_1) {
    u32 zero;

    __ct__9C80239B40Fv(param_1);
    zero = 0;
    *param_1 = (u32)lbl_802F0DC0;
    param_1[0x95] = zero;
    param_1[0x96] = zero;
    param_1[0x97] = zero;
    param_1[0x98] = zero;
    param_1[0x99] = zero;
    param_1[0x9a] = zero;
    param_1[0x9b] = zero;
    param_1[0x9c] = zero;
    param_1[0x9d] = zero;
    param_1[0x9e] = zero;
    return param_1;
}
#pragma opt_propagation reset

} /* extern "C" */
