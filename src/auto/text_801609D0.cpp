// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802A0580[];
extern u8 lbl_802A05C0[];
void fn_800D6270(void);
void fn_800D8540(int, int);

u32 fn_801609D0(u16 *param_1, s32 param_2) {
    s32 iVar1;
    u32 uVar2;

    if (*param_1 > 0x100) {
        if (*(u32 *)(param_2 + 0x328) >= 4) {
            *(u32 *)(param_2 + 0x328) = 0;
            fn_800D6270();
        }
        iVar1 = *(s32 *)(param_2 + 0x328);
        *(s32 *)(param_2 + 0x328) = iVar1 + 1;
        uVar2 = *(u32 *)(lbl_802A05C0 + iVar1 * 4);
    }
    else {
        if (*(u32 *)(param_2 + 0x324) >= 0x10) {
            *(u32 *)(param_2 + 0x324) = 0;
            fn_800D6270();
        }
        iVar1 = *(s32 *)(param_2 + 0x324);
        *(s32 *)(param_2 + 0x324) = iVar1 + 1;
        uVar2 = *(u32 *)(lbl_802A0580 + iVar1 * 4);
    }
    fn_800D8540((int)(param_1 + 4), (int)(uVar2));
    return uVar2;
}

} /* extern "C" */
