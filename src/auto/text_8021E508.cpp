#include "common.h"

extern "C" {

typedef struct V3 { f32 x, y, z; } V3;
typedef struct Plane { f32 a, b, c, d; s32 start; s32 count; } Plane;
typedef struct Tri { V3 *v[3]; u16 c; u8 e; u8 type; } Tri;
typedef struct Hit { V3 *v[3]; u16 c; u8 e; u8 type; f32 pa, pb, pc, pd; u32 idx[3]; } Hit;
struct BufB { char pad[0xc]; };
struct Buf : BufB { virtual u32 base(int); virtual u32 stride(); };
struct MgrB { char pad[0x10]; Tri *tris; };
struct Mgr : MgrB { virtual void v0(); virtual void v1(); virtual Buf *get(int); };
struct ObjB {
    u32 flags;
    char pad4[0x20];
    V3 p0;
    V3 p1;
    V3 a;
    V3 b;
    char pad54[0xc];
    V3 dir;
    char pad6c[0x8];
    u32 limit;
    s32 nhits;
    char pad7c[0x4];
    Hit *hits;
    char pad84[0x8];
};
struct Obj : ObjB { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void add(); };
typedef int (*TriTest)(Tri *, void *);
extern TriTest lbl_802F0450[];
extern Mgr *lbl_8035B258;
extern u32 lbl_8035B25C;
extern f32 lbl_803659A0;
void fn_80101820(V3 *);
int fn_800FC4A0(Obj *, f32);

static inline f32 Dist(Plane *pl, V3 *v) { return pl->d + (v->x * pl->a + v->y * pl->b + v->z * pl->c); }

static inline void AddHit(Obj *o, Plane *pl, Tri *p, f32 nx, f32 ny, f32 nz) {
    Hit *h = &o->hits[o->nhits];
    f32 d, c, b, a;
    a = pl->a; b = pl->b; c = pl->c; d = pl->d;
    f32 s = a * nx + b * ny + c * nz;
    h->v[0] = p->v[0];
    h->v[1] = p->v[1];
    h->v[2] = p->v[2];
    h->e = p->e;
    h->c = p->c;
    h->type = p->type;
    h->pa = a;
    h->pb = b;
    h->pc = c;
    h->pd = d;
    if (s < lbl_803659A0) {
        h->pa = -h->pa;
        h->pb = -h->pb;
        h->pc = -h->pc;
        h->pd = -h->pd;
    }
    {
        Buf *bf = lbl_8035B258->get(p->e);
        u32 base = bf->base(0);
        u32 st = bf->stride();
        h->idx[0] = ((u32)p->v[0] - base) / st;
        h->idx[1] = ((u32)p->v[1] - base) / st;
        h->idx[2] = ((u32)p->v[2] - base) / st;
    }
    o->add();
}

void fn_8021E508(Plane *pl, Obj *o, void *ctx) {
    f32 bx, by, bz;
    Tri *p, *end;
    Tri *best = 0;
    f32 ny, nz, t, nx;
    t = lbl_803659A0;
    if (o->flags & 1) {
        o->dir.x = o->b.x - o->a.x;
        o->dir.y = o->b.y - o->a.y;
        o->dir.z = o->b.z - o->a.z;
        fn_80101820(&o->dir);
        o->flags &= ~1;
    }
    bz = by = bx = lbl_803659A0;
    {
    Tri *base = lbl_8035B258->tris + pl->start;
    end = base + pl->count;
    p = base;
    while (p < end) {
        if (lbl_802F0450[p->type](p, ctx) != 0) {
            f32 a0 = __fabs(Dist(pl, &o->p0));
            f32 a1 = __fabs(Dist(pl, &o->p1));
            f32 sum = a0 + a1;
            f32 ex, ey, ez, fx, fy, fz;
            if (lbl_803659A0 == sum) return;
            t = a0 / sum;
            {
            V3 *v1 = p->v[1];
            ex = p->v[0]->x - v1->x;
            fx = p->v[2]->x - v1->x;
            fz = p->v[2]->z - v1->z;
            ez = p->v[0]->z - v1->z;
            fy = p->v[2]->y - v1->y;
            ey = p->v[0]->y - v1->y;
            }
            nx = ey * fz - ez * fy;
            ny = ez * fx - ex * fz;
            nz = ex * fy - ey * fx;
            if (o->dir.x * nx + o->dir.y * ny + o->dir.z * nz >= lbl_803659A0) {
                bx = nx;
                best = p;
                by = ny;
                bz = nz;
                p++;
                continue;
            } else {
                lbl_8035B25C++;
                if (fn_800FC4A0(o, t)) {
                    AddHit(o, pl, p, nx, ny, nz);
                }
                if (!(o->flags & 0x10) && lbl_8035B25C < o->limit) goto next;
                return;
            }
        }
    next:
        p++;
    }
    }
    if (best == 0) return;
    if (o->flags & 0x10) return;
    lbl_8035B25C++;
    if (fn_800FC4A0(o, t)) {
        AddHit(o, pl, best, bx, by, bz);
    }
}

} /* extern "C" */
