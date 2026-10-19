// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B1C0;
extern u32 lbl_8035B5E0;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_80117BFC(int, int, int, int);
void fn_80215FDC(int);
void fn_80216044(int, int);
struct C80117D10 { char pad[0x20]; C80117D10(void); };

void fn_802515D0(u32 param_1, u32 param_2, u32 param_3) {
    u32 iVar1;

    if (lbl_8035B5E0 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B5E0));
    iVar1 = (u32) new C80117D10();
    *(u32 *)(param_1 + 0x1c) = iVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x1c) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_80216044((int)(lbl_8035B1C0), (int)(param_2));
    fn_80117BFC((int)(*(u32 *)(param_1 + 0x1c)), (int)(*(u32 *)(param_1 + 0x24)), (int)(param_3), (int)(0));
    fn_80215FDC((int)(lbl_8035B1C0));
}
}
