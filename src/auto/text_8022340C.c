/* Functions from 0x8022340C to 0x8022345C, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_80365AB0;
extern f32 lbl_80365AB4;
extern f32 lbl_80365AB8;

void fn_8022340C(void *arg0, s32 arg1, f32 farg0) {
    *(f32 *)((u8 *)arg0 + 0x2E4) = farg0;
    *(s32 *)((u8 *)arg0 + 0x2E8) = arg1;
    if (arg1 < 3) {
        if (arg1 < 2) {
            return;
        }
    } else if (arg1 > 3) {
        if (arg1 >= 5) {
            return;
        }
        if (arg1 != 4) {
            return;
        }
    }
    if (arg1 == 2) {
        *(f32 *)((u8 *)arg0 + 0x2B0) = lbl_80365AB0;
    } else if (arg1 == 3) {
        *(f32 *)((u8 *)arg0 + 0x2B0) = lbl_80365AB4;
    } else if (arg1 == 4) {
        *(f32 *)((u8 *)arg0 + 0x2B0) = lbl_80365AB8;
    }
}
