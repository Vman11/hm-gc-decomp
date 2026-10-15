/* Functions from 0x80135ABC to 0x80135B68, found by decomp-toolkit. */
#include "common.h"


extern s32 lbl_8036410C;
void fn_80135ABC(s32 *arg0) {
    arg0[3] |= lbl_8036410C;
}

void fn_80135AD0(void) {

}

void fn_80135AD4(void *arg0, s32 arg1) { *(s32 *)((char *)arg0 + 0x18) = arg1; }

void fn_80135ADC(void *arg0, f32 arg1) {
    *(f32 *)((u8 *)arg0 + 0x14) = arg1;
}

extern f32 lbl_8032E4A8[3];
extern f32 lbl_80364100;
extern f32 lbl_80364104;
void fn_80135AE4(u8 *arg0, u8 *arg1) {
u32 b;
u32 a;
a = arg1[0];
b = arg1[1];
arg0[0x10] = a;
a = arg1[2];
arg0[0x11] = b;
b = arg1[3];
arg0[0x12] = a;
arg0[0x13] = b;
}

void fn_80135B08(u8 *arg0) {
*(s32 *)(arg0 + 0) = 0;
*(s32 *)(arg0 + 4) = 0;
*(s32 *)(arg0 + 8) = 0;
*(s32 *)(arg0 + 12) = 0;
*(f32 *)(arg0 + 0x14) = lbl_80364100;
*(s32 *)(arg0 + 0x18) = 0;
*(f32 *)(arg0 + 0x1c) = lbl_80364104;
arg0[0x10] = 0;
arg0[0x11] = 0;
arg0[0x12] = 0;
arg0[0x13] = 255;
*(s32 *)(arg0 + 0x124) = 0;
lbl_8032E4A8[0] = lbl_80364104;
lbl_8032E4A8[1] = lbl_80364104;
lbl_8032E4A8[2] = lbl_80364104;
*(f32 **)(arg0 + 0x192c) = lbl_8032E4A8;
*(s32 *)(arg0 + 0x1928) = 0;
}

