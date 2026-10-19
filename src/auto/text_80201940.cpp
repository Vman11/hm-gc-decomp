// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801FFCDC(int, int);
void fn_801FFD88(int, int);
void fn_801FFE34(int, int);
void fn_80201454(int);
void fn_802035C4(int);
void fn_802043F4(int);
struct VCall_fn_80201940_0 { char vptr_pad[0x1c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
struct VCall_fn_80201940_1 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };
struct VCall_fn_80201940_2 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };
struct VCall_fn_80201940_3 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };

void fn_80201940(u32 param_1) {
    u32 uVar1;

    if (((((*(u32 *)(param_1 + 8) & 0x400) != 0) && ((*(u32 *)(param_1 + 8) & 0x80) == 0)) &&
            (*(u32 *)(param_1 + 0x24) != 0)) && (*(u32 *)(param_1 + 0x20) != 0)) {
        ((VCall_fn_80201940_0 *)(param_1))->m();
        fn_802035C4((int)(*(u32 *)(param_1 + 0x24)));
        uVar1 = ((VCall_fn_80201940_1 *)(*(u32 *)(*(u32 *)(param_1 + 0x20) + 0x18)))->m();
        fn_801FFE34((int)(uVar1), (int)(*(u32 *)(param_1 + 0x24)));
        *(u32 *)(param_1 + 0x24) = 0;
    }
    if ((*(u32 *)(param_1 + 8) & 0x200) != 0) {
        if ((*(u32 *)(param_1 + 0x24) != 0) && (*(u32 *)(param_1 + 0x20) != 0)) {
            fn_80201454((int)(*(u32 *)(param_1 + 0x24)));
            uVar1 = ((VCall_fn_80201940_2 *)(*(u32 *)(*(u32 *)(param_1 + 0x20) + 0x18)))->m();
            fn_801FFD88((int)(uVar1), (int)(*(u32 *)(param_1 + 0x24)));
            *(u32 *)(param_1 + 0x24) = 0;
        }
    }
    if ((((*(u32 *)(param_1 + 8) & 0x800) != 0) && (*(u32 *)(param_1 + 0x24) != 0)) &&
          (*(u32 *)(param_1 + 0x20) != 0)) {
        fn_802043F4((int)(*(u32 *)(param_1 + 0x24)));
        uVar1 = ((VCall_fn_80201940_3 *)(*(u32 *)(*(u32 *)(param_1 + 0x20) + 0x18)))->m();
        fn_801FFCDC((int)(uVar1), (int)(*(u32 *)(param_1 + 0x24)));
        *(u32 *)(param_1 + 0x24) = 0;
    }
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
    *(u32 *)(param_1 + 0x2c) = 0;
    *(u32 *)(param_1 + 0x30) = 0;
}
}
