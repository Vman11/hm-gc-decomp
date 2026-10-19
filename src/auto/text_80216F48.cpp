// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80216DB8(void);
struct VCall_fn_80216F48_0 { char vptr_pad[0xc]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };
struct VCall_fn_80216F48_1 { virtual void p0(); virtual void m(); };

void fn_80216F48(s32 param_1, u32 *param_2) {
    fn_80216DB8();
    *(u32 *)(param_1 + 4) = *param_2;
    if (*(s32 *)(param_1 + 4) != 0) {
        ((VCall_fn_80216F48_0 *)(param_1))->m((s32)(param_2));
        ((VCall_fn_80216F48_1 *)(param_1 + 0x10))->m();
        *(s32 *)(param_1 + 8) = param_1 + 0x10;
    }
}
}
