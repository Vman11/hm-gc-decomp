// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8B48[];
void __dla__FPv(int);
void __dl__FPv(int);
void __dt__9C8018E2ACFv(int, int);
void fn_8018E1F4(int);

u32 __dt__9C80185E60Fv(u32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0xc) = lbl_802E8B48;
        fn_8018E1F4((int)(param_1));
        if (*(u32 *)(param_1 + 0x18) != 0) {
            __dla__FPv((int)(*(u32 *)(param_1 + 0x18)));
        }
        *(u32 *)(param_1 + 0x10) = 0;
        *(u32 *)(param_1 + 0x14) = 0;
        *(u32 *)(param_1 + 0x18) = 0;
        __dt__9C8018E2ACFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
