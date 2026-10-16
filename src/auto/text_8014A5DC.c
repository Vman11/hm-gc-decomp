/* Functions from 0x8014A5DC to 0x8014A67C, found by decomp-toolkit. */
#include "common.h"

s32 fn_8014A5DC(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x78) != 0) + ((M2C_FIELD(arg0, s32 *, 8) != 0) + (M2C_FIELD(arg0, s32 *, 0x18) != 0) + (M2C_FIELD(arg0, s32 *, 0x28) != 0) + (M2C_FIELD(arg0, s32 *, 0x38) != 0) + (M2C_FIELD(arg0, s32 *, 0x48) != 0) + (M2C_FIELD(arg0, s32 *, 0x58) != 0) + (M2C_FIELD(arg0, s32 *, 0x68) != 0));
}
