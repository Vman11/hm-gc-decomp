// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B320;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nw__FUl(int);
void fn_802226F0(int, int);
void __ct__9C80222798Fv(void);
struct VCall_fn_8022DE78_0 { virtual void p0(); virtual void m(); };

extern "C" {
void m(void);
}
struct C80222798 { char pad[0x10]; C80222798(void); };

extern "C" void fn_8022DE78(u32 *param_1, u32 param_2) {
    u32 iVar1;

    ((VCall_fn_8022DE78_0 *)(param_1))->m();
    param_1[0x29] = param_2;
    if (((param_1[0x28] != 0) && (param_1[0x2e] == 0)) && (1 < *(u32 *)(param_1[0x28] + 0xac))) {
        if (lbl_8035B320 == 0) {
            fn_800604C4((int)((int)(0xfffffffe)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
        }
        fn_800F7EC0((int)((int)(lbl_8035B320)));
        iVar1 = (u32) new C80222798();
        param_1[0x2e] = iVar1;
        fn_800F7E98();
        if (param_1[0x2e] == 0) {
            fn_800604C4((int)((int)(0xfffffffc)), (int)((int)(0)), (int)((int)(0)), (int)((int)(0)));
        }
        fn_802226F0((int)((int)(param_1[0x2e])), (int)((int)(param_1)));
    }
}
}
