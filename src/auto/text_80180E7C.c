/* Functions from 0x80180E7C to 0x80180ECC, found by decomp-toolkit. */
#include "common.h"

s32 fn_80180E7C(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x2C) + (arg1 * 0x78);
}
