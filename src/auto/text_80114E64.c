/* Functions from 0x80114E64 to 0x80114F30, found by decomp-toolkit. */
#include "common.h"

s32 fn_80114E64(void* arg0, void* arg1) {
    return M2C_FIELD(arg1, s32*, 0x18) - M2C_FIELD(arg1, s32*, 0x14);
}
