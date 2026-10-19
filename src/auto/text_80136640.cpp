// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C8014B0D4Fv[];
extern u8 __dt__9C8014A9A8Fv[];
void fn_800E1E88(int, int);
void fn_8014A67C(int);
void fn_8014AD6C(int);
extern void *memset(void *, int, unsigned long);

void fn_80136640(u32 *param_1) {
    s32 iVar2;
    u32 uVar1;
    u32 uVar3;
    s32 iVar4;

    if (param_1[1] != 0) {
        uVar1 = 0;
        iVar2 = 0;
        for (; uVar1 < *param_1; uVar1 = uVar1 + 1) {
            fn_8014A67C((int)(param_1[1] + iVar2));
            iVar2 = iVar2 + 0x94;
        }
        fn_800E1E88((int)(param_1[1]), (int)(__dt__9C8014A9A8Fv));
    }
    if (param_1[3] != 0) {
        uVar3 = 0;
        iVar4 = 0;
        for (; uVar3 < param_1[2]; uVar3 = uVar3 + 1) {
            fn_8014AD6C((int)(param_1[3] + iVar4));
            iVar4 = iVar4 + 0x20;
        }
        fn_800E1E88((int)(param_1[3]), (int)(__dt__9C8014B0D4Fv));
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0xc] = 0;
    memset(param_1 + 4,0,0x20);
}

} /* extern "C" */
