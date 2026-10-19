// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B478;
s32 fn_800F80DC(int, int, int);
s32 fn_8010FEDC(int, int, int, int);
s32 fn_801104C0(int, int, int, int);

u32 fn_80248F64(u32 param_1, s8 *param_2, u32 param_3) {
    s32 iVar1;
    s32 iVar2;
    u32 *puVar3;

    iVar1 = fn_800F80DC((int)(lbl_8035B478), (int)(param_1), (int)(0));
    if (iVar1 != 0) {
        if (*param_2 != '\0') {
            iVar2 = fn_801104C0((int)(iVar1), (int)(param_2), (int)(iVar1 + 8), (int)(0));
        }
        else {
            iVar2 = iVar1 + 8;
        }
        puVar3 = (u32 *)fn_8010FEDC((int)(iVar1), (int)(iVar2), (int)(param_3), (int)(1));
        if (puVar3 != (u32 *)0x0) {
            return *puVar3;
        }
    }
    return 0;
}

} /* extern "C" */
