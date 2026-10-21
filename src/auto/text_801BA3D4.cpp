// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 *fn_801C05EC(u8 *, u32, u8 *);
void fn_801DBE0C(void);

u32 fn_801BA3D4(u8 *param_1, u32 param_2) {
    u32 i;

    fn_801DBE0C();
    for (i = 0; i < *(u32 *)(param_1 + 0x198); i++) {
        (*(u8 ***)(param_1 + 0x174))[i] = fn_801C05EC(param_1, param_2, (*(u8 ***)(param_1 + 0x174))[i]);
        *(u32 *)((*(u8 ***)(param_1 + 0x174))[i] + 0x170) = (*(u32 **)(param_1 + 0x178))[i];
    }
    return 0;
}

} /* extern "C" */
