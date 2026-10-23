// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { s32 v[4]; } I4_801F0980;
typedef struct { u8 pad[76]; f32 f4C; f32 f50; } Cam_801F0980;
typedef struct {
    u8 pad0[8];
    u8 *f8;
    u8 pad1[0x28 - 0xC];
    I4_801F0980 *f28;
    Cam_801F0980 *f2C;
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
    f32 f48;
    f32 f4C;
    f32 f50;
    f32 f54;
    f32 f58;
    f32 f5C;
    f32 f60;
    f32 f64;
    f32 f68;
    f32 f6C;
    f32 f70;
} S_801F0980;
extern f32 lbl_80365468;
extern f32 lbl_8036546C;
void fn_8012962C(Cam_801F0980 *, f32, f32, f32, f32);

#pragma opt_propagation off
void fn_801F0980(S_801F0980 *p, f32 dt) {
    f32 w;
    Cam_801F0980 *c;
    f32 n;
    f32 a;
    w = (s32)*(u16 *)(*(u8 **)(*(u8 **)(p->f8 + 208) + 4) + 28);
    if (lbl_80365468 != p->f3C) {
        if (dt >= p->f3C) {
            p->f28->v[1] = p->f48 * lbl_8036546C;
            p->f28->v[0] = p->f44 * w;
            p->f28->v[2] = p->f4C * w;
            p->f28->v[3] = p->f50 * lbl_8036546C;
            c = p->f2C;
            n = c->f4C;
            a = (f32)(p->f28->v[2] - p->f28->v[0]) / (f32)(p->f28->v[3] - p->f28->v[1]);
            fn_8012962C(c, p->f34, a, n, c->f50);
            p->f3C = lbl_80365468;
        } else {
            p->f3C -= dt;
            p->f68 += p->f58 * dt;
            p->f64 += p->f54 * dt;
            p->f6C += p->f5C * dt;
            p->f70 += p->f60 * dt;
            p->f28->v[1] = p->f68 * lbl_8036546C;
            p->f28->v[0] = p->f64 * w;
            p->f28->v[2] = p->f6C * w;
            p->f28->v[3] = p->f70 * lbl_8036546C;
            p->f38 += p->f40 * dt;
            c = p->f2C;
            n = c->f4C;
            a = (f32)(p->f28->v[2] - p->f28->v[0]) / (f32)(p->f28->v[3] - p->f28->v[1]);
            fn_8012962C(c, p->f38, a, n, c->f50);
        }
    }
}
#pragma opt_propagation reset

} /* extern "C" */
