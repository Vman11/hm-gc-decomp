// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A8410[];
s32 fn_8010FEDC(int, int, int, int);
s32 fn_80239024(void);

u32 fn_80227840(s32 param_1) {
    u32 uVar1;
    u32 *puVar2;

    uVar1 = fn_80239024();
    puVar2 = (u32 *)
                      fn_8010FEDC((int)(*(u32 *)(param_1 + 0xc)), (int)(*(u32 *)(param_1 + 0x10)), (int)(lbl_802A8410), (int)(/* "HPBarHeight" */
                                              1));
    if (puVar2 != (u32 *)0x0) {
        *(u32 *)(param_1 + 600) = *puVar2;
    }
    return uVar1;
}

} /* extern "C" */
