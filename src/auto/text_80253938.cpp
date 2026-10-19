/* Functions from 0x80253938 to 0x8025396C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B648;
void fn_80253938(void* arg0, void* arg1) {
    if (*(volatile s32*)arg0 != 0) {
        *(volatile s32*)arg0 = 0;
    }
    *(volatile s32*)arg0 = 1;
    lbl_8035B648 = *(s32*)((u8*)arg1 + 0x4);
}

void fn_80253960(s32 *arg0) {
    *arg0 = 0;
}

} /* extern "C" */
