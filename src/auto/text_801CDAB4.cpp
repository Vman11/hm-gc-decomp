// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { u32 pad[4];
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void Draw(u32 a, f32 *r, u32 b, f32 *cl, u32 x, u32 y, u32 z, u32 s0, u32 s1, f32 f);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int); };
struct E { V *o; u32 f4; u32 f8; s32 f12; s32 f16; s32 f20; s32 f24; };
struct R { f32 v[4]; };
struct P { u32 f0; E *items; u32 n; R *r1; R *r2; s32 *f20; u32 *f24; };
void fn_8010069C(f32 *, f32 *);
void fn_801CDAB4(P *p, u32 a, f32 *pos, u32 b, u32 c, u32 d, V **ep, f32 *clip, u32 x, u32 y, u32 z, f32 f) {
    u32 i;
    for (i = 0; i < p->n; i++) {
        V *o = p->items[i].o;
        u32 fl;
        f32 r[4];
        f32 *cl;
        if (o == 0) continue;
        fl = p->f24[i];
        if ((d & 0xFFFF0000) != (fl & 0xFFFF0000) && (fl & 0xFFFF0000) != 0) continue;
        if (!((d & 0xFFFF) & fl) && !(fl & 0x4000)) continue;
        if (d != c) o->v7(0);
        if (p->items[i].f24) r[0] = pos[2] + p->r1[i].v[0];
        else r[0] = pos[0] + p->r1[i].v[0];
        if (p->items[i].f12) r[1] = pos[3] + p->r1[i].v[1];
        else r[1] = pos[1] + p->r1[i].v[1];
        if (p->items[i].f20) r[2] = pos[0] + p->r1[i].v[2];
        else r[2] = pos[2] + p->r1[i].v[2];
        if (p->items[i].f16) r[3] = pos[1] + p->r1[i].v[3];
        else r[3] = pos[3] + p->r1[i].v[3];
        cl = clip;
        if (p->f20[i]) {
            f32 c2[4];
            f32 py = pos[1];
            f32 px = pos[0];
            c2[0] = px + p->r2[i].v[0];
            c2[2] = px + p->r2[i].v[2];
            c2[1] = py + p->r2[i].v[1];
            c2[3] = py + p->r2[i].v[3];
            if (clip) fn_8010069C(c2, clip);
            cl = c2;
        }
        if (ep) {
            if (ep[i]) ep[i]->Draw(a, r, b, cl, x, y, z, p->items[i].f8, p->items[i].f4, f);
        } else {
            E *e = &p->items[i];
            if (e->o) e->o->Draw(a, r, b, cl, x, y, z, e->f8, e->f4, f);
        }
    }
}

} /* extern "C" */
