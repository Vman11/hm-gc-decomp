// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_80364994;
typedef struct Grid { f32 *out; s32 w; s32 h; s32 b; } Grid;
typedef struct Src { f32 *data; } Src;
void fn_801867C8(Grid *g, Src *s, f32 k) {
    f32 * rm1;
    f32 * base;
    f32 * r0;
    f32 * rp1;
    f32 * rp2;
    s32 stride;
    f32 * end;
    f32 * o;
    f32 * rm2;
    s32 x;
    f32 t;
    stride = g->b + (g->w + g->b);
    base = s->data + g->b + g->b * stride;
    end = base + stride * g->h;
    o = g->out + g->b + g->b * stride;
    rm1 = base - stride;
    rp1 = base + stride;
    rp2 = rp1 + stride;
    rm2 = rm1 - stride;
    r0 = base;
    while (r0 < end) {
        for (x = 0; x < g->w; x++) {
            t = rm2[x];
            t += rm1[x - 1];
            t += rm1[x];
            t += rm1[x + 1];
            t += r0[x - 2];
            t += r0[x - 1];
            t += r0[x + 1];
            t += r0[x + 2];
            t += rp1[x - 1];
            t += rp1[x];
            t += rp1[x + 1];
            t += rp2[x];
            t /= lbl_80364994;
            t -= o[x];
            t -= t * k;
            o[x] = t;
        }
        rm2 = rm1;
        rm1 = r0;
        r0 = rp1;
        rp1 = rp2;
        rp2 += stride;
        o += stride;
    }
}

} /* extern "C" */
