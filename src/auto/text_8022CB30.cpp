/* Functions from 0x8022CB30 to 0x8022CBD4, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_8022CB30(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    if (arg1 != NULL) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x44);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x48);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x4C);
    }
    if (arg2 != NULL) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    }
    if (arg3 != NULL) {
        M2C_FIELD(arg3, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
        M2C_FIELD(arg3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
        M2C_FIELD(arg3, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    }
    if (arg4 != NULL) {
        M2C_FIELD(arg4, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(arg4, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
        M2C_FIELD(arg4, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    }
    if (arg5 != NULL) {
        M2C_FIELD(arg5, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
        M2C_FIELD(arg5, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg5, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    }
}

} /* extern "C" */
