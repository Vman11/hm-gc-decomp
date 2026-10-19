// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B460;
extern u32 lbl_8035B530;
extern u32 lbl_8035B65C;
extern char lbl_8035C33C[0x6];
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
u32 fn_800F9398(int, void *);
void fn_8018DFAC(int, int, int);
void fn_8019B7E8(int, int);
void fn_802416D4(int, int);
}
struct C8018E150 { char pad[0xa8]; C8018E150(void); };

extern "C" void fn_80040ABC(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 iVar2;
    u32 uVar3;

    iVar1 = fn_800F9398((int)(*(u32 *)(lbl_8035B460 + 8) + 0x90),(void *)lbl_8035C33C); /* "Bshad" */
    if (lbl_8035B530 == 0) {
        fn_800604C4((int)(0xfffffffe),0,0,0);
    }
    fn_800F7EC0((int)(lbl_8035B530));
    iVar2 = (u32) new C8018E150;
    *(u32 *)(param_1 + 0x154) = iVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x154) == 0) {
        fn_800604C4((int)(0xfffffffc),0,0,0);
    }
    if ((*(u32 *)(param_1 + 0x154) != 0) && (iVar1 != 0)) {
        fn_8018DFAC((int)(*(u32 *)(param_1 + 0x154)),(int)(*(u32 *)(lbl_8035B460 + 8)),(int)iVar1);
        fn_8019B7E8((int)(*(u32 *)(lbl_8035B65C + 0xc)),(int)(*(u32 *)(param_1 + 0x154)));
    }
    if (lbl_8035B530 == 0) {
        fn_800604C4((int)(0xfffffffe),0,0,0);
    }
    fn_800F7EC0((int)(lbl_8035B530));
    uVar3 = __nwa__FUl(0x18);
    *(u32 *)(param_1 + 0x174) = uVar3;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x174) == 0) {
        fn_800604C4((int)(0xfffffffc),0,0,0);
    }
    **(u32 **)(param_1 + 0x174) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x174) + 4) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x174) + 8) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x174) + 0xc) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x174) + 0x10) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x174) + 0x14) = 0;
    fn_802416D4((int)param_1,(int)param_2);
}
