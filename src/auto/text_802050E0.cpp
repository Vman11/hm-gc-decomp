#include "common.h"

extern "C" {

s32 fn_800BD474(void *);

void fn_802050E0(u8 *param_1) {
    s32 iVar1;

    iVar1 = 0;
    while (iVar1 == 0) {
        iVar1 = fn_800BD474(param_1 + 0x70);
    }
    iVar1 = 0;
    while (iVar1 == 0) {
        iVar1 = fn_800BD474(param_1 + 0xac);
    }
    iVar1 = 0;
    while (iVar1 == 0) {
        iVar1 = fn_800BD474(param_1 + 0xe8);
    }
}

} /* extern "C" */
