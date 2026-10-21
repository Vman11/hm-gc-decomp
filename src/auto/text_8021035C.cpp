// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EFC88[];
void __dt__9C8020FA10Fv(void);
void __dl__FPv(void *);
void __dla__FPv(int);
void dtor_8021217C(void *, int);
void dtor_80212860(void *, int);
void fn_800E1E88(int, int);
void fn_802127F0(void *);

u32 * fn_8021035C(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802EFC88;
        if (param_1[9] != 0) {
            __dla__FPv((int)(param_1[9]));
        }
        if (param_1[8] != 0) {
            fn_800E1E88((int)(param_1[8]), (int)(__dt__9C8020FA10Fv));
        }
        fn_802127F0(param_1 + 1);
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        dtor_80212860(param_1 + 1, (int)(0xffffffff));
        dtor_8021217C(param_1, (int)(0));
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
