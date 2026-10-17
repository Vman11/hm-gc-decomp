/* Functions from 0x8023DC00 to 0x8023DC24, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} UnkStruct_8023DC00;

extern UnkStruct_8023DC00* lbl_8035B460;
extern volatile s32 lbl_8035B464;

#pragma scheduling off
void fn_8023DC00(UnkStruct_8023DC00* arg0) {
    lbl_8035B460 = arg0;
    lbl_8035B464 = 0;
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
}
#pragma scheduling reset
