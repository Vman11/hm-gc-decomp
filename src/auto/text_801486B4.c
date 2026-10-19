// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u32 lbl_8035ACA0;
extern char lbl_803643B4[0x3];
void __dla__FPv();
void fn_800604C4();
void fn_80060568();
void fn_800EB6F4();
void fn_800EB764();
void fn_800F7E98();
void fn_800F7EC0();
u32 __nwa__FUl();
u32 strlen();

void fn_801486B4(u32 param_1, s8 *param_2) {
    u32 sVar1;
    u32 iVar2;

    if (lbl_8035ACA0 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035ACA0);
    sVar1 = strlen(param_2);
    iVar2 = __nwa__FUl(sVar1 + 0x18);
    fn_800F7E98();
    if (iVar2 == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    if (iVar2 == 0) {
        fn_80060568(param_2,0,0,0);
    }
    else {
        fn_800EB764(iVar2,param_1);
        fn_800EB6F4(iVar2,(void *)lbl_803643B4);
        fn_800EB6F4(iVar2,param_2);
        fn_80060568(iVar2,0,0,0);
        __dla__FPv(iVar2);
    }
}
