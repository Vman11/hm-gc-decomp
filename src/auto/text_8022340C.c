/* Functions from 0x8022340C to 0x8022345C, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_80365AB0;
extern f32 lbl_80365AB4;
extern f32 lbl_80365AB8;

void fn_8022340C(void *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x2E4) = farg0;
    M2C_FIELD(arg0, s32 *, 0x2E8) = arg1;
    switch (arg1) {                                 /* irregular */
    case 2:
        M2C_FIELD(arg0, f32 *, 0x2B0) = (f32) lbl_80365AB0;
        return;
    case 3:
        M2C_FIELD(arg0, f32 *, 0x2B0) = (f32) lbl_80365AB4;
        return;
    case 4:
        M2C_FIELD(arg0, f32 *, 0x2B0) = (f32) lbl_80365AB8;
        return;
    }
}
