/* Functions from 0x80135978 to 0x80135A78, found by decomp-toolkit. */
#include "common.h"


typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} Unk801359C0;

void fn_80135978(void) {

}

void fn_8013597C(void) {

}

void fn_80135980(void) {

}

void fn_80135984(void) {

}

void fn_80135988(void) {

}

s32 fn_8013598C(void) {
    return 0;
}

void fn_80135994(f32 *__restrict arg0, s32 arg1, f32 *__restrict arg2) {
    f32 *dest = arg0 + arg1 * 4;
    dest[0x1128 / 4] = arg2[0];
    dest[0x112C / 4] = arg2[1];
    dest[0x1130 / 4] = arg2[2];
    dest[0x1134 / 4] = arg2[3];
}

void fn_801359C0(f32 *__restrict arg0, s32 arg1, f32 *__restrict arg2) {
    f32 *dest = arg0 + arg1 * 4;
    dest[0x128 / 4] = arg2[0];
    dest[0x12C / 4] = arg2[1];
    dest[0x130 / 4] = arg2[2];
    dest[0x134 / 4] = arg2[3];
}

s32 fn_801359EC(void) {
    return 0;
}

s32 fn_801359F4(void) {
    return 0;
}

s32 fn_801359FC(void) {
    return 0;
}

s32 fn_80135A04(void) {
    return 0;
}

s32 fn_80135A0C(void) {
    return 0;
}

s32 fn_80135A14(void) {
    return 0;
}

s32 fn_80135A1C(void) {
    return 0;
}

s32 fn_80135A24(void) {
    return 0;
}

s32 fn_80135A2C(void) {
    return 0;
}

s32 fn_80135A34(void) {
    return 0;
}

void fn_80135A3C(void) {

}

extern s32 lbl_80364108;
void fn_80135A40(s32 *arg0) {
    arg0[0x124 / 4] = 0;
}

void fn_80135A4C(s32 *arg0, s32 arg1) {
    arg0[0x124 / 4] = arg1;
}

void fn_80135A54(s32 *arg0) {
    arg0[3] &= ~0x20;
}

void fn_80135A64(s32 *arg0) {
    arg0[3] |= lbl_80364108;
}

