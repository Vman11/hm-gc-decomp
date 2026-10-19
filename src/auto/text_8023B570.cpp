// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B3E8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C80215F50 { char pad[0x38]; C80215F50(void); };
struct VCall_fn_8023B570_0 { char vptr_pad[0xc]; virtual void p0(); virtual void p1(); virtual void m(); };

u32 fn_8023B570(u32 *param_1, u32 param_2) {
    u32 iVar1;

    if (*param_1 != 0) {
        ((VCall_fn_8023B570_0 *)(param_1))->m();
    }
    if (lbl_8035B3E8 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B3E8));
    iVar1 = (u32) new C80215F50();
    param_1[1] = iVar1;
    fn_800F7E98();
    if (param_1[1] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    *param_1 = param_2;
    return 0;
}
}
