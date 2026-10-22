/* MSL_C uart_console_io.c */
#include "common.h"

s32 __write_console(s32 arg0, s32 arg1, s32 *arg2, s32 arg3);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
s32 __write_console(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    M2C_UNK fn_800E1B68(s32, s32, s32 *, s32);
    s32 fn_800F3AF4(M2C_UNK);
    s32 fn_800F3B64(s32, s32);
    extern s32 lbl_8035A980;
    s32 var_r3;

    var_r3 = 0;
    if ((s32) lbl_8035A980 == 0) {
        var_r3 = fn_800F3AF4(0xE100);
        if (var_r3 == 0) {
            lbl_8035A980 = 1;
        }
    }
    if (var_r3 != 0) {
        return 1;
    }
    if (fn_800F3B64(arg1, *arg2) != 0) {
        *arg2 = 0;
        return 1;
    }
    fn_800E1B68(arg0, arg1, arg2, arg3);
    return 0;
}
#pragma pop
