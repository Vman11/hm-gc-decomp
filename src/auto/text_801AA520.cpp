// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_801C05EC(int, int, int);
void fn_801DBE0C(void);

u32 fn_801AA520(s32 param_1, u32 param_2) {
    u32 uVar1;

    fn_801DBE0C();
    if (*(u32 *)(param_1 + 0x170) != 0) {
        uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_1 + 0x170)));
        *(u32 *)(param_1 + 0x170) = uVar1;
    }
    if (*(u32 *)(param_1 + 0x174) != 0) {
        uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_1 + 0x174)));
        *(u32 *)(param_1 + 0x174) = uVar1;
    }
    if (*(u32 *)(param_1 + 0x178) != 0) {
        uVar1 = fn_801C05EC((int)(param_1), (int)(param_2), (int)(*(u32 *)(param_1 + 0x178)));
        *(u32 *)(param_1 + 0x178) = uVar1;
    }
    *(u32 *)(*(u32 *)(param_1 + 0x178) + 0x84) =
              *(u32 *)(*(u32 *)(param_1 + 0x178) + 0x84) & 0xfffffffe;
    return 0;
}

} /* extern "C" */
