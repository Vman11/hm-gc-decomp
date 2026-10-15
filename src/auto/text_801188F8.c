/* Functions from 0x801188F8 to 0x80118AE8, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AB20;
void fn_801188F8(void *arg0) {
    extern u8 lbl_802AFC68[];
    extern u8 lbl_802E3948[];
    *(void **)((char *)arg0 + 0x0) = lbl_802AFC68;
    *(void **)((char *)arg0 + 0x0) = lbl_802E3948;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 0;
}

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

s32 fn_80118970(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 fn_8011897C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return *arg0;
}

f32 fn_80118AB0(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 0) {
        return M2C_FIELD(arg0, f32 *, 0x30);
    }
    return M2C_FIELD(arg0, f32 *, 0x28);
}

f32 fn_80118ACC(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 4) == 0) {
        return M2C_FIELD(arg0, f32 *, 0x2C);
    }
    return M2C_FIELD(arg0, f32 *, 0x24);
}

