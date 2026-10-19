// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B518;
extern u32 lbl_8035B7BC;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
void fn_8023D1BC(void);
struct VCall_fn_80248CAC_0 { virtual void p0(); virtual void p1(); virtual void m(); };

void fn_80248CAC(u32 *param_1, u32 param_2) {
    u32 iVar1;
    u32 iVar2;

    fn_8023D1BC();
    param_1[5] = lbl_8035B7BC;
    param_1[9] = param_2;
    if (lbl_8035B518 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B518));
    iVar1 = __nwa__FUl((int)(param_1[9] << 2));
    param_1[10] = iVar1;
    fn_800F7E98();
    if (param_1[10] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    iVar1 = 0;
    for (iVar2 = 0; (s32)iVar2 < (s32)param_1[9]; iVar2 = iVar2 + 1) {
        *(u32 *)(param_1[10] + iVar1) = 0;
        iVar1 = iVar1 + 4;
    }
    ((VCall_fn_80248CAC_0 *)(param_1))->m();
}
}
