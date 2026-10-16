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

void fn_801FC818(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

