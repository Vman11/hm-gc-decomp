/* Functions from 0x801063F0 to 0x801064C4, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 unk18;
    u8 pad19[7];
    f32 unk20[3][4];
} Unk801063F0;

extern f32 lbl_803638A8;
extern f32 lbl_803638AC;
extern f32 lbl_803638C0;

void fn_801063F0(Unk801063F0* arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    arg0->unk20[0][0] = lbl_803638A8;
    arg0->unk20[0][1] = lbl_803638A8;
    arg0->unk20[0][2] = lbl_803638A8;
    arg0->unk20[0][3] = lbl_803638AC;
    arg0->unk20[1][0] = lbl_803638A8;
    arg0->unk20[1][1] = lbl_803638A8;
    arg0->unk20[1][2] = lbl_803638A8;
    arg0->unk20[1][3] = lbl_803638AC;
    arg0->unk20[2][0] = lbl_803638A8;
    arg0->unk20[2][1] = lbl_803638A8;
    arg0->unk20[2][2] = lbl_803638A8;
    arg0->unk20[2][3] = lbl_803638AC;
}

extern f32 lbl_803638A8;
extern f32 lbl_803638AC;
extern f32 lbl_803638C0;
void fn_80106474(f32* arg0, f32* arg1) {
    f32 d;
    f32 x = arg1[0];
    f32 y = arg1[1];
    f32 z = arg1[2];
    d = lbl_803638C0 * (arg0[5] * x + arg0[6] * y + arg0[7] * z);
    arg0[11] = x - d * arg0[5];
    arg0[12] = y - d * arg0[6];
    arg0[13] = z - d * arg0[7];
}
