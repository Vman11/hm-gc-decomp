/* Functions from 0x8019F8FC to 0x8019F924, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_80364D78;
extern f32 lbl_80364D7C;

static inline void fn_8019F8FC_set(f32 *v, f32 x, f32 y, f32 z, f32 w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

void fn_8019F8FC(void *arg0, f32 *arg1) {
    f32 w = *(f32 *)((u8 *)arg0 + 0x14);
    arg1[0] = lbl_80364D78;
    arg1[1] = lbl_80364D7C;
    arg1[2] = lbl_80364D78;
    arg1[3] = -w;
}
