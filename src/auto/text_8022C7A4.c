/* Functions from 0x8022C7A4 to 0x8022C8EC, found by decomp-toolkit. */
#include "common.h"

void fn_8022C7A4(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg1, f32 *, 8);
    }
    if (arg2 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) M2C_FIELD(arg2, f32 *, 8);
    }
    if (arg3 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(arg3, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x78) = (f32) M2C_FIELD(arg3, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x7C) = (f32) M2C_FIELD(arg3, f32 *, 8);
    }
    if (arg4 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) M2C_FIELD(arg4, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(arg4, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg4, f32 *, 8);
    }
    if (arg5 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x80) = (f32) M2C_FIELD(arg5, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) M2C_FIELD(arg5, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x88) = (f32) M2C_FIELD(arg5, f32 *, 8);
    }
}
