/* Functions from 0x801951BC to 0x801952A0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AE68;
void fn_801951BC(s32 arg0) {
    lbl_8035AE68 = arg0;
}

void fn_80195208(void *arg0, void *arg1) {
    void *temp_r0;

    M2C_FIELD(arg1, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg1, void **, 0x10) = (void *) M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(arg0, void **, 0x10) = arg1;
    temp_r0 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg1, void **, 0x14) = arg0;
        return;
    }
    M2C_FIELD(arg1, void **, 0x14) = temp_r0;
}

