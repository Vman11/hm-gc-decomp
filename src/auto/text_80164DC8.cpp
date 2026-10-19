// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D7A88(int, int);
void fn_800D7CA4(int, int, int, int, int, int, int);
extern void *memset(void *, int, unsigned long);

void fn_80164DC8(s32 param_1) {
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;
    u32 local_18 [1];

    *(u32 *)(param_1 + 0xc) = *(u32 *)(param_1 + 0xc) & 0xfffffff7;
    *(u32 *)(param_1 + 0x1a94) = 0;
    *(u32 *)(param_1 + 0x19a8) = 2;
    *(u32 *)(param_1 + 0x19ac) = 2;
    if ((*(u32 *)(param_1 + 0xc) & 2) != 0) {
        iVar1 = *(s32 *)(param_1 + 0x1938);
        if (((*(u8 *)(iVar1 + 0x46d) != '\0') || (*(u8 *)(iVar1 + 0x46e) != 0)) ||
              (*(u8 *)(iVar1 + 0x46f) != 0)) {
            *(u8 *)(iVar1 + 0x46d) = 0;
            *(u8 *)(iVar1 + 0x46e) = 0;
            *(u8 *)(iVar1 + 0x46f) = 0;
            *(u8 *)(iVar1 + 0x470) = 0xff;
            local_18[0] = *(u32 *)(iVar1 + 0x46d);
            fn_800D7A88((int)(0), (int)(local_18));
        }
        iVar3 = *(s32 *)(param_1 + 0x1938);
        iVar2 = *(s32 *)(param_1 + 0x19ac);
        iVar1 = *(s32 *)(param_1 + 0x19a8);
        if (((*(void **)(iVar3 + 0x47c) != NULL) || (*(s32 *)(iVar3 + 0x480) != iVar1)) ||
              (*(s32 *)(iVar3 + 0x484) != iVar2)) {
            *(u32 *)(iVar3 + 0x47c) = 0;
            *(s32 *)(iVar3 + 0x480) = iVar1;
            *(s32 *)(iVar3 + 0x484) = iVar2;
            fn_800D7CA4((int)(0), (int)(*(u8 *)(iVar3 + 0x46c)), (int)(0), (int)(*(u32 *)(iVar3 + 0x478)), (int)(*(u32 *)(iVar3 + 0x47c)), (int)(*(u32 *)(iVar3 + 0x480)), (int)(*(u32 *)(iVar3 + 0x484)));
        }
    }
    memset((void *)(param_1 + 0x1a98),0,0x20);
}

} /* extern "C" */
