// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __dt__9C80251FB4Fv[];
extern u32 lbl_8035B460;
void __dla__FPv(int);
void fn_800E1E88(int, int);
void fn_8011C314(int);
void fn_80253828(int, int);
struct VCall_fn_80251FC8_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_80251FC8_1 { char vptr_pad[0x10];  virtual void m(int); };
struct VCall_fn_80251FC8_2 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_80251FC8_3 { char vptr_pad[0x10];  virtual void m(int); };
struct VCall_fn_80251FC8_4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(); };
struct VCall_fn_80251FC8_5 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_80251FC8_6 { char vptr_pad[0x7c];  virtual void m(int); };

void fn_80251FC8(u32 param_1) {
    u32 iVar1;
    u32 *piVar2;
    u32 uVar3;

    if (*(u32 *)(param_1 + 0x70) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x70)), (int)(__dt__9C80251FB4Fv));
    }
    if (*(u32 *)(param_1 + 0x20) != 0) {
        ((VCall_fn_80251FC8_0 *)(*(u32 *)(param_1 + 0x20)))->m();
        iVar1 = *(u32 *)(param_1 + 0x20);
        if (iVar1 != 0) {
            ((VCall_fn_80251FC8_1 *)(iVar1))->m((u32)(1));
        }
    }
    if (*(u32 *)(param_1 + 0x1c) != 0) {
        ((VCall_fn_80251FC8_2 *)(*(u32 *)(param_1 + 0x1c)))->m();
        iVar1 = *(u32 *)(param_1 + 0x1c);
        if (iVar1 != 0) {
            ((VCall_fn_80251FC8_3 *)(iVar1))->m((u32)(1));
        }
    }
    if (*(u32 **)(param_1 + 0x18) != (u32 *)0x0) {
        ((VCall_fn_80251FC8_4 *)(*(u32 **)(param_1 + 0x18)))->m();
        piVar2 = *(u32 **)(param_1 + 0x14);
        if (piVar2 != (u32 *)0x0) {
            ((VCall_fn_80251FC8_5 *)(piVar2))->m((u32)(*(u32 *)(param_1 + 0x18)));
        }
        *(u32 *)(*(u32 *)(lbl_8035B460 + 0xc) + 0x2c5c) = 0;
    }
    if (*(u32 *)(param_1 + 0x28) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 0x28)));
    }
    if (*(u32 *)(param_1 + 0x30) != 0) {
        iVar1 = 0;
        for (uVar3 = 0; uVar3 < *(u32 *)(param_1 + 0x60); uVar3 = uVar3 + 1) {
            fn_80253828((int)(*(u32 *)(*(u32 *)(param_1 + 0x30) + iVar1)), (int)(1));
            *(u32 *)(*(u32 *)(param_1 + 0x30) + iVar1) = 0;
            iVar1 = iVar1 + 4;
        }
        __dla__FPv((int)(*(u32 *)(param_1 + 0x30)));
    }
    if (*(u32 *)(param_1 + 0x24) != 0) {
        fn_8011C314((int)(*(u32 *)(param_1 + 0x24)));
        iVar1 = *(u32 *)(param_1 + 0x24);
        if (iVar1 != 0) {
            ((VCall_fn_80251FC8_6 *)(iVar1))->m((u32)(1));
        }
    }
    *(u32 *)(param_1 + 0x78) = 0;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x60) = 0;
    *(u32 *)(param_1 + 100) = 0;
    *(u32 *)(param_1 + 0x68) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
    *(u32 *)(param_1 + 0x34) = 0;
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x70) = 0;
    *(u32 *)(param_1 + 0x74) = 0;
    *(u32 *)(param_1 + 0x7c) = 0;
    *(u32 *)(param_1 + 0x8c) = 0;
}
}
