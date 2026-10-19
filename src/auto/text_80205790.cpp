// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
void fn_801FBC7C(void);
void fn_801FBC8C(void);
s32 fn_80202B68(int);
struct VCall_fn_80205790_0 { virtual void p0(); virtual int m(); };
struct VCall_fn_80205790_1 { virtual void p0(); virtual int m(); };

void fn_80205790(s32 param_1, s32 param_2) {
    u32 uVar1;
    s32 iVar2;
    s32 *piVar3;

    if (param_2 != 0) {
        fn_801FBC8C();
        uVar1 = OSDisableInterrupts();
        for (piVar3 = *(s32 **)(param_1 + 0xb0); piVar3 != (s32 *)0x0; piVar3 = (s32 *)piVar3[0x75]) {
            iVar2 = ((VCall_fn_80205790_1 *)(piVar3))->m();
            if ((iVar2 != 0) || (iVar2 = fn_80202B68((int)(piVar3)), iVar2 != 0)) {
                piVar3[0x1f] = -500000000;
            }
        }
        OSRestoreInterrupts((int)(uVar1));
    }
    else {
        fn_801FBC7C();
        uVar1 = OSDisableInterrupts();
        for (piVar3 = *(s32 **)(param_1 + 0xb0); piVar3 != (s32 *)0x0; piVar3 = (s32 *)piVar3[0x75]) {
            iVar2 = ((VCall_fn_80205790_0 *)(piVar3))->m();
            if ((iVar2 != 0) || (iVar2 = fn_80202B68((int)(piVar3)), iVar2 != 0)) {
                piVar3[0x1f] = 0;
            }
        }
        OSRestoreInterrupts((int)(uVar1));
    }
}
}
