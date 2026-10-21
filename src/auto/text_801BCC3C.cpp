// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 *fn_801C05EC(u8 *, u32, u8 *);
void fn_801DBE0C(void);

u32 fn_801BCC3C(u8 *param_1, u32 param_2) {
    s32 i;

    fn_801DBE0C();
    for (i = 0; i < *(s32 *)(param_1 + 0x16c); i++) {
        (*(u8 ***)(param_1 + 0x164))[i] = fn_801C05EC(param_1, param_2, (*(u8 ***)(param_1 + 0x164))[i]);
    }
    return 0;
}

} /* extern "C" */
