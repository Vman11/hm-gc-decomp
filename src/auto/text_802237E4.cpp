// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B65C;
extern f32 lbl_80365AC0;
extern f32 lbl_80365A70;
extern f32 lbl_80365AC4;
extern f32 lbl_80365AC8;
extern f32 lbl_80365A80;
extern f32 lbl_80365ACC;
extern f32 lbl_80365AD0;
extern f32 lbl_80365AD4;
extern f32 lbl_80365AD8;
f64 fn_800F049C(f64 x);
void fn_8012962C(void *o, f32 a, f32 b, f32 c, f32 d);

typedef struct {
    u8 pad[596];
    f32 cur;
    f32 tgt;
    f32 dst;
    f32 rate;
    f32 timer;
    f32 damp;
} S802237E4;

void fn_802237E4(S802237E4 *p, f32 dt) {
    u8 *o;
    f32 d;
    f32 diff;
    f32 damp;
    f32 k;
    o = M2C_FIELD(lbl_8035B65C, u8 **, 40);
    p->cur = lbl_80365AC0 * M2C_FIELD(o, f32 *, 52);
    if (p->cur != p->dst) {
        p->timer -= dt;
        if (p->timer <= lbl_80365A70 && (d = p->cur - p->tgt) >= lbl_80365AC4 && d <= lbl_80365AC8) {
            p->timer = lbl_80365A70;
            p->cur = p->dst;
            p->tgt = p->dst;
        } else {
            if (p->timer > *(volatile f32 *)&lbl_80365A70) p->tgt = p->rate * dt + p->tgt;
            diff = p->tgt - p->cur;
            damp = p->damp;
            if ((f32)__fabs(diff) > lbl_80365A70) {
                k = lbl_80365A80 - (f32)fn_800F049C(-damp * dt);
                p->cur = k * diff + p->cur;
            }
        }
        fn_8012962C(o, lbl_80365ACC * p->cur, lbl_80365AD0, lbl_80365AD4, lbl_80365AD8);
    }
}

} /* extern "C" */
