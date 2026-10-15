/* Functions from 0x80245D9C to 0x80245F9C, found by decomp-toolkit. */
#include "common.h"

s32 fn_80245F8C(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x18) + (arg1 * 0xC);
}
