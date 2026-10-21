// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T;
struct L { u32 x0; virtual void p0(); virtual void p1(); virtual void onEnd(T *); virtual void onLoop(T *); };
struct T { u32 flags; f32 t; f32 speed; L *l; };
extern "C" { double fn_800F04BC(double, double); extern u32 lbl_803638F0; extern f32 lbl_803638F4; }

extern "C" f32 fn_80106E84(T *p, f32 dt, s32 lo, s32 hi) {
    f32 nt;
    f32 len;
    if (!(p->flags & 2)) {
        return p->t;
    }
    {
        if (p->l) {
            p->l->x0 = 1;
        }
        nt = dt * p->speed + p->t;
        if (p->flags & 4) {
            len = (f32)hi;
            p->t = fn_800F04BC(nt, len);
            if (p->t < lbl_803638F4) {
                p->t = len + p->t;
            } else if (nt > p->t) {
                p->flags |= lbl_803638F0;
                if (p->l) {
                    p->l->onLoop(p);
                }
            }
        } else {
            p->t = (f32)lo;
            if (nt > p->t) {
                p->flags |= 24;
                p->flags &= ~2;
                if (p->l) {
                    p->l->onEnd(p);
                }
            } else if (nt < lbl_803638F4) {
                p->t = lbl_803638F4;
            } else {
                p->t = nt;
            }
        }
    }
    return nt;
}

} /* extern "C" */
