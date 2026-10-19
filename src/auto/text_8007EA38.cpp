// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B460;
extern u32 lbl_8035B530;
extern char lbl_8035F980[0x8];
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
u32 fn_800F9398(int, int);
void fn_80188144(int, int, int, int);
void fn_802416D4(int, int);
}
struct C801883E0 { char pad[0xcc]; C801883E0(void); };

extern "C" void fn_8007EA38(u32 param_1, u32 param_2) {
    u32 uVar1;
    u32 iVar2;

    uVar1 = fn_800F9398((int)(*(u32 *)(lbl_8035B460 + 8) + 0x90), (int)((void *)lbl_8035F980)); /* "srchdum" */
    if (lbl_8035B530 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B530));
    iVar2 = (u32) new C801883E0();
    *(u32 *)(param_1 + 0x154) = iVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x154) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    if (*(u32 *)(param_1 + 0x154) != 0) {
        fn_80188144((int)(*(u32 *)(param_1 + 0x154)), (int)(*(u32 *)(lbl_8035B460 + 8)), (int)(uVar1), (int)(0));
    }
    if (lbl_8035B530 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B530));
    uVar1 = __nwa__FUl((int)(0x10));
    *(u32 *)(param_1 + 0x198) = uVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x198) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    **(u32 **)(param_1 + 0x198) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x198) + 4) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x198) + 8) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x198) + 0xc) = 0;
    fn_802416D4((int)(param_1), (int)(param_2));
}
