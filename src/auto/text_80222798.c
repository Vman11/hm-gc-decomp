/* Functions from 0x80222798 to 0x802227B8, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    f32 unk0;
    f32 unk4;
    s32 unk8;
    s32 unkC;
} unkStruct_80222798;

extern f32 lbl_80365A4C;
extern f32 lbl_80365A30;

void fn_80222798(unkStruct_80222798* arg0) {
    arg0->unk0 = lbl_80365A4C;
    arg0->unk4 = lbl_80365A30;
    arg0->unk8 = 0;
    arg0->unkC = 0;
}
