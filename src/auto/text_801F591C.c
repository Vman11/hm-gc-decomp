/* Functions from 0x801F591C to 0x801F59EC, found by decomp-toolkit. */
#include "common.h"

void fn_801F591C(void **arg0) {
    extern u8 lbl_802E5E88[];
    arg0[0] = lbl_802E5E88;
    arg0[101] = 0;
}

u8 fn_801F5934(void ***arg0) {
    return M2C_FIELD(M2C_FIELD(**arg0, void **, 4), u8 *, -1);
}

void fn_801F5948(void ***arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = **arg0;
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (M2C_FIELD(temp_r3, s32 *, 4) + arg1);
}

void fn_801F5960(void *arg0, s32 arg1) {
    M2C_FIELD(*M2C_FIELD(arg0, void ***, 0), s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}

s32 fn_801F5978(void *arg0) {
    return M2C_FIELD(*M2C_FIELD(arg0, void ***, 0), s32 *, 4) - M2C_FIELD(arg0, s32 *, 4);
}

void fn_801F59B8(void) {

}

void fn_801F59BC(void) {

}

void fn_801F59C0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(*M2C_FIELD(arg0, void ***, 0), s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(*M2C_FIELD(arg0, void ***, 0), s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg2);
}

