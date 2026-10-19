// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80199FB8(int, int);
void fn_80199FE8(void);
struct VCall_fn_8017B46C_0 { char vptr_pad[0x8]; virtual void p0(); virtual void m(int); };
struct VCall_fn_8017B46C_1 { char vptr_pad[0x8]; virtual void p0(); virtual void m(int); };

void fn_8017B46C(u32 param_1, u32 param_2) {
    u32 iVar1;

    fn_80199FE8();
    iVar1 = *(u32 *)(param_1 + 0xc);
    if (iVar1 != 0) {
        ((VCall_fn_8017B46C_0 *)(iVar1))->m((u32)(param_2));
    }
    iVar1 = *(u32 *)(param_1 + 0x10);
    if (iVar1 != 0) {
        ((VCall_fn_8017B46C_1 *)(iVar1))->m((u32)(param_2));
    }
    fn_80199FB8((int)(param_1), (int)(param_2));
}
}
