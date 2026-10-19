/* Functions from 0x8026F640 to 0x8026F660, found by decomp-toolkit. */
#include "common.h"

extern void *lbl_8035B7E4;
extern f32 lbl_80366E60;

void __ct__9C8026F640Fv(void *arg0) {
    lbl_8035B7E4 = arg0;
    *(u32 *)((u8 *)arg0 + 0) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
    *(u32 *)((u8 *)arg0 + 12) = 0;
    *(f32 *)((u8 *)arg0 + 16) = lbl_80366E60;
}
