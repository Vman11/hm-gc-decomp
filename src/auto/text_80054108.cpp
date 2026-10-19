// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B308;
extern u32 lbl_8035B460;
extern u32 lbl_8035B530;
extern u32 lbl_8035B65C;
extern char lbl_8035E00C[0x7];
extern char lbl_8035E014[0x8];
extern char lbl_8035E01C[0x6];
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 fn_800F8274(int, int);
u32 fn_800F9398(int, int);
void fn_8018DFAC(int, int, int);
void fn_8019B7E8(int, int);
u32 fn_802416D4(void);
struct C8018E150 { char pad[0xa8]; C8018E150(void); };
struct VCall_fn_80054108_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void m(); };

u32 fn_80054108(u32 param_1) {
    u32 uVar1;
    u32 uVar2;
    u32 iVar3;

    uVar1 = fn_802416D4();
    *(u32 *)(param_1 + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
    uVar2 = fn_800F8274((int)(*(u32 *)(*(u32 *)(*(u32 *)(param_1 + 0x118) + 0xa0) + 0xa8)), (int)(lbl_8035E00C)); /* "spineR" */
    *(u32 *)(param_1 + 0x15c) = uVar2;
    uVar2 = fn_800F8274((int)(*(u32 *)(*(u32 *)(*(u32 *)(param_1 + 0xe0) + 0xa0) + 0xa8)), (int)(lbl_8035E014)); /* "bone33R" */
    *(u32 *)(param_1 + 0x160) = uVar2;
    uVar2 = fn_800F9398((int)(*(u32 *)(lbl_8035B460 + 8) + 0x90), (int)(lbl_8035E01C)); /* "SPweb" */
    if (lbl_8035B530 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B530));
    iVar3 = (u32) new C8018E150();
    *(u32 *)(param_1 + 0x158) = iVar3;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x158) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    if (*(u32 *)(param_1 + 0x158) != 0) {
        fn_8018DFAC((int)(*(u32 *)(param_1 + 0x158)), (int)(*(u32 *)(lbl_8035B460 + 8)), (int)(uVar2));
        **(u32 **)(param_1 + 0x158) = **(u32 **)(param_1 + 0x158) & 0xfffff7ff;
        fn_8019B7E8((int)(*(u32 *)(lbl_8035B65C + 0xc)), (int)(*(u32 *)(param_1 + 0x158)));
    }
    ((VCall_fn_80054108_0 *)(*(u32 **)(param_1 + 0xe0)))->m();
    return uVar1;
}
}
