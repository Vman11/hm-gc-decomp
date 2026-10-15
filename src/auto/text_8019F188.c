/* Functions from 0x8019F188 to 0x8019F1B0, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80364D70;
extern f32 lbl_80364D74;

static inline void setVec4(f32 *v, f32 x, f32 y, f32 z, f32 w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

void fn_8019F188(void *arg0, f32 *arg1) {
    arg1[0] = lbl_80364D74;
    arg1[3] = -*(f32 *)((char *)arg0 + 0x14);
    arg1[1] = lbl_80364D70;
    arg1[2] = lbl_80364D70;
}
