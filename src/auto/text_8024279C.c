// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u32 lbl_8035AB00;
extern u32 lbl_8035AB04;
extern char lbl_803661C0[0x7];
extern char lbl_803661C8[0x7];
void fn_800604C4();
u32 fn_800EB1B4();
void fn_800F6FBC();
void fn_800F7E98();
void fn_800F7EC0();
u32 __nw__FUl();
u32 fn_80115568();
void __ct__9C80116200Fv();
void fn_80116320();
void fn_80116B10();

u32 fn_8024279C(u32 param_1, u32 param_2, u32 param_3) {
    u32 uVar1;
    u32 iVar2;
    u32 uVar3;
    u32 uVar4;
    u8 auStack_28 [4];
    u8 auStack_24 [8];
    u8 auStack_1c [20];

    fn_80116B10(param_2,*(u32 *)(param_3 + 4),auStack_28);
    fn_800F6FBC((void *)lbl_803661C0,auStack_1c); /* "Player" */
    if (lbl_8035AB04 == 0) {
        if (lbl_8035AB00 == 0) {
            fn_800604C4(0xfffffffe,0,0,0);
        }
        fn_800F7EC0(lbl_8035AB00);
        iVar2 = __nw__FUl(0x27ac);
        if (iVar2 != 0) {
            __ct__9C80116200Fv(iVar2);
        }
        lbl_8035AB04 = iVar2;
        fn_800F7E98();
        if (lbl_8035AB04 == 0) {
            fn_800604C4(0xfffffffc,0,0,0);
        }
    }
    uVar3 = fn_80115568(lbl_8035AB04,auStack_1c);
    fn_800F6FBC((void *)lbl_803661C8,auStack_24); /* "nState" */
    fn_80116320(uVar3,auStack_24,*(u32 *)(param_3 + 4));
    uVar4 = *(u32 *)(param_3 + 4);
    uVar1 = 0;
    if (uVar4 != 0) {
        uVar1 = fn_800EB1B4();
        uVar1 = uVar1 % uVar4;
    }
    return uVar1 & 0xffff;
}
