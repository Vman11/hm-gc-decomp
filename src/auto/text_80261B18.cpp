// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_802A9F8C[];
u32 fn_8010FEDC(int, int, int, int);
void fn_8023D1B4(int);
struct VCall_fn_80261B18_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(int); };

void fn_80261B18(u32 param_1, u32 param_2) {
    u32 *piVar1;
    u32 uVar2;

    piVar1 = (u32 *)0x0;
    *(u32 *)(param_1 + 0x9c) = param_2;
    if (*(u32 *)(param_1 + 0xac) != 0) {
        piVar1 = (u32 *)fn_8010FEDC((int)(*(u32 *)(param_1 + 0xa8)), (int)(*(u32 *)(param_1 + 0xac)), (int)(lbl_802A9F8C), (int)(1)); /* "bCanFlyThroughGeometry" */
    }
    if ((piVar1 == (u32 *)0x0) && (*(u32 *)(param_1 + 0x10) != 0)) {
        piVar1 = (u32 *)fn_8010FEDC((int)(*(u32 *)(param_1 + 0xc)), (int)(*(u32 *)(param_1 + 0x10)), (int)(lbl_802A9F8C), (int)(1));
    }
    if (piVar1 != (u32 *)0x0) {
        uVar2 = ((VCall_fn_80261B18_0 *)(*piVar1))->m((u32)(0));
    }
    else {
        uVar2 = 0;
    }
    *(u32 *)(param_1 + 0xa4) = uVar2;
    fn_8023D1B4((int)(param_1));
}
}
