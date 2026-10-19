// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_8017EDA8_0 {  virtual void m(int, int); };

void fn_8017EDA8(s32 param_1, s32 *param_2) {
    u32 *puVar2;
    u32 *puVar1;

    puVar2 = *(u32 **)(param_1 + 8);
    puVar1 = puVar2 + *(s32 *)(param_1 + 4) * 2;
    for (; puVar2 < puVar1; puVar2 = puVar2 + 2) {
        ((VCall_fn_8017EDA8_0 *)(param_2))->m((s32)(*puVar2), (s32)(puVar2[1]));
    }
}
}
