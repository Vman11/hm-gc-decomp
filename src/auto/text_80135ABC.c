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

