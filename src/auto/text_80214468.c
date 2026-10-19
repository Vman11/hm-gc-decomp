// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802EFF90[];
void __dt__9C80213A84Fv();
void __dl__FPv();
void __dla__FPv();
void __dt__9C80213428Fv();
void dtor_8021217C();
void dtor_80212860();
void fn_800E1E88();
void fn_802127F0();
void fn_80213268();

u32 * fn_80214468(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802EFF90;
        fn_80213268(param_1 + 10);
        fn_802127F0(param_1 + 1);
        if (param_1[9] != 0) {
            __dla__FPv(param_1[9]);
        }
        if (param_1[8] != 0) {
            fn_800E1E88(param_1[8],__dt__9C80213A84Fv);
        }
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        __dt__9C80213428Fv(param_1 + 10,0xffffffff);
        dtor_80212860(param_1 + 1,0xffffffff);
        dtor_8021217C(param_1,0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
