/* Functions from 0x802056DC to 0x80205704, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B190;

void fn_802056DC(void *arg0, void *arg1) {
    char *p = *(char **)((char *)arg1 + 0x2C);
    if (p != NULL) {
        *(unsigned short *)(p + 0x128) &= ~0x20;
    }
}

void fn_802056F8(void) {

}

void fn_802056FC(s32 arg0) {
    lbl_8035B190 = arg0;
}

extern s32 lbl_8035B190;
