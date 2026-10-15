/* Functions from 0x8010AD04 to 0x8010AD40, found by decomp-toolkit. */
#include "common.h"

extern void (*lbl_8035A69C)(s32, void *);
void fn_8010AD10(void *lt_obj, u32 *color) {
    *(u32 *)((u8 *)lt_obj + 0xC) = *color;
}

s32 fn_8010AD1C(s32 arg0) {
    return arg0 + 0xC;
}

void fn_8010AD24(void *lt_obj, u32 *color) {
    *(u32 *)((u8 *)lt_obj + 0xC) = *color;
}

