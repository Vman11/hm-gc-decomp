#include "common.h"
struct V3 { f32 x, y, z; };
struct Path {
    u8 pad0[4];
    u16 flags;
    u8 pad6[6];
    u32 n;
    s32 loop;
    u8 pad14[0x3c - 0x14];
    f32 *times;
    u8 pad40[0x68 - 0x40];
    s32 f68;
};
struct ActB {
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
    virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
    virtual void d10(); virtual void d11(); virtual void d12();
    virtual void get(V3 *, V3 *, V3 *, V3 *, void *);
    virtual void set(V3 *, V3 *, V3 *, V3 *, void *);
    virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
    virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24();
    virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32();
    virtual void msg(const char *, s32, s32, s32, s32);
};
struct Act : ActB {
    u8 *info;
    u8 pad8[0x118 - 8];
    V3 vel;
    u8 pad124[0x154 - 0x124];
    f32 spd;
    u8 pad158[0x18c - 0x158];
    ActB *sub;
    u8 pad190[0x240 - 0x190];
    s32 f240;
};
struct Fol {
    u8 pad0[0x8c];
    s32 f8c;
    u8 pad90[0x9c - 0x90];
    Act *act;
    u8 padA0[0xb0 - 0xa0];
    s32 mode;
    s32 spdMode;
    s32 dirMode;
    s32 upMode;
    s32 rev;
    s32 fc4;
    s32 fc8;
    f32 fcc;
    f32 fd0;
    f32 fd4;
    f32 fd8;
    s32 fdc;
    f32 t;
    f32 speed;
    f32 delay;
    f32 fec;
    u32 idx;
    Path *path;
    s32 ff8;
    f32 ffc;
    s32 f100;
};

