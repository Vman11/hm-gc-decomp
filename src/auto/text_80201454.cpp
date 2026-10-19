/* Functions from 0x80201454 to 0x802014AC, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_80201454(u8 *arg0) {
    *(u32 *)(arg0 + 0x0) = 0;
    *(u32 *)(arg0 + 0x4) = 0;
    *(u16 *)(arg0 + 0x8) = 0;
    *(u32 *)(arg0 + 0xC) = 0;
    *(u32 *)(arg0 + 0x10) = 1;
    *(u32 *)(arg0 + 0x18) = 0;
}

void fn_80201478(u8 *arg0, u32 arg1) {
    if (*(s32 *)(arg0 + 0x4) != 0) {
        fn_80201454(arg0);
    }
    *(u32 *)(arg0 + 0x0) = arg1;
}

} /* extern "C" */
