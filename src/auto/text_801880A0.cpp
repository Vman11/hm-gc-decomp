// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8017A5C4(int);
void fn_8018DE44(int);
struct VCall_fn_801880A0_0 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_801880A0_1 { char vptr_pad[0x10];  virtual void m(int); };

void fn_801880A0(u32 *param_1) {
    u32 uVar1;
    u8 bVar2;

    bVar2 = false;
    uVar1 = param_1[0x2a];
    if ((uVar1 != 0) || (param_1[0x2c] != 0)) {
        bVar2 = true;
    }
    if (bVar2) {
        if ((uVar1 != 0) && ((*param_1 & 0x20000) != 0)) {
            ((VCall_fn_801880A0_0 *)(uVar1))->m();
            uVar1 = param_1[0x2a];
            if (uVar1 != 0) {
                ((VCall_fn_801880A0_1 *)(uVar1))->m((s32)(1));
            }
        }
    }
    fn_8017A5C4((int)(param_1 + 0x2a));
    fn_8018DE44((int)(param_1));
}
}
