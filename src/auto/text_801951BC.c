/* Functions from 0x801951BC to 0x801952A0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AE68;
void fn_801951BC(s32 arg0) {
    lbl_8035AE68 = arg0;
}

void fn_801951C4(void *arg0, s32 arg1) {
    struct List { u8 pad[0x14]; void *heads[1]; };
    void *prev = M2C_FIELD(arg0, void **, 0x18);
    void *next;

    if (prev != NULL) {
        M2C_FIELD(prev, void **, 0x1C) = M2C_FIELD(arg0, void **, 0x1C);
    }
    next = M2C_FIELD(arg0, void **, 0x1C);
    if (next != NULL) {
        M2C_FIELD(next, void **, 0x18) = M2C_FIELD(arg0, void **, 0x18);
    } else {
        M2C_FIELD(arg0, struct List **, 8)->heads[arg1] = M2C_FIELD(arg0, void **, 0x18);
    }
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

void fn_80195238(void *arg0) {
    extern f32 lbl_80364BE0;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_80364BE0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80364BE0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void fn_80195268(void *arg0) {
    extern f32 lbl_80364BE8;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80364BE8;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80364BE8;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80364BE8;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80364BE8;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

