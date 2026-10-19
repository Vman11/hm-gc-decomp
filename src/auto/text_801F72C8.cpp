// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
typedef struct { u8 b[8]; } Copy8;
void fn_801F7694(int, int);
struct VCall_fn_801F72C8_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_801F72C8(s32 *param_1, s32 param_2) {
    s32 iVar1;

    if (param_1[2] != 0) {
        ((VCall_fn_801F72C8_0 *)(param_1))->m();
    }
    fn_801F7694((int)(param_1), (int)(param_2));
    *(Copy8 *)(param_1 + 0x1e) = *(Copy8 *)(param_2 + 0x34);
}
}
