/* Functions from 0x801188F8 to 0x80118AE8, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AB20;
void fn_8011893C(s32 arg0) {
    lbl_8035AB20 = arg0;
}

void fn_80118944(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x20) = farg0;
}

void fn_8011894C(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
}

void fn_80118954(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x18) = farg0;
}

void fn_8011895C(void *arg0, f32 arg1) {
    *(f32 *)((u8 *)arg0 + 0x14) = arg1;
}

f32 fn_80118964(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    return M2C_FIELD(arg0, f32 *, 0x10);
}

