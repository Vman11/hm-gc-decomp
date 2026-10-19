// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_80365D18[0x6];
s32 fn_8010FEDC(int, int, int, int);
struct VCall_fn_80229D68_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(int); };

u32 fn_80229D68(s32 param_1) {
    s32 *piVar1;
    u32 uVar2;

    if (*(void **)(param_1 + 0x10) != NULL) {
        piVar1 = (s32 *)fn_8010FEDC((int)(*(u32 *)(param_1 + 0xc)), (int)(*(s32 *)(param_1 + 0x10)), (int)(lbl_80365D18), (int)(1)); /* "Flags" */
        uVar2 = ((VCall_fn_80229D68_0 *)(*piVar1))->m((s32)(0));
        *(u32 *)(param_1 + 0x224) = uVar2;
    }
    return 0;
}
}
