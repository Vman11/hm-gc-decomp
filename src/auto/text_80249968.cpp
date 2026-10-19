// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
s32 fn_800F8274(int, int);
struct VCall_fn_80249968_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual int m(int); };
struct VCall_fn_80249968_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(int); };

void fn_80249968(s32 *param_1, s32 param_2) {
    s32 *piVar1;
    s32 iVar2;
    u32 *puVar4;
    u32 iVar3;

    piVar1 = (s32 *)fn_800F8274((int)(param_1 + 5), (int)(param_2 + 0xc));
    if (piVar1 != (s32 *)0x0) {
        puVar4 = (u32 *)(param_1[0xc] + *piVar1 * 4);
        for (iVar3 = piVar1[1]; iVar3 != 0; iVar3 = iVar3 + -1, puVar4 = puVar4 + 1) {
            iVar2 = ((VCall_fn_80249968_0 *)(param_1))->m((s32)(*puVar4));
            if (iVar2 != 0) {
                ((VCall_fn_80249968_1 *)(param_1))->m((s32)(*puVar4));
                return;
            }
        }
    }
}
}
