// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035AEBC;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nw__FUl(int);
void fn_801AAC78(int, int, int);
void fn_801AAEA0(int);
struct VCall_fn_801A3750_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void m(); };
struct VCall_fn_801A3750_1 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

struct C801AAEA0 { char pad[0x124]; C801AAEA0(void); };

void fn_801A3750(u32 *param_1, u32 param_2, u32 param_3) {
    u32 iVar1;

    if (*param_1 != 0) {
        ((VCall_fn_801A3750_0 *)(param_1))->m();
    }
    lbl_8035AEBC = *(u32 *)(param_2 + 4);
    ((VCall_fn_801A3750_1 *)(param_1))->m((u32)(param_2));
    if (lbl_8035AEBC == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AEBC));
iVar1 = (u32) new C801AAEA0();
    param_1[1] = iVar1;
    fn_800F7E98();
    if (param_1[1] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_801AAC78((int)(param_1[1]), (int)(*(u32 *)
                              (*(u32 *)(*(u32 *)(*(u32 *)(*(u32 *)(*(u32 *)(*(u32 *)(param_3 + 0xf0) + 4) + 8) +
                                                                                    0x80) + 0xc) + 4) + 4)), (int)(*(u32 *)(param_3 + 0xf0) + 8));
    *param_1 = param_3;
}
}
