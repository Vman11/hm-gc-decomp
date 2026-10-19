// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
s32 fn_801FFD04(void);
s32 fn_801FFDB0(void);
s32 fn_801FFE5C(void);
void fn_80201478(int, int);
void fn_80203630(int, int);
void fn_80204454(int, int);
struct VCall_fn_80201A8C_0 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_80201A8C_1 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_80201A8C_2 { char vptr_pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_80201A8C_3 { char vptr_pad[0x1c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
struct VCall_fn_80201A8C_4 { char vptr_pad[0x1c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(); };

void fn_80201A8C(s32 param_1, s32 param_2, u32 param_3) {
    u32 uVar1;

    *(u32 *)(param_1 + 0x20) = param_3;
    if (((*(u32 *)(param_1 + 8) & 0x400) != 0) && ((*(u32 *)(param_1 + 8) & 0x80) == 0)) {
        if (*(u32 *)(param_1 + 0x24) == 0) {
            ((VCall_fn_80201A8C_0 *)(param_2))->m();
            uVar1 = fn_801FFE5C();
            *(u32 *)(param_1 + 0x24) = uVar1;
        }
        fn_80203630((int)(*(u32 *)(param_1 + 0x24)), (int)(param_2));
    }
    if ((*(u32 *)(param_1 + 8) & 0x200) != 0) {
        if (*(u32 *)(param_1 + 0x24) == 0) {
            ((VCall_fn_80201A8C_1 *)(param_2))->m();
            uVar1 = fn_801FFDB0();
            *(u32 *)(param_1 + 0x24) = uVar1;
        }
        fn_80201478((int)(*(u32 *)(param_1 + 0x24)), (int)(param_2));
    }
    if ((*(u32 *)(param_1 + 8) & 0x800) != 0) {
        if (*(u32 *)(param_1 + 0x24) == 0) {
            ((VCall_fn_80201A8C_2 *)(param_2))->m();
            uVar1 = fn_801FFD04();
            *(u32 *)(param_1 + 0x24) = uVar1;
        }
        fn_80204454((int)(*(u32 *)(param_1 + 0x24)), (int)(param_2));
    }
    ((VCall_fn_80201A8C_3 *)(param_1))->m();
    ((VCall_fn_80201A8C_4 *)(param_1))->m();
}
}
