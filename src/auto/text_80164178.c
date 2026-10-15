/* Functions from 0x80164178 to 0x801641F0, found by decomp-toolkit. */
#include "common.h"

void fn_80164178(void) {

}

void fn_80164190(void *arg0, s32 arg1, s32 arg2) {
    ((s32 *)(M2C_FIELD(arg0, u8 **, 0x1934) + 0x3ABC))[arg1] = arg2;
}

s32 fn_801641A4(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1934), s32 **, 0x2AA0)[arg1];
}

void fn_801641B8(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = M2C_FIELD(arg0, u8 **, 0x1934);
    M2C_FIELD(p, s32 **, 0x2AA0)[arg1] = arg2;
    ((s32 *)(p + 0x36BC))[arg1] = 0;
}

s32 fn_801641D8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x1934), s32 *, 0x2A84);
}

s32 fn_801641E4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x1934), s32 *, 0x2A7C);
}

