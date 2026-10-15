/* Functions from 0x8018B500 to 0x8018B58C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AE40;

typedef struct {
    s32 unk0;
    u8 unk4[8];
    s32 unkC;
} Unk8018B500Entry;

typedef struct {
    u8 unk0[0x74];
    u32 unk74;
    u32 unk78;
    u8 unk7C[8];
    u32 unk84;
    u8 unk88[8];
    Unk8018B500Entry *unk90;
} Unk8018B500;

void fn_8018B500(Unk8018B500 *arg0, s32 arg1) {
    arg0->unk90[arg0->unk78].unk0 = lbl_8035AE40;
    arg0->unk90[arg0->unk78].unkC = arg1;
    if (arg0->unk84 < arg0->unk74) {
        arg0->unk84++;
    }
}

void fn_8018B544(Unk8018B500 *arg0) {
    arg0->unk90[arg0->unk78].unk0 = lbl_8035AE40;
    arg0->unk90[arg0->unk78].unkC = 0;
    if (arg0->unk84 < arg0->unk74) {
        arg0->unk84++;
    }
}

