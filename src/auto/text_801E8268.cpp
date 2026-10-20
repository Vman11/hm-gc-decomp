// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365340;
void fn_80121458(f32, u8 *, void *, void *);

void fn_801E8268(f32 dt, u8 *p) {
    f32 t = *(f32 *)(p + 100);
    if (t != lbl_80365340) {
        u8 c[4];
        u8 *q;
        if (t <= dt) {
            *(f32 *)(p + 100) = lbl_80365340;
        } else {
            *(f32 *)(p + 100) = t - dt;
        }
        fn_80121458((*(f32 *)(p + 96) - *(f32 *)(p + 100)) / *(f32 *)(p + 96), c, p + 72, p + 40);
        q = *(u8 **)(p + 88);
        q[8] = c[0];
        q[9] = c[1];
        q[10] = c[2];
        q[11] = c[3];
    }
}

} /* extern "C" */
