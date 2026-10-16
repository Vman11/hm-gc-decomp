/* Functions from 0x801348E8 to 0x8013494C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AC38;
s32 fn_801348E8(void) {
    return lbl_8035AC38;
}

extern u8 lbl_8032C2D0[];
u8 *fn_801348F0(void) {
    return lbl_8032C2D0;
}

s32 fn_801348FC(void) {
    return 0;
}

void fn_80134904(void) {

}

extern u16 lbl_803640E0;
void fn_80134908(void* arg0) {
    *(u16*)((u8*)arg0 + 0x1A) &= ~2;
}

void fn_80134918(void *arg0, u8 *arg1) {
    u8 a, b, c, d;
    a = arg1[0];
    b = arg1[1];
    ((u8 *)arg0)[0x14] = a;
    c = arg1[2];
    ((u8 *)arg0)[0x15] = b;
    d = arg1[3];
    ((u8 *)arg0)[0x16] = c;
    ((u8 *)arg0)[0x17] = d;
    *(u16 *)((u8 *)arg0 + 0x1A) |= lbl_803640E0;
}

