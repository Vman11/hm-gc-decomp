// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8010C790(int, int, int);
s32 fn_8010F17C(void);
struct VCall_fn_8010F0F8_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

s32 * fn_8010F0F8(u32 param_1, u32 param_2, u32 param_3) {
    s32 *piVar1;
    s32 *piVar2;

    piVar1 = (s32 *)fn_8010F17C();
    fn_8010C790((int)(*(u32 *)*piVar1), (int)(param_2), (int)(param_3));
    piVar2 = (s32 *)*piVar1;
    ((VCall_fn_8010F0F8_0 *)(piVar2))->m((s32)(*(u32 *)(*piVar2 + 0x10)));
    *(u32 *)(*piVar1 + 4) = param_1;
    return piVar1;
}
}
