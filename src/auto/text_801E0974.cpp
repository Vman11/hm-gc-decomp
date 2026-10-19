// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802ED640[];
s32 fn_800E2520(int, int);
void fn_801E0608(int, int, int);
struct VCall_fn_801E0974_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
struct VCall_fn_801E0974_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_801E0974(s32 *param_1, u32 param_2, s32 param_3) {
    s32 iVar1;

    ((VCall_fn_801E0974_0 *)(param_1))->m();
    fn_801E0608((int)(param_1), (int)(param_2), (int)(param_3));
    param_1[0xe] = *(s32 *)(param_1[2] + 0xc0);
    iVar1 = fn_800E2520((int)(lbl_802ED640), (int)(param_1 + 4));
    if ((iVar1 == 0) && (*(s8 *)(param_1 + 10) == '\0')) {
        ((VCall_fn_801E0974_1 *)(param_3))->m((s32)(0x1e));
    }
}
}
