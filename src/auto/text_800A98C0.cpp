// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B65C;
void fn_8019AD10(int, int);

void fn_800A98C0(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x118) != 0) && (*(u32 *)(*(u32 *)(param_1 + 0x118) + 0x40) != 0)) {
        fn_8019AD10((int)(*(u32 *)(lbl_8035B65C + 0xc)), (int)(*(u32 *)(param_1 + 0x118)));
        fn_8019AD10((int)(*(u32 *)(*(u32 *)(lbl_8035B65C + 0x74) + 0x1e4)), (int)(*(u32 *)(param_1 + 0x118)));
    }
}

} /* extern "C" */
