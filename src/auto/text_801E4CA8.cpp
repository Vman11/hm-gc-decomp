/* Functions from 0x801E4CA8 to 0x801E4CD0, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B080;
void fn_801E4CA8(s32 arg0) {
    lbl_8035B080 = arg0;
}

void *fn_801E4CB0(void *arg0, s32 arg1) {
    return *(u8 **)((u8 *)arg0 + 0x14) + arg1 * 0x28;
}

void *fn_801E4CC0(void *arg0, s32 arg1) {
    return *(u8 **)((u8 *)arg0 + 0xC) + arg1 * 0xD4;
}

} /* extern "C" */
