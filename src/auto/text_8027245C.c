/* Functions from 0x8027245C to 0x80272500, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B808;

typedef struct {
    s32 unk0;
    s32 unk4[60];
    s32 unkF4[60];
    s32 unk1E4;
    s32 unk1E8;
} UnkStruct8027245C;

void fn_8027245C(UnkStruct8027245C* arg0) {
    s32 i;

    for (i = 0; i < 60; i++) {
        arg0->unk4[i] = 0;
        arg0->unkF4[i] = 0;
    }
    arg0->unk1E8 = 0;
    arg0->unk0 = 0;
    arg0->unk1E4 = 0;
}

void fn_802724F8(s32 arg0) {
    lbl_8035B808 = arg0;
}

