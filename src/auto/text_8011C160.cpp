// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3E18[];
void __dla__FPv(int);
void __dl__FPv(int);
void __dt__9C8011D6B4Fv(int, int);
void fn_8011D060(int);

u32 * __dt__9C8011C224Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        param_1[0x1b] = (u32)lbl_802E3E18;
        if ((s32)*param_1 != 0) {
            fn_8011D060((int)(param_1 + 1));
            if (param_1[0x15] != 0) {
                if (param_1[0x15] != 0) {
                    __dla__FPv((int)(param_1[0x15] + -0x10));
                }
            }
            if (param_1[0x18] != 0) {
                __dla__FPv((int)(param_1[0x16]));
            }
            *param_1 = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            param_1[0x19] = 0;
            param_1[0x18] = 0;
            param_1[0x1a] = 0;
        }
        __dt__9C8011D6B4Fv((int)(param_1 + 1), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
