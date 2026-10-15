/* Functions from 0x8019F188 to 0x8019F1B0, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80364D70;
extern const f32 lbl_80364D74;

static inline void setPlaneX(f32 *v, f32 x, f32 d) {
    v[0] = x;
    v[1] = lbl_80364D70;
    v[2] = lbl_80364D70;
    v[3] = d;
}

void fn_8019F188(f32 *arg0, f32 *arg1) {
    f32 x = lbl_80364D74;
    f32 w = arg0[5];
    f32 *dst = arg1;
    dst[0] = x;
    dst[1] = lbl_80364D70;
    dst[2] = lbl_80364D70;
    dst[3] = -w;
}
