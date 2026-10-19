// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80191DBC(void);
u32 fn_80193B00(int, int);
struct VCall_fn_801A1EC8_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

void fn_801A1EC8(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 uVar1;

    if (param_4 == 0x3b) {
        if (*(u32 *)(param_1 + 0x78) != 0) {
            ((VCall_fn_801A1EC8_0 *)(param_3))->m((u32)(0x27));
        }
        uVar1 = fn_80193B00((int)(param_2), (int)(param_3));
        *(u32 *)(param_1 + 0x78) = uVar1;
    }
    else {
        fn_80191DBC();
    }
}
}
