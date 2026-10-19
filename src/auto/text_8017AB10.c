// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void __dla__FPv();
void __dl__FPv();
void fn_80102E34();
void fn_80103310();

u32 * __dt__9C8017AB98Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        fn_80102E34(param_1 + 3);
        if (param_1[2] != 0) {
            if (param_1[2] != 0) {
                __dla__FPv(param_1[2] + -0x10);
            }
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        fn_80103310(param_1 + 3,0xffffffff);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
