// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A6C70[];
extern char lbl_802A6CB4[];
extern u32 lbl_8035A9F4;
void __dla__FPv(int);
void fn_800604C4(int, int, int, int);
void fn_80060568(int, int, int, int);
void fn_800EB764(int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
u32 strlen(int);

void fn_8020EA90(u32 param_1, u32 param_2, s8 *param_3) {
    u32 sVar1;

    if (param_2 >= *(u32 *)(param_1 + 0xc)) {
        fn_80060568((int)(lbl_802A6C70), 0, 0, 0);
    }
    if (param_3 == (s8 *)0x0) {
        fn_80060568((int)(lbl_802A6CB4), 0, 0, 0);
    }
    param_2 *= 0x1c;
    if (*(u32 *)(*(u32 *)(param_1 + 4) + param_2) != 0) {
        __dla__FPv((int)(*(u32 *)(*(u32 *)(param_1 + 4) + param_2)));
    }
    sVar1 = strlen((int)(param_3));
    if (lbl_8035A9F4 == 0) {
        fn_800604C4(0xfffffffe, 0, 0, 0);
    }
    fn_800F7EC0((int)(lbl_8035A9F4));
    *(u32 *)(*(u32 *)(param_1 + 4) + param_2) = __nwa__FUl(sVar1 + 1);
    fn_800F7E98();
    if (*(u32 *)(*(u32 *)(param_1 + 4) + param_2) == 0) {
        fn_800604C4(0xfffffffc, 0, 0, 0);
    }
    fn_800EB764((int)(*(u32 *)(*(u32 *)(param_1 + 4) + param_2)), (int)(param_3));
}

} /* extern "C" */
