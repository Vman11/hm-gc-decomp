/* Functions from 0x8019F188 to 0x8019F1B0, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80364D70;
extern f32 lbl_80364D74;

static inline void setPlane(f32 *v, f32 x, f32 y, f32 z, f32 w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

static inline void setPlaneFrom(f32 *v, void *obj, f32 x) {
    f32 w = *(f32 *)((u8 *)obj + 0x14);
    v[0] = x;
    v[1] = lbl_80364D70;
    v[2] = lbl_80364D70;
    v[3] = -w;
}

#pragma scheduling off
void fn_8019F188(void *arg0, f32 *arg1) {
    setPlane(arg1, lbl_80364D74, lbl_80364D70, lbl_80364D70, -*(f32 *)((u8 *)arg0 + 0x14));
}
