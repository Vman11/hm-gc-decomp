// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B460;
extern u32 lbl_8035B530;
extern char lbl_8035E1BC[0x8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
u32 fn_800F9398(u8 *, char *);
void fn_80188144(void *, u32, u32, s32);
void fn_802416D4(u8 *, u32);
struct C801883E0 { u8 pad[0xcc]; C801883E0(); };

void fn_80057908(void *param_1, u32 param_2) {
    u8 *p = (u8 *)param_1;
    u32 uVar1;

    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    *(u8 **)(p + 0x1f4) = new u8[0x10];
    fn_800F7E98();
    if (*(u32 *)(p + 0x1f4) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    **(u32 **)(p + 0x1f4) = 0;
    (*(u32 **)(p + 0x1f4))[1] = 0;
    (*(u32 **)(p + 0x1f4))[2] = 0;
    (*(u32 **)(p + 0x1f4))[3] = 0;
    uVar1 = fn_800F9398(*(u8 **)(lbl_8035B460 + 8) + 0x90, lbl_8035E1BC);
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    *(C801883E0 **)(p + 0x23c) = new C801883E0();
    fn_800F7E98();
    if (*(u32 *)(p + 0x23c) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (*(u32 *)(p + 0x23c) != 0) {
        fn_80188144(*(void **)(p + 0x23c), *(u32 *)(lbl_8035B460 + 8), uVar1, 0);
    }
    fn_802416D4(p, param_2);
}

} /* extern "C" */
