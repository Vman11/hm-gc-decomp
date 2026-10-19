// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802F1F7C[];
extern s32 lbl_8035B594;
void __ct__9C801829F8Fv();
void __ct__9C801E5944Fv();
void __ct__9C8023CE38Fv();
void fn_80250164();

s32 __ct__9C8024FB58Fv(s32 param_1) {
    __ct__9C8023CE38Fv();
    *(u8 **)(param_1 + 0x10) = lbl_802F1F7C;
    __ct__9C8023CE38Fv(param_1 + 0x4c);
    __ct__9C801829F8Fv(param_1 + 0xa4);
    __ct__9C801E5944Fv(param_1 + 0x11c);
    __ct__9C801829F8Fv(param_1 + 0x14c);
    __ct__9C801E5944Fv(param_1 + 0x1c4);
    __ct__9C801829F8Fv(param_1 + 0x1f0);
    fn_80250164(param_1 + 0x268);
    lbl_8035B594 = param_1;
    *(u32 *)(param_1 + 0x48) = 0;
    *(u32 *)(param_1 + 0x9c) = 0;
    *(u32 *)(param_1 + 0xa0) = 0;
    *(u32 *)(param_1 + 0x144) = 0;
    *(u32 *)(param_1 + 0x27c) = 0;
    *(u32 *)(param_1 + 0x350) = 0;
    *(u32 *)(param_1 + 0x94) = 0;
    *(u32 *)(param_1 + 0x98) = 0;
    *(u32 *)(param_1 + 0x348) = 0;
    *(u32 *)(param_1 + 0x34c) = 0;
    *(u32 *)(param_1 + 0x148) = 0;
    *(u32 *)(param_1 + 0x1ec) = 0;
    return param_1;
}
