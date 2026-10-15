/* Functions from 0x8019F188 to 0x8019F1B0, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80364D70;
extern f32 lbl_80364D74;

static inline void setPlaneX(f32 *v, f32 x, f32 d) {
    v[0] = x;
    v[1] = lbl_80364D70;
    v[2] = lbl_80364D70;
    v[3] = d;
}

void fn_8019F188(f32 *arg0, f32 *arg1) {
    f32 w = arg0[5];
    arg1[0] = 1.0f;
    arg1[1] = lbl_80364D70;
    arg1[2] = lbl_80364D70;
    arg1[3] = -w;
}
