/* Functions from 0x80199F18 to 0x80199F54, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80364C98;
extern f32 lbl_80364C9C;

void fn_80199F18(u8 *arg0) {
    *(f32 *)(arg0 + 4) = lbl_80364C98;
    *(f32 *)(arg0 + 0) = lbl_80364C9C;
    *(f32 *)(arg0 + 12) = lbl_80364C98;
    *(f32 *)(arg0 + 8) = lbl_80364C9C;
    *(f32 *)(arg0 + 20) = lbl_80364C98;
    *(f32 *)(arg0 + 16) = lbl_80364C9C;
    *(u32 *)(arg0 + 24) = 0;
}
