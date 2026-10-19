// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_8013A0C0(int);

void fn_80176240(u32 *param_1) {
    if ((*param_1 & 0x10) != 0) {
        if (param_1[0x13] != 0) {
            __dla__FPv((int)(param_1[0x13]));
        }
        if (param_1[0x14] != 0) {
            __dla__FPv((int)(param_1[0x14]));
        }
        if (param_1[0x15] != 0) {
            __dla__FPv((int)(param_1[0x15]));
        }
        if (param_1[0x16] != 0) {
            __dla__FPv((int)(param_1[0x16]));
        }
        if (param_1[0x11] != 0) {
            __dla__FPv((int)(param_1[0x11]));
        }
        if (param_1[0x12] != 0) {
            __dla__FPv((int)(param_1[0x12]));
        }
        if (param_1[0x17] != 0) {
            __dla__FPv((int)(param_1[0x17]));
        }
    }
    fn_8013A0C0((int)(param_1));
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
}

} /* extern "C" */
