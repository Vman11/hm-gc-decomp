/* Functions from 0x801FC7F8 to 0x801FC834, found by decomp-toolkit. */
#include "common.h"

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

void fn_801FC818(void *arg0, f32 *arg1) {
    f32 x = arg1[0];
    f32 y = arg1[1];
    f32 z = arg1[2];
    M2C_FIELD(arg0, f32 *, 0x34) = x;
    M2C_FIELD(arg0, f32 *, 0x38) = y;
    M2C_FIELD(arg0, f32 *, 0x3C) = z;
}

