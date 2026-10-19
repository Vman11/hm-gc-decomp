// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
void fn_801FBC7C(void);
s32 fn_80202B68(int);
struct VCall_fn_801FEAEC_0 { virtual void p0(); virtual int m(); };

void fn_801FEAEC(s32 param_1) {
    u32 uVar1;
    s32 iVar2;
    s32 *piVar3;

    fn_801FBC7C();
    uVar1 = OSDisableInterrupts();
    for (piVar3 = *(s32 **)(param_1 + 0x68); piVar3 != (s32 *)0x0; piVar3 = (s32 *)piVar3[0x75]) {
        iVar2 = ((VCall_fn_801FEAEC_0 *)(piVar3))->m();
        if ((iVar2 != 0) || (iVar2 = fn_80202B68((int)(piVar3)), iVar2 != 0)) {
            piVar3[0x1f] = 0;
        }
    }
    OSRestoreInterrupts((int)(uVar1));
}
}
