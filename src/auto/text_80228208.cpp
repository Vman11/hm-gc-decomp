#include "common.h"

// NonMatching draft (wA_80200C24): entity range/cone scan. SDIFF 15 / DIFF 29: only the d=hit-pos block;
// target reloads pos->z for d.z after the d.x/d.y stores (and lfs 0.0f late); mine CSEs it.

extern "C" {

struct V3 { f32 x, y, z; };
struct C8023C7CC {
    u8 pad[8];
    void *a;
    void *b;
    u8 pad2[12];
    C8023C7CC();
    ~C8023C7CC();
};
struct Mdl {
    u32 flags;
    u8 pad4[0x20];
    f32 radius;
    u8 pad28[8];
    void *f30;
    u8 pad34[0x34];
    virtual void m0();
    virtual void m1();
    virtual void update();
};
struct Ent {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void notify(void *actor, void *src, s32 a, f32 *dist, s32 b);
    u8 pad4[0x90];
    u32 state;
    u8 pad98[4];
    Mdl *mdl;
};
void fn_8023C720(C8023C7CC *, void *);
void fn_8023C528(C8023C7CC *, s32);
Ent *fn_8023A490(void *, void *);
void fn_8023C3F4(C8023C7CC *);
void fn_80107244(void *, V3 *);
f32 fn_80101590(V3 *, V3 *);
s32 fn_80237BB0(void *, Ent *, s32, s32, V3 *);
s32 fn_802376C0(Ent *, V3 *, V3 *, V3 *, s32, s32, V3 *);
void fn_80100F24(V3 *, V3 *);
void fn_80101820(V3 *);
extern void *lbl_8035B308;
extern f32 lbl_803596E0[];
extern f32 lbl_80365CB0;
extern f64 lbl_80365CB8;
extern f64 lbl_80365CC0;

static inline void vsub(V3 *o, V3 *a, V3 *b) { o->x = a->x - b->x; o->y = a->y - b->y; o->z = a->z - b->z; }
static inline bool isActive(Ent *e) { return e->state >= 1 && e->state <= 2; }

void fn_80228208(void *self, void *actor, V3 *pos, f32 range, f32 height, f32 minDot, V3 *dir, V3 *up,
                 void *src, f32 *outDist, s32 type, s32 pick, s32 useDir) {
    f32 z0 = pos->z;
    C8023C7CC it;
    f32 bestDist = range;
    f32 bestDot = minDot;
    Ent *best = 0;
    fn_8023C720(&it, lbl_8035B308);
    fn_8023C528(&it, type);
    while (it.a != 0) {
        if (isActive(it.a != 0 ? fn_8023A490(it.a, it.b) : 0)) {
            Ent *e = it.a != 0 ? fn_8023A490(it.a, it.b) : 0;
            if (e->mdl) {
                V3 p;
                if (e->mdl->f30) fn_80107244(e->mdl->f30, &p);
                else { p.x = lbl_80365CB0; p.y = lbl_80365CB0; p.z = lbl_80365CB0; }
                pos->z = p.z;
                Mdl *m = e->mdl;
                if (m->flags & 4) m->update();
                f32 r = m->radius;
                if (fn_80101590(pos, &p) - r <= range) {
                    V3 hit;
                    s32 ok;
                    hit.x = lbl_803596E0[0]; hit.y = lbl_803596E0[0]; hit.z = lbl_803596E0[0];
                    if (src) ok = fn_80237BB0(src, e, useDir, 0, &hit);
                    else ok = fn_802376C0(e, pos, dir, up, useDir, 0, &hit);
                    if (ok) {
                        if (hit.x == lbl_803596E0[0]) hit = p;
                        pos->z = hit.z;
                        V3 d;
                        f32 dist;
                        f32 dz = pos->z - z0;
                        vsub(&d, &hit, pos);
                        f32 l = d.x * d.x + d.y * d.y + d.z * d.z;
                        if (l > lbl_80365CB0) {
                            volatile f32 y;
                            f64 g = __frsqrte((f64)l);
                            g = lbl_80365CB8 * g * (lbl_80365CC0 - g * g * l);
                            g = lbl_80365CB8 * g * (lbl_80365CC0 - g * g * l);
                            g = lbl_80365CB8 * g * (lbl_80365CC0 - g * g * l);
                            y = (f32)(l * g);
                            l = y;
                        }
                        dist = l;
                        if (l < range && dz >= -height && dz <= height) {
                            if (useDir) {
                                fn_80100F24(&d, up);
                                fn_80101820(&d);
                                f32 dot = d.x * dir->x + d.y * dir->y + d.z * dir->z;
                                if (pick) {
                                    if (dot > bestDot) {
                                        bestDot = dot;
                                        best = e;
                                    }
                                } else {
                                    e->notify(actor, src, 0, outDist ? outDist : &dist, 0);
                                }
                            } else {
                                if (pick) {
                                    if (l < bestDist) {
                                        bestDist = l;
                                        best = e;
                                    }
                                } else {
                                    e->notify(actor, src, 0, outDist ? outDist : &dist, 0);
                                }
                            }
                        }
                    }
                }
            }
        }
        fn_8023C3F4(&it);
    }
    if (best) best->notify(actor, src, 0, 0, 0);
}

}
