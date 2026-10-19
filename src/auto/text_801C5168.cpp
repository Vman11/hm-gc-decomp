// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_801C05EC(int, int, int);
void fn_801DBE0C(void);

u32 fn_801C5168(u32 param_1, u32 param_2) {
    u32 uVar1;
    u32 iVar2;

    fn_801DBE0C();
    if (*(u32 *)(param_1 + 0x16c) != 0) {
        uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_1 + 0x16c)));
        *(u32 *)(param_1 + 0x16c) = uVar1;
    }
    if (*(u32 *)(param_1 + 0x168) != 0) {
        uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_1 + 0x168)));
        *(u32 *)(param_1 + 0x168) = uVar1;
    }
    if (*(u32 *)(param_1 + 0x164) != 0) {
        uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_1 + 0x164)));
        *(u32 *)(param_1 + 0x164) = uVar1;
    }
    iVar2 = *(u32 *)(param_1 + 0x16c);
    if (iVar2 != 0) {
        *(u32 *)(iVar2 + 0x84) = *(u32 *)(iVar2 + 0x84) & 0xfffffffe;
    }
    iVar2 = *(u32 *)(param_1 + 0x168);
    if (iVar2 != 0) {
        *(u32 *)(iVar2 + 0x84) = *(u32 *)(iVar2 + 0x84) & 0xfffffffe;
    }
    iVar2 = *(u32 *)(param_1 + 0x164);
    if (iVar2 != 0) {
        *(u32 *)(iVar2 + 0x84) = *(u32 *)(iVar2 + 0x84) & 0xfffffffe;
    }
    return 0;
}

} /* extern "C" */
