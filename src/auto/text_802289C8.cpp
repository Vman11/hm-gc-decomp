// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern s32 lbl_8035B65C;
void fn_80225F58(int, int);
struct VCall_fn_802289C8_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_802289C8_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

void fn_802289C8(s32 param_1, s32 *param_2) {
    s32 iVar1;

    iVar1 = ((VCall_fn_802289C8_0 *)(param_2))->m();
    if (iVar1 != 0) {
        *(s32 *)(param_1 + 0x54) = *(s32 *)(param_1 + 0x54) + -1;
        fn_80225F58((int)(*(u32 *)(lbl_8035B65C + 0x70)), (int)(param_2));
    }
    ((VCall_fn_802289C8_1 *)(param_2))->m();
}
}
