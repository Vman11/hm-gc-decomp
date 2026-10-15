/* Functions from 0x801AAF74 to 0x801AAFAC, found by decomp-toolkit. */
#include "common.h"

s32 fn_801AAF74(u8 *arg0, s32 arg1) {
    return (*(s32 **)(arg0 + 0x28))[arg1];
}

s32 fn_801AAF84(u8 *arg0, s32 arg1) {
    return (*(s32 **)(arg0 + 0x20))[arg1];
}

s32 fn_801AAF94(u8 *arg0, s32 arg1, s32 arg2) {
    return (*(s32 ***)(arg0 + 0x1C))[arg2][arg1];
}

