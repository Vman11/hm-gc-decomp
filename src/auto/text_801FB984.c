/* Functions from 0x801FB984 to 0x801FBA4C, found by decomp-toolkit. */
#include "common.h"

void fn_801FB984(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}

void fn_801FBA24(void *arg0, f32 farg0) {
    extern f32 lbl_80365588;
    extern f32 lbl_8036558C;
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < lbl_80365588) {
        var_f1 = lbl_80365588;
    }
    if (var_f1 > lbl_8036558C) {
        var_f1 = lbl_8036558C;
    }
    M2C_FIELD(arg0, f32 *, 0x18) = var_f1;
}

