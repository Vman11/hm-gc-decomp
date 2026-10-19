/* Functions from 0x80131C18 to 0x80131C58, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035AC00;
void fn_80131C18(s32 arg0) {
    lbl_8035AC00 = arg0;
}

void fn_80131C20(void* arg0) { ((s32*)arg0)[1] = 0; }

void fn_80131C2C(void* arg0, s32 arg1) { ((s32*)arg0)[1] = arg1; }

extern void lbl_802E4D00(void);
extern void lbl_802E4CB8(void);
void fn_80131C34(volatile unsigned int *arg0) {
    arg0[0] = (unsigned int)&lbl_802E4D00;
    arg0[0] = (unsigned int)&lbl_802E4CB8;
    arg0[1] = 0;
}

} /* extern "C" */
