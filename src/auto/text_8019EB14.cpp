// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8017F2A8(u32, u8 *);
u32 fn_801A1538(void);

u32 fn_8019EB14(u8 *param_1, u32 param_2, u32 param_3) {
    u32 iVar1;

    iVar1 = fn_801A1538();
    if (iVar1 == 0x40) {
        return 0x40;
    }
    if ((*(u32 *)(*(u8 **)(*(u8 **)(*(u8 **)(param_1 + 0x6c) + 4) + *(u32 *)(param_1 + 0xcc) * 4) + 0x2c) & 0x380) == 0) {
        return iVar1;
    }
    *(u32 *)(param_1 + 0x108) = param_3;
    fn_8017F2A8(param_2, param_1);
    return 0x40;
}

} /* extern "C" */
