#include "common.h"

extern "C" {

extern u32 lbl_8035AD08;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
struct C80152B64 { char pad[0x40]; C80152B64(); };
struct VCall_fn_8015DF68_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual s32 m(); };
struct VCall_fn_8015DF68_1 { virtual void p0(); virtual void p1(); virtual void m(); };

void fn_8015DF68(u32 *param_1, u32 param_2) {
    s32 iVar1;
    u32 iVar3;

    iVar1 = ((VCall_fn_8015DF68_0 *)(param_1))->m();
    if (iVar1 != 0) {
        ((VCall_fn_8015DF68_1 *)(param_1))->m();
    }
    param_1[2] = param_2;
    if (*(u32 *)(lbl_8035AD08 + 0x18) >= 6) {
        *(u32 *)(lbl_8035AD08 + 0x1c) = *(u32 *)(lbl_8035AD08 + 0x18);
    }
    else {
        *(u32 *)(lbl_8035AD08 + 0x1c) = 6;
    }
    if (lbl_8035AD08 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AD08);
    iVar3 = param_1[2];
    param_1[1] = (u32) new C80152B64[iVar3];
    fn_800F7E98();
    if (param_1[1] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    *(u32 *)(lbl_8035AD08 + 0x1c) = *(u32 *)(lbl_8035AD08 + 0x18);
}

} /* extern "C" */
