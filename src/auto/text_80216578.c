/* Functions from 0x80216578 to 0x80216590, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B208;

void fn_80216578(s32 arg0) {
    lbl_8035B208 = arg0;
}

int fn_80216580(int a) { return a; }

void fn_80216584(void *arg0, s32 arg1) { *(s32 *)((char *)arg0 + 0x18) = arg1; }

int fn_8021658C(int a) { return a; }

