/* Functions from 0x80076A04 to 0x80076A50, found by decomp-toolkit. */
#include "common.h"

void fn_80076A04(f32 *arg0, f32 arg1) {
 if (*arg0 > arg1) *arg0 = arg1;
 arg1 = -arg1;
 if (*arg0 < arg1) *arg0 = arg1;
}

void fn_80076A2C(u8 *arg0, f32 arg1) {
 u8 *p;
 *(f32 *)(arg0 + 8) = arg1;
 p = *(u8 **)(arg0 + 0x10);
 if (p != NULL) {
 *(f32 *)(arg0 + 0x24) = *(f32 *)(arg0 + 8) / *(f32 *)(p + 4);
 }
}
