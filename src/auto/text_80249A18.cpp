// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
s32 fn_800F8274(int);
struct VCall_fn_80249A18_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual int m(int); };
struct VCall_fn_80249A18_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(int); };

void fn_80249A18(s32 *param_1) {
    s32 *piVar1;
    s32 iVar2;
    u32 iVar4;
    u32 *puVar3;

    piVar1 = (s32 *)fn_800F8274((int)(param_1 + 5));
    if (piVar1 != (s32 *)0x0) {
        puVar3 = (u32 *)(param_1[0xc] + *piVar1 * 4);
        for (iVar4 = piVar1[1]; iVar4 != 0; iVar4 = iVar4 + -1, puVar3 = puVar3 + 1) {
            iVar2 = ((VCall_fn_80249A18_0 *)(param_1))->m((s32)(*puVar3));
            if (iVar2 != 0) {
                ((VCall_fn_80249A18_1 *)(param_1))->m((s32)(*puVar3));
                return;
            }
        }
    }
}
}
