// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern char lbl_8029A854[];
extern char lbl_8029A860[];
extern u8 lbl_80361A58[0x4];
extern char lbl_80361B78[0x5];
extern char lbl_80361B80[0x4];
extern char lbl_80361B84[0x6];
void fn_8023F214();
s32 fn_8023F52C();

void fn_800A0A30(s32 param_1) {
    u32 uVar1;

    uVar1 = fn_8023F52C(param_1,(void *)lbl_80361A58,(void *)lbl_80361A58,(void *)lbl_8029A854,1,0); /* "aStaticPath" */
    *(u32 *)(param_1 + 0x154) = uVar1;
    uVar1 = fn_8023F52C(param_1,(void *)lbl_80361A58,(void *)lbl_80361A58,(void *)lbl_80361B78,1,0);
    *(u32 *)(param_1 + 0x174) = uVar1;
    uVar1 = fn_8023F52C(param_1,(void *)lbl_80361A58,(void *)lbl_80361A58,(void *)lbl_80361B80,1,0);
    *(u32 *)(param_1 + 0x178) = uVar1;
    uVar1 = fn_8023F52C(param_1,(void *)lbl_80361A58,(void *)lbl_80361A58,(void *)lbl_80361B84,1,0); /* "Slack" */
    *(u32 *)(param_1 + 0x17c) = uVar1;
    uVar1 = fn_8023F52C(param_1,(void *)lbl_80361A58,(void *)lbl_80361A58,(void *)lbl_8029A860,0,0); /* "bRespondToSpiritEvents" */
    *(u32 *)(param_1 + 0x180) = uVar1;
    fn_8023F214(param_1);
}
