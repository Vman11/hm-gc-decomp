// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035AB78;
extern void *memset(void *, int, unsigned long);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
struct VCall_fn_801287E8_0 { char vptr_pad[0xc];  virtual int m(int); };

void fn_801287E8(u32 param_1, u32 param_2) {
    u32 uVar1;
    u16 uVar3;
    u32 iVar2;
    u32 iVar5;
    u32 uVar4;

    if (lbl_8035AB78 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AB78));
    uVar1 = __nwa__FUl((int)(*(u32 *)(param_1 + 0xc) << 4));
    *(u32 *)(param_1 + 0x54) = uVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x54) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    memset(*(void **)(param_1 + 0x54),0,*(u32 *)(param_1 + 0xc) << 4);
    uVar4 = 0;
    iVar5 = 0;
    for (; uVar4 < *(u32 *)(param_1 + 0xc); uVar4 = uVar4 + 1) {
        uVar3 = ((VCall_fn_801287E8_0 *)(param_2))->m((u32)(uVar4));
        *(u16 *)(*(u32 *)(param_1 + 0x54) + iVar5 + 4) = uVar3;
        iVar2 = *(u32 *)(param_1 + 0x54) + iVar5;
        if ((s32)*(u16 *)(iVar2 + 4) == 0x20) {
            *(u8 *)(iVar2 + 0xe) = 1;
        }
        else if ((s32)*(u16 *)(iVar2 + 4) == 10) {
            *(u8 *)(iVar2 + 0xf) = 1;
        }
        iVar5 = iVar5 + 0x10;
    }
}
}
