// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern void *memset(void *, int, unsigned long);
struct VCall_fn_800613CC_0 { char vptr_pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual int m(); };

void fn_800613CC(s32 param_1, s32 *param_2) {
    s32 iVar1;

    memset(param_2,0,0x68);
    *param_2 = param_1 + 0x2a4;
    iVar1 = ((VCall_fn_800613CC_0 *)(*(s32 *)(param_1 + 0x2c4c)))->m();
    param_2[4] = iVar1;
    param_2[9] = param_1 + 0x3040;
    param_2[3] = param_1 + 0x46c;
    param_2[7] = *(s32 *)(param_1 + 0x2f50);
    param_2[1] = param_1 + 0x354;
    param_2[0xf] = *(s32 *)(param_1 + 0x34e0);
}
}
