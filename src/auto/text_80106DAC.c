/* Functions from 0x80106DAC to 0x80106E84, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 m[3][4];
} Mtx34Struct;

extern s32 lbl_8035AA50;
extern f32 lbl_803638E8;
void fn_80106DAC(f32* arg0, f32* arg1) {
    s32 i;
    for (i = 0; i < 12; i++) {
        arg0[i] = arg1[i];
    }
}

void fn_80106E10(f32* arg0) {
    arg0[0] = lbl_803638E8;
    arg0[1] = lbl_803638E8;
    arg0[2] = lbl_803638E8;
    arg0[3] = lbl_803638E8;
    arg0[4] = lbl_803638E8;
    arg0[5] = lbl_803638E8;
    arg0[6] = lbl_803638E8;
    arg0[7] = lbl_803638E8;
    arg0[8] = lbl_803638E8;
    arg0[9] = lbl_803638E8;
    arg0[10] = lbl_803638E8;
    arg0[11] = lbl_803638E8;
}

void fn_80106E74(s32 arg0) {
    lbl_8035AA50 = arg0;
}

extern s32 lbl_8035AA58;
void fn_80106E7C(s32 arg0) {
    lbl_8035AA58 = arg0;
}

