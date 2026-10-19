/* Functions from 0x801FC7F8 to 0x801FC834, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    f32 x, y, z;
} Vec;

extern s32 lbl_8035B130;
void fn_801FC7F8(s32 arg0) {
    lbl_8035B130 = arg0;
}

void fn_801FC800(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
}

void fn_801FC808(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
}

void fn_801FC810(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x30) = farg0;
}

void fn_801FC818(u8 *__restrict arg0, f32 *__restrict arg1) {
    ((f32 *)(arg0 + 0x34))[0] = arg1[0];
    ((f32 *)(arg0 + 0x34))[1] = arg1[1];
    ((f32 *)(arg0 + 0x34))[2] = arg1[2];
}

} /* extern "C" */
