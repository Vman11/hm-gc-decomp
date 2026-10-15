/* Functions from 0x802079CC to 0x802079F0, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    u8 pad[0x20];
    s32 unk20;
} Unk80356920;

typedef struct {
    s32 unk0;
    s32 unk4;
} UnkArg802079CC;

extern Unk80356920 lbl_80356920[];
extern volatile s32 lbl_8035B19C;

void fn_802079CC(UnkArg802079CC* arg0) {
    lbl_8035B19C = lbl_80356920[arg0->unk4].unk20 = 0;
}
