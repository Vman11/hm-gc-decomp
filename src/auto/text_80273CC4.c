/* Functions from 0x80273CC4 to 0x80273D38, found by decomp-toolkit. */
#include "common.h"

void fn_80273CC4(u8 *arg0, u8 *arg1) {
    if (*(s32 *)(arg1 + 0xC) == 0x58) {
        *(s32 *)(arg0 + 0x10) = 1;
        *(s32 *)(arg0 + 0xC) = 7;
        *(s32 *)(arg0 + 0x8) = 0;
    }
}

void fn_80273CEC(u8 *arg0) {
    *(s32 *)(arg0 + 0x4) = 0;
    *(s32 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0x8) = 0;
    *(s32 *)(arg0 + 0xC) = 7;
}

void fn_80273D08(u8 *arg0) {
    if (*(s32 *)(arg0 + 0x4) != 0) {
        fn_80273CEC(arg0);
    }
    *(s32 *)(arg0 + 0x4) = 1;
}

