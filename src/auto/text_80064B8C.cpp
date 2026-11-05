#include "common.h"

extern "C" {

typedef struct V3 { f32 x, y, z; } V3;
typedef struct Q4 { f32 x, y, z, w; } Q4;

typedef struct Hnd { u8 pad[0x10]; void *f10; } Hnd;
typedef struct Bar { u8 pad[0x30]; Hnd *f30; } Bar;
typedef struct Ctl { u8 pad[0x4c]; u32 *f4c; s32 *f50; } Ctl;
typedef struct Cam {
    u8 pad0[0x338];
    Ctl *f338;
    u8 pad33c[0x5b0 - 0x33c];
    Bar *f5b0;
    V3 f5b4;
    Q4 f5c0;
    V3 f5d0;
    u8 pad5dc[0x660 - 0x5dc];
    V3 f660;
} Cam;
typedef struct Obj {
    u8 pad0[0x14];
    V3 pos;
    V3 a;
    V3 b;
    V3 c;
    u8 pad44[0xfc - 0x44];
    Cam *cam;
} Obj;

typedef struct FT { u8 pad[0x148]; void (*f148)(void *, V3 *); } FT;
extern FT lbl_803286D0;
extern f32 *lbl_80357B50[];
extern f32 lbl_8035E70C;
extern f32 lbl_8035E710;
extern f32 lbl_8035E714;
extern f32 lbl_8035E718;

void fn_80107244(void *, V3 *);
void fn_801075B8(void *, Q4 *);
void fn_801003A8(Q4 *, Q4 *, Q4 *);
void fn_801002B0(Q4 *);
void fn_800FFF8C(Q4 *, V3 *);
void fn_80100F24(V3 *, V3 *);
f64 fn_800F049C(f64);
void fn_80101820(V3 *);
int fn_80264E0C(V3 *, V3 *, void *, int, int, int, void *, int, int, int, int, int, int, int, int);

#define VK0 (*(volatile f32 *)&lbl_8035E70C)
#define VK1 (*(volatile f32 *)&lbl_8035E710)
#define VKM (*(volatile f32 *)&lbl_8035E714)
#define VK8 (*(volatile f32 *)&lbl_8035E718)
static inline void CrossKL(V3 *o, volatile f32 *px, f32 y, f32 z, V3 *d) {
    f32 dy;
    f32 dx;
    f32 x;
    f32 dz;
    dy = d->y;
    dz = d->z;
    *(volatile f32 *)&o->x = y * dz - z * dy;
    dx = *(volatile f32 *)&d->x;
    x = *px;
    o->y = z * dx - x * dz;
    o->z = x * dy - y * dx;
}
static inline void CrossK(V3 *o, f32 x, f32 y, f32 z, V3 *d) {
    o->x = y * d->z - z * d->y;
    o->y = z * d->x - x * d->z;
    o->z = x * d->y - y * d->x;
}

static inline void Cross(V3 *o, V3 *a, V3 *d) {
    o->x = a->y * d->z - a->z * d->y;
    o->y = a->z * d->x - a->x * d->z;
    o->z = a->x * d->y - a->y * d->x;
}

static inline void QSet(Q4 *q, f32 x, f32 y, f32 z, f32 w) { q->x = x; q->y = y; q->z = z; q->w = w; }
static inline bool Eq(V3 *a, V3 *b) {
    return a->x == b->x && a->y == b->y && a->z == b->z;
}

static inline f32 GetScale(Ctl *c) {
    s32 *h = c->f50;
    if (h) {
        f32 **t = lbl_80357B50;
        if (t) {
            f32 *v = t[*h];
            if (v) return *v;
        }
    }
    return VK0;
}

static inline f32 GetScale2(Ctl *c, V3 *__restrict &o) {
    o = (V3 *)c->f50;
    if (o) {
        f32 **t = lbl_80357B50;
        if (t) {
            f32 *v = t[*(s32 *)o];
            if (v) return *v;
        }
    }
    return VK0;
}
void fn_8006656C(void);
void fn_8023D1BC(void);
void fn_8023D1B4(void);
void fn_80066168(void);
void fn_80034AF8(void);
void fn_8023D198(void);
void fn_80261914(void);
void fn_802611B8(void);
void fn_802611B4(void);
void fn_800664A4(void);
void fn_800662C4(void);
void fn_800662A4(void);
void fn_80034AEC(void);
void fn_8026091C(void);
void fn_80066148(void);
void fn_80034AF0(void);
void fn_80034AF4(void);
void *__vt__9C800665E0[19] = { 0, 0, (void *)fn_8006656C, (void *)fn_8023D1BC, (void *)fn_8023D1B4, (void *)fn_80066168, (void *)fn_80034AF8, (void *)fn_8023D198, (void *)fn_80261914, (void *)fn_802611B8, (void *)fn_802611B4, (void *)fn_800664A4, (void *)fn_800662C4, (void *)fn_800662A4, (void *)fn_80034AEC, (void *)fn_8026091C, (void *)fn_80066148, (void *)fn_80034AF0, (void *)fn_80034AF4 };

void fn_80064B8C(Obj *p, V3 *__restrict off, f32 dt) {
    V3 trans;
    Q4 rot;
    Q4 q;
    V3 pos;
    V3 a;
    V3 b;
    V3 n;
    Q4 m;
    V3 tmp;
    V3 e;
    V3 s;
    Bar *hit;
    f32 d2;
    Ctl *ctl;
    Cam *cam;
    Bar *bar;
    V3 *dir;
    V3 *__restrict o2;
    Obj *self;
    f32 cx, cy, cz;
    f32 vx, vy, vz;
    f32 sc;

    cam = p->cam;
    bar = cam->f5b0;
    ctl = cam->f338;
    dir = &cam->f5d0;
    self = p;
    o2 = off;
    pos = p->pos;
    a = p->a;
    b.x = p->b.x;
    b.y = p->b.y;
    *(volatile f32 *)&b.z = p->b.z;
    vx = VK0;
    cx = p->c.x;
    cy = p->c.y;
    cz = p->c.z;
    vy = vx;
    vz = vx;
    n.x = vx;
    n.y = vx;
    n.z = vx;
    if (bar) {
        Hnd *h = bar->f30;
        if (h) {
            fn_80107244(h, &trans);
            fn_801075B8(h, &rot);
            pos.x -= cam->f5b4.x;
            pos.y -= cam->f5b4.y;
            pos.z -= cam->f5b4.z;
            q = cam->f5c0;
            q.x = -q.x; q.y = -q.y; q.z = -q.z; *(volatile f32 *)&q.w = q.w;
            fn_801003A8(&m, &q, &rot);
            fn_801002B0(&m);
            fn_800FFF8C(&m, &pos);
            fn_800FFF8C(&m, &a);
            fn_800FFF8C(&m, &b);
            cx = a.y * b.z - a.z * b.y;
            cy = a.z * b.x - a.x * b.z;
            cz = a.x * b.y - a.y * b.x;
            pos.x += trans.x;
            pos.y += trans.y;
            pos.z += trans.z;
        }
    } else {
        *(volatile f32 *)&trans.x = vx;
        *(volatile f32 *)&trans.y = vx;
        *(volatile f32 *)&trans.z = vx;
        *(volatile f32 *)&rot.x = vx;
        *(volatile f32 *)&rot.y = vx;
        *(volatile f32 *)&rot.z = vx;
        rot.w = VK1;
    }
    if (ctl) {
        sc = GetScale2(ctl, off);
        if (VK0 != sc) {
            u32 *k = ctl->f4c;
            switch (k ? *k : 0) {
            case 1: { f32 z = VK0; *(volatile f32 *)&n.x = z; *(volatile f32 *)&n.y = VK1; *(volatile f32 *)&n.z = z; } break;
            case 2: { f32 o = VK1; *(volatile f32 *)&n.x = o; *(volatile f32 *)&n.y = o; } *(volatile f32 *)&n.z = VK0; break;
            case 3: *(volatile f32 *)&n.x = VK1; { f32 z = VK0; *(volatile f32 *)&n.y = z; *(volatile f32 *)&n.z = z; } break;
            case 4: *(volatile f32 *)&n.x = VK1; *(volatile f32 *)&n.y = VKM; *(volatile f32 *)&n.z = VK0; break;
            case 5: { f32 z = VK0; *(volatile f32 *)&n.x = z; *(volatile f32 *)&n.y = VKM; *(volatile f32 *)&n.z = z; } break;
            case 6: { f32 m = VKM; *(volatile f32 *)&n.x = m; *(volatile f32 *)&n.y = m; } *(volatile f32 *)&n.z = VK0; break;
            case 7: *(volatile f32 *)&n.x = VKM; { f32 z = VK0; *(volatile f32 *)&n.y = z; *(volatile f32 *)&n.z = z; } break;
            case 8: *(volatile f32 *)&n.x = VKM; *(volatile f32 *)&n.y = VK1; *(volatile f32 *)&n.z = VK0; break;
            case 9:
                if (bar) { if (dir) CrossK(&n, lbl_8035E70C, lbl_8035E710, lbl_8035E70C, dir); else sc = VK0; } else sc = VK0;
                break;
            case 10:
                if (bar) { if (dir) CrossK(&n, lbl_8035E710, lbl_8035E710, VK0, dir); else sc = VK0; } else sc = VK0;
                break;
            case 11:
                if (bar) { if (dir) CrossKL(&n, (volatile f32 *)&lbl_8035E710, lbl_8035E70C, lbl_8035E70C, dir); else sc = VK0; } else sc = VK0;
                break;
            case 12:
                if (bar) { if (dir) CrossKL(&n, (volatile f32 *)&lbl_8035E710, lbl_8035E714, lbl_8035E70C, dir); else sc = VK0; } else sc = VK0;
                break;
            case 13:
                if (bar) { if (dir) CrossK(&n, lbl_8035E70C, lbl_8035E714, lbl_8035E70C, dir); else sc = VK0; } else sc = VK0;
                break;
            case 14:
                if (bar) { if (dir) CrossK(&n, lbl_8035E714, lbl_8035E714, VK0, dir); else sc = VK0; } else sc = VK0;
                break;
            case 15:
                if (bar) { if (dir) CrossKL(&n, (volatile f32 *)&lbl_8035E714, lbl_8035E70C, lbl_8035E70C, dir); else sc = VK0; } else sc = VK0;
                break;
            case 16:
                if (bar) { if (dir) CrossKL(&n, (volatile f32 *)&lbl_8035E714, lbl_8035E710, lbl_8035E70C, dir); else sc = VK0; } else sc = VK0;
                break;
            case 17:
                if (bar) {
                    Hnd *h = bar->f30;
                    if (h) {
                        lbl_803286D0.f148(h->f10, &n);
                        n.x = -n.x;
                        n.y = -n.y;
                        n.z = -n.z;
                    } else sc = VK0;
                } else sc = VK0;
                break;
            case 18:
                if (bar) {
                    Hnd *h = bar->f30;
                    if (h) {
                        if (dir) {
                            lbl_803286D0.f148(h->f10, &tmp);
                            Cross(&n, &tmp, dir);
                        } else sc = VK0;
                    } else sc = VK0;
                } else sc = VK0;
                break;
            default:
                sc = VK0;
                break;
            }
            {
                f32 dx, dy, dz, t;
                fn_80100F24(&n, dir);
                dx = dir->x - b.x;
                dy = dir->y - b.y;
                dz = dir->z - b.z;
                t = fn_800F049C(VK8 * dt);
                t = VK1 - t;
                b.x = t * dx + b.x;
                b.y = t * dy + b.y;
                b.z = t * dz + b.z;
                fn_80100F24(&a, &b);
                cx = a.y * b.z - a.z * b.y;
                cy = a.z * b.x - a.x * b.z;
                cz = a.x * b.y - a.y * b.x;
                fn_80101820(&n);
                n.x *= sc;
                n.y *= sc;
                n.z *= sc;
                pos.x = dt * n.x + pos.x;
                pos.y = dt * n.y + pos.y;
                pos.z = dt * n.z + pos.z;
            }
        }
    }
    if (!(Eq(&self->pos, &pos) && Eq(&self->a, &a) && Eq(&self->b, &b))) {
        {
        V3 o;
        e = self->pos;
        o = *o2;
        e.x += o.x * self->a.x;
        e.y += o.x * self->a.y;
        e.z += o.x * self->a.z;
        e.x += o.y * self->b.x;
        e.y += o.y * self->b.y;
        e.z += o.y * self->b.z;
        e.x += o.z * self->c.x;
        e.y += o.z * self->c.y;
        e.z += o.z * self->c.z;
        s = pos;
        s.x += o.x * a.x;
        s.y += o.x * a.y;
        s.z += o.x * a.z;
        s.x += o.y * b.x;
        s.y += o.y * b.y;
        s.z += o.y * b.z;
        s.x += o.z * cx;
        s.y += o.z * cy;
        s.z += o.z * cz;
        }
        if (!fn_80264E0C(&e, &s, 0, 0, 0, 0, &hit, 0, 0, 0, 0, 0, 0, 0, 1) || hit == bar) {
            vx = pos.x - self->pos.x;
            vy = pos.y - self->pos.y;
            vz = pos.z - self->pos.z;
            vx *= lbl_8035E710 / dt;
            vy *= lbl_8035E710 / dt;
            vz *= lbl_8035E710 / dt;
            self->pos = pos;
            self->a = a;
            self->b = b;
            self->c.x = cx;
            self->c.y = cy;
            self->c.z = cz;
        }
    }
    cam = self->cam;
    cam->f660.x = vx;
    cam->f660.y = vy;
    cam->f660.z = vz;
}

} /* extern "C" */
