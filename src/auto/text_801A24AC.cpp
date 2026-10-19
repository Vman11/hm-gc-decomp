// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801E4248(int, int, int, int, int);
struct VCall_fn_801A24AC_0 { char vptr_pad[0xf4]; virtual void p0(); virtual void p1(); virtual void m(); };
struct VCall_fn_801A24AC_1 { char vptr_pad[0xf4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

void fn_801A24AC(s32 param_1, s32 param_2, u32 param_3) {
    if (*(u32 *)(param_1 + 0xf0) != 0) {
        ((VCall_fn_801A24AC_0 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0xf0) = param_3;
    if (*(u32 *)(param_2 + 0x30) == 0) {
        *(u32 *)(param_2 + 0x30) = 4;
    }
    if (*(u32 *)(param_2 + 0x34) == 0) {
        *(u32 *)(param_2 + 0x34) = 4;
    }
    if (*(u32 *)(param_2 + 0x38) == 0) {
        *(u32 *)(param_2 + 0x38) = 4;
    }
    ((VCall_fn_801A24AC_1 *)(param_1))->m((s32)(param_2));
    fn_801E4248((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_2 + 0x30)), (int)(*(u32 *)(param_2 + 0x34)), (int)(*(u32 *)(param_2 + 0x38)));
}
}
