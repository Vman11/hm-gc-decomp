/* Functions from 0x801D11F4 to 0x801D12BC, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern f64 lbl_80365160;
extern f32 lbl_80365180;
f32 fn_801D11F4(u8* arg0) {
    f32 d;
    f32 t;
    f32 lo;

    if (*(s32*)(arg0 + 0x180) != 0) {
        d = (*(f32*)(arg0 + 0x1A8) - *(f32*)(arg0 + 0x1A0)) - (*(f32*)(arg0 + 0x1B8) - *(f32*)(arg0 + 0x1B0));
        t = *(f32*)(arg0 + 0x4C) - *(f32*)(arg0 + 0x1A0);
        if (lbl_80365160 != d) {
            lo = *(f32*)(arg0 + 0x188);
            return (*(f32*)(arg0 + 0x18C) - lo) * (t / d) + lo;
        }
        return lbl_80365180;
    }
    return lbl_80365180;
}

f32 fn_801D1258(u8* arg0) {
    f32 d;
    f32 t;
    f32 lo;

    if (*(s32*)(arg0 + 0x168) != 0) {
        d = (*(f32*)(arg0 + 0x1A4) - *(f32*)(arg0 + 0x19C)) - (*(f32*)(arg0 + 0x1B4) - *(f32*)(arg0 + 0x1AC));
        t = *(f32*)(arg0 + 0x48) - *(f32*)(arg0 + 0x19C);
        if (lbl_80365160 != d) {
            lo = *(f32*)(arg0 + 0x170);
            return (*(f32*)(arg0 + 0x174) - lo) * (t / d) + lo;
        }
        return lbl_80365180;
    }
    return lbl_80365180;
}

} /* extern "C" */
