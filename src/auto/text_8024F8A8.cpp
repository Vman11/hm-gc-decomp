// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B590;
extern u32 lbl_8035B684;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
struct VCall_fn_8024F8A8_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };
struct VCall_fn_8024F8A8_1 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_8024F8A8_2 { char vptr_pad[0xc0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual int m(); };

void fn_8024F8A8(u32 param_1) {
    s32 iVar1;
    u32 uVar2;
    u32 uVar3;

    iVar1 = ((VCall_fn_8024F8A8_0 *)(param_1))->m();
    if (iVar1 != 0) {
        ((VCall_fn_8024F8A8_1 *)(param_1))->m();
    }
    iVar1 = ((VCall_fn_8024F8A8_2 *)(lbl_8035B684))->m();
    *(u32 *)(param_1 + 0x348) = (iVar1 + 1) * 8;
    if (lbl_8035B590 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B590));
    uVar2 = __nwa__FUl((int)(*(u32 *)(param_1 + 0x348) << 2));
    *(u32 *)(param_1 + 0x34c) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x34c) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    iVar1 = 0;
    for (uVar3 = 0; uVar3 < *(u32 *)(param_1 + 0x348); uVar3 = uVar3 + 1) {
        *(u32 *)(*(u32 *)(param_1 + 0x34c) + iVar1) = 0;
        iVar1 = iVar1 + 4;
    }
    *(u32 *)(param_1 + 0x44) = 1;
}
}