extern "C" {
extern f32 lbl_80366B18;
extern f32 lbl_80366B1C;
extern f32 lbl_80366B20;
extern u32 lbl_80366B6C;
extern f64 lbl_80366B70;
extern f64 lbl_80366B78;
extern char lbl_80366B80[7];
extern char lbl_802AA1E0[];
extern char lbl_802AA1EC[];
extern u8 *lbl_8035B65C;
extern u8 *lbl_8035B488;
extern u8 lbl_803286D0[];
u32 fn_802466B4(Path *, f32, void *, V3 *, V3 *, V3 *, f32 *);
void fn_80245F08(Path *, u32, f32 *);
void fn_80244D3C(Path *);
void fn_80244FC8(Path *, f32, V3 *);
void fn_80244DC4(Path *, u32, V3 *);
void fn_80263384(Fol *, u32, u32);
void fn_80101820(V3 *);
void fn_80101414(f32, V3 *, V3 *);
void fn_80101624(f32, V3 *, V3 *, V3 *);
void fn_800F6E88(char *, u8 *);
s32 fn_800F6CD0(char *, char *);
void fn_80222FE8(Act *, f32);

static inline u32 Next(Path *path, u32 i) {
    u32 n;
    if (path->loop) return i < *(volatile u32 *)&path->n - 1 ? i + 1 : 0;
    n = *(volatile u32 *)&path->n - 1;
    if (i < n) n = i + 1;
    return n;
}

static inline f32 Sq(f32 x) {
    if (x > *(volatile f32 *)&lbl_80366B18) {
        const f64 _half = lbl_80366B70;
        const f64 _three = lbl_80366B78;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}

static inline void Cross(V3 *o, V3 *a, V3 *b) {
    o->x = a->y * b->z - a->z * b->y;
    o->y = a->z * b->x - a->x * b->z;
    *(volatile f32 *)&o->z = a->x * b->y - a->y * b->x;
}

static inline void Norm(V3 *v) {
    f32 z = v->z;
    f32 l;
    z *= z;
    l = Sq(v->x * v->x + v->y * v->y + z);
    if (lbl_80366B18 == l) {
        *(volatile f32 *)&v->x = lbl_80366B20;
        *(volatile f32 *)&v->y = lbl_80366B18;
        *(volatile f32 *)&v->z = lbl_80366B18;
    } else {
        f32 inv = lbl_80366B20 / l;
        v->x *= inv;
        v->y *= inv;
        v->z *= inv;
    }
}

void fn_80263894(Fol *p, f32 dt) {
    V3 pos0, fwd0, up0, right;
    u8 x[12];
    V3 pos, up, fwd, ahead, d2, off, vel, neg;
    char name[8];
    f32 len, spd, cur, nxt;
    V3 *upP = 0;
    V3 *fwdP = 0;
    u32 idx;
    f32 rem;
    f32 step;
    Act *a;

    if (!p->path) return;
    if (p->path->f68) {
        a = p->act;
        a->vel.x = lbl_80366B18;
        a->vel.y = lbl_80366B18;
        a->vel.z = lbl_80366B18;
        a->spd = lbl_80366B18;
        return;
    }
    idx = fn_802466B4(p->path, p->t, 0, 0, 0, 0, 0);
    rem = dt;
    if (dt > lbl_80366B18) {
        if (p->delay > lbl_80366B18) {
            p->delay -= dt;
            {
            f32 k, v;
            v = *(volatile f32 *)&p->delay;
            k = *(volatile f32 *)&lbl_80366B18;
            if (v <= k) {
                p->delay = k;
                fn_80263384(p, idx, idx + 1);
            }
            }
            rem = lbl_80366B18;
        }
        if (p->f100 && lbl_80366B18 == p->delay && idx != p->path->n - 1) {
            Path *path = p->path;
            u32 nx = Next(path, idx);
            p->t = path->times[nx];
            p->f100 = 0;
            p->ff8 = 0;
            p->idx = nx;
            fn_80263384(p, nx, nx + 1);
            rem = lbl_80366B18;
        }
    }
    if (p->path->n == 0) return;
    p->act->get(&pos0, &fwd0, &up0, &right, x);
    if (lbl_80366B18 != rem) {
        switch (p->spdMode) {
        case 0:
            p->speed = p->fd4;
            break;
        case 1:
            if (p->path->flags & 0x10) {
                fn_802466B4(p->path, p->t, 0, 0, 0, 0, &spd);
                p->speed = spd;
            } else {
                p->speed = p->fd4;
            }
            break;
        case 2:
            idx = fn_802466B4(p->path, p->t, 0, 0, 0, 0, 0);
            if (!idx) cur = lbl_80366B18;
            else fn_80245F08(p->path, idx, &cur);
            fn_80245F08(p->path, Next(p->path, idx), &nxt);
            p->speed = (nxt - cur) / p->fd8;
            break;
        }
        step = p->speed * rem;
        if (p->path->n == 1) step = lbl_80366B18;
        switch (p->mode) {
        case 0:
            fn_80245F08(p->path, p->path->n - 1, &len);
            if (p->t < len) {
                p->t += step;
                if (p->t >= len) break;
            }
            {
                fn_802466B4(p->path, p->t, 0, 0, 0, 0, 0);
                if (lbl_80366B18 == p->ffc && p->t >= len) {
                    p->t = len;
                    p->act->msg(lbl_802AA1E0, 0, 0, 0, 0);
                    p->act->f240 = 0;
                }
                fn_80244D3C(p->path);
            }
            break;
        case 1:
            p->t += step;
            fn_80245F08(p->path, p->path->n - 1, &len);
            if (p->t > len) {
                p->t -= len;
                p->act->msg(lbl_802AA1EC, 0, 0, 0, 0);
            }
            fn_80244D3C(p->path);
            break;
        case 2:
            p->t += step;
            fn_80245F08(p->path, 0, &len);
            if (p->t > len) {
                p->t -= len;
                p->act->msg(lbl_802AA1EC, 0, 0, 0, 0);
            }
            fn_80244D3C(p->path);
            break;
        case 3:
            if (p->rev) {
                p->t += step;
                fn_80245F08(p->path, p->path->n - 1, &len);
                if (p->t > len) {
                    p->rev = 0;
                    p->fec = lbl_80366B18;
                    p->t = len - (p->t - len);
                    p->act->msg(lbl_802AA1EC, 0, 0, 0, 0);
                    p->fdc = 1;
                }
            } else {
                p->t -= step;
                if (p->t < lbl_80366B18) {
                    p->rev = 1;
                    p->fec = lbl_80366B18;
                    p->t = -p->t;
                    p->act->msg(lbl_802AA1EC, 0, 0, 0, 0);
                    p->fdc = 1;
                }
            }
            break;
        }
    }
    fn_802466B4(p->path, p->t, 0, &pos, 0, 0, 0);
    switch (p->dirMode) {
    case 0:
        fwd = fwd0;
        break;
    case 1:
        if (p->path->flags & 8) fwdP = &fwd;
        else fwd = fwd0;
        break;
    case 2:
        if (p->path->n > 1) fn_80244FC8(p->path, p->t, &fwd);
        else fwd = fwd0;
        break;
    case 3: {
        Path *path = p->path;
        u32 n = path->n;
        if (n > 1) {
            if (n == 2) {
                fn_80244DC4(path, 0, &fwd);
            } else {
                fn_802466B4(path, p->t + lbl_80366B1C, 0, &ahead, 0, 0, 0);
                fwd.x = ahead.x - pos.x;
                fwd.y = ahead.y - pos.y;
                fwd.z = ahead.z - pos.z;
                fn_80101820(&fwd);
            }
        } else {
            fwd = fwd0;
        }
        break;
    }
    default:
        fwd = fwd0;
        break;
    }
    if (p->dirMode == 2 || p->dirMode == 3) {
        fn_80101414(p->fd0, &fwd, &up0);
        if (!p->fc4) {
            p->fec = p->fcc * rem + p->fec;
            {
                f32 k, v;
                v = *(volatile f32 *)&p->fec;
                k = *(volatile f32 *)&lbl_80366B20;
                if (v > k) p->fec = k;
            }
            if (p->rev) {
                d2 = fwd;
            } else {
                d2 = fwd;
                d2.x = -d2.x;
                d2.y = -d2.y;
                d2.z = -d2.z;
            }
            fn_80101624(p->fec, &fwd, &fwd0, &d2);
        }
    }
    if (p->upMode && (p->path->flags & 4)) upP = &up;
    else up = up0;
    idx = fn_802466B4(p->path, p->t, 0, 0, upP, fwdP, 0);
    if (idx != p->idx) {
        p->ff8 = 0;
        switch (p->mode) {
        case 0:
        case 1:
        case 2:
            if (p->idx < idx) {
                fn_80263384(p, p->idx + 1, idx + 1);
            } else {
                fn_80263384(p, p->idx + 1, p->path->n);
                fn_80263384(p, 0, idx + 1);
            }
            break;
        case 3:
            if (p->rev) {
                if (p->idx < idx) fn_80263384(p, p->idx + 1, idx + 1);
            } else {
                if (p->idx > idx) fn_80263384(p, idx + 1, p->idx + 1);
            }
            break;
        }
        p->idx = idx;
    }
    if (p->fdc) {
        if (p->rev) fn_80263384(p, 0, 1);
        else fn_80263384(p, p->path->n - 1, p->path->n);
        p->fdc = 0;
    }
    if (p->fc8 == 1) {
        ActB *s = p->act->sub;
        if (s) {
            s->get(&off, 0, 0, 0, 0);
        } else {
            off.x = lbl_80366B18;
            off.y = lbl_80366B18;
            off.z = lbl_80366B18;
        }
        pos.x += off.x;
        pos.y += off.y;
        pos.z += off.z;
    }
    Cross(&right, &fwd, &up);
    Norm(&right);
    fn_80101820(&up);
    Cross(&fwd, &up, &right);
    Norm(&fwd);
    p->act->set(&pos, &fwd, &up, &right, x);
    vel.x = pos.x - pos0.x;
    vel.y = pos.y - pos0.y;
    *(volatile f32 *)&vel.z = pos.z - pos0.z;
    if (vel.x * vel.x + vel.y * vel.y + vel.z * vel.z > *(volatile f32 *)&lbl_80366B18) {
        f32 s;
        fn_80101820(&vel);
        s = p->speed;
        vel.x *= s;
        vel.y *= s;
        vel.z *= s;
        a = p->act;
        a->vel = vel;
        a->spd = s;
    } else {
        a = p->act;
        a->vel = vel;
        a->spd = lbl_80366B18;
    }
    fn_800F6E88(name, p->act->info + 0xc);
    if (fn_800F6CD0(name, lbl_80366B80)) {
        if (p->f8c) {
            u8 *m = *(u8 **)(lbl_8035B65C + 0x28);
            (*(void (**)(void *, V3 *))(lbl_803286D0 + 0xc))(*(void **)(m + 0x10), &pos);
            *(u32 *)(m + 0x20) |= lbl_80366B6C;
            neg.x = -up.x;
            neg.y = -up.y;
            neg.z = -up.z;
            (*(void (**)(void *, V3 *, V3 *))(lbl_803286D0 + 0x30))(*(void **)(m + 0x10), &fwd, &neg);
            *(u32 *)(m + 0x20) |= lbl_80366B6C;
        }
        fn_80222FE8(p->act, *(f32 *)(lbl_8035B488 + 0x14));
    }
}
}
