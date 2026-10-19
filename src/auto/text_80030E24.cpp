// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8035BCB8[0x5];
void fn_80180BA8(int, int);
s32 fn_80253B70(int, int);
void fn_80254030(void);

extern "C" {
void fn_8012ACAC(int, int, void *, int, int);
void fn_8018182C(int, int, void *, int);
}


extern "C" void fn_80030E24(s32 param_1) {
    u32 uVar1;

    fn_80254030();
    fn_8012ACAC((int)(*(u32 *)(param_1 + 0x10)), (int)(*(u32 *)(param_1 + 0x20)), (void *)lbl_8035BCB8, (int)(1), (int)(0));
    fn_8018182C((int)(*(u32 *)(param_1 + 0x14)), (int)(*(u32 *)(param_1 + 0x18)), (void *)lbl_8035BCB8, (int)(1));
    uVar1 = fn_80253B70((int)(param_1), (int)(*(u32 *)(param_1 + 0x14)));
    *(u32 *)(param_1 + 0xc) = uVar1;
    fn_80180BA8((int)(*(u32 *)(param_1 + 0x14)), (int)(*(u32 *)(param_1 + 0xc)));
}

} /* extern "C" */
