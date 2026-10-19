// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035B818;
void fn_8023D1A0(void);
void fn_80272A10(int);

void fn_80250F4C(u32 param_1) {
    fn_8023D1A0();
    if (lbl_8035B818 != 0) {
        fn_80272A10((int)(lbl_8035B818));
    }
    *(u8 *)(param_1 + 0x14) = 0;
    *(u8 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x120) = 0;
    *(u32 *)(param_1 + 0x124) = 0;
    *(u32 *)(param_1 + 0x128) = 0;
    *(u8 *)(param_1 + 0x11c) = 0;
}

} /* extern "C" */
