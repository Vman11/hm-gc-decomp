// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035B308;
void fn_80239658(void);

void fn_80225000(s32 param_1) {
    fn_80239658();
    *(u32 *)(param_1 + 0x18c) = *(u32 *)(lbl_8035B308 + 0x48);
}

} /* extern "C" */
