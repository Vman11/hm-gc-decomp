// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern s32 lbl_8035AD80;
extern s32 lbl_8035AD84;
struct VCall_fn_8017C3B8_0 { char vptr_pad[0x18]; virtual void p0(); virtual void m(int); };

void fn_8017C3B8(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    lbl_8035AD80 = param_2;
    lbl_8035AD84 = param_4;
    ((VCall_fn_8017C3B8_0 *)(param_1))->m((s32)(param_3));
}
}
