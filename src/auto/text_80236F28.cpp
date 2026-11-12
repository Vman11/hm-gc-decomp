// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

struct C8023C7CC {
    void *cont;
    void *block;
    void *node;
    u32 idx;
    s32 flag;
    u8 b;
    C8023C7CC();
    ~C8023C7CC();
};

extern "C" {

struct V3 { f32 x, y, z; };
struct Node {
    u32 flags;
    u8 pad[84];
    Node *child; /* 88 */
};
struct Act {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void GetDir(V3 *, V3 *, V3 *, V3 *, s32); /* 60 */
    u8 pad[64];
    V3 pos;      /* 68 */
    u8 pad2[68];
    u32 type;    /* 148 */
    u8 pad3[4];
    Node *node;  /* 156 */
    u8 pad4[236];
    Act *target; /* 396 */
    u8 pad5[68];
    s32 *pv;     /* 468 */
    u8 pad6[72];
    s32 state;   /* 544 */
};
struct Mgr { u8 pad[72]; Act *player; };

extern Mgr *lbl_8035B308;
extern f32 lbl_80365EFC, lbl_80365F14, lbl_80365F20, lbl_80365F24, lbl_80365F38, lbl_80365F3C;
extern f64 lbl_80365F18, lbl_80365F28, lbl_80365F30;
double fn_800EFDA4(double);
s32 fn_8023C720(C8023C7CC *, void *);
void fn_8023C528(C8023C7CC *, Act *);
void fn_8023C3F4(C8023C7CC *);
Act *fn_8023A490(void *, u32);
s32 fn_8022C558(Act *);
void fn_80100F24(V3 *, V3 *);
void fn_80101820(V3 *);
s32 fn_80237BB0(Act *, Act *, s32, s32, s32);

inline Act *Get(C8023C7CC *it)
{
    return it->node ? fn_8023A490(it->node, it->idx) : 0;
}

inline bool IsType(Act *a)
{
    return a->type >= 1 && a->type <= 2;
}

inline s32 Alive(Act *a)
{
    if (a->state > 0) return 1;
    if (a->state < 0) return 0;
    if (a->pv) return *a->pv;
    return 1;
}

inline f32 Dot(V3 *a, V3 *b, V3 *c)
{
    return a->x * (b->x - c->x) + a->y * (b->y - c->y) + a->z * (b->z - c->z);
}

inline f32 Dot0(V3 *a, V3 *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

inline f32 Sq(f32 x)
{
    if (x > lbl_80365EFC) {
        const f64 _half = lbl_80365F28;
        const f64 _three = lbl_80365F30;
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

inline f32 SqV(f32 x)
{
    if (x > *(volatile f32 *)&lbl_80365EFC) {
        const f64 _half = lbl_80365F28;
        const f64 _three = lbl_80365F30;
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

inline f32 Ang(V3 a, V3 b)
{
    f32 s = b.x * a.y - b.y * a.x;
    f32 c = a.x * b.x + a.y * b.y + a.z * b.z;
    f32 r;
    if (s >= lbl_80365EFC) {
        r = s;
        if (!(c >= lbl_80365EFC)) r = lbl_80365F38 - s;
    } else if (c >= lbl_80365EFC) {
        r = lbl_80365F3C + s;
    } else {
        r = lbl_80365F38 - s;
    }
    return r;
}

#pragma opt_loop_invariants off
void fn_80236F28(Act *self, f32 maxd, f32 minv, Act *grp, s32 useDir, s32 unused, Act *ref, s32 mode)
{
    C8023C7CC it;
    V3 d;
    V3 tp;
    V3 pos;
    V3 dir;
    V3 up;
    V3 side;
    f32 cosv;
    f32 thr;
    f32 best;
    f32 lim;
    Act *res;
    best = maxd;
    thr = lbl_80365F14;
    lim = minv;
    res = 0;
    fn_8023C720(&it, lbl_8035B308);
    cosv = fn_800EFDA4(lbl_80365F18);
    self->GetDir(&pos, &dir, &up, &side, 0);
    switch (mode) {
    case 0:
        break;
    case 1:
    case 2:
        lim = lbl_80365F20;
        break;
    case 3:
        if (ref) {
            V3 tp;
            ref->GetDir(&tp, 0, 0, 0, 0);
            thr = -Dot(&dir, &tp, &pos);
        }
        lim = lbl_80365F24;
        break;
    case 4:
        if (ref) {
            V3 tp;
            ref->GetDir(&tp, 0, 0, 0, 0);
            thr = Dot(&dir, &tp, &pos);
        }
        lim = lbl_80365F24;
        break;
    }
    for (fn_8023C528(&it, grp); it.node; fn_8023C3F4(&it)) {
        Node *n;
        s32 v;
        V3 d2;
        f32 len, az, ud, val;
        if (!IsType(Get(&it))) continue;
        grp = Get(&it);
        if (grp == ref) continue;
        if (!Alive(grp)) continue;
        if (!grp->node) continue;
        if (!fn_8022C558(grp)) continue;
        n = grp->node;
        v = (bool)(n->flags & 2) | (bool)(n->flags & 0x200);
        if (n->child) v |= (bool)(n->child->flags & 2) | (bool)(n->child->flags & 0x200);
        if (!v) continue;
        grp->GetDir(&tp, 0, 0, 0, 0);
        d.x = tp.x - self->pos.x;
        d.y = tp.y - self->pos.y;
        *(volatile f32 *)&d.z = tp.z - self->pos.z;
        d2.x = d.x;
        d2.y = d.y;
        *(volatile f32 *)&d2.z = d.z;
        len = SqV(d.x * d.x + d.y * d.y + d.z * d.z);
        az = __fabs(d.z);
        if (!(len < maxd)) continue;
        if (useDir) {
            s32 ok1, ok2;
            fn_80101820(&d2);
            ud = d2.x * up.x + d2.y * up.y + d2.z * up.z;
            switch (mode) {
            case 3:
                val = -Dot0(&dir, &d);
                break;
            case 4:
                val = dir.x * d.x + dir.y * d.y + dir.z * d.z;
                break;
            case 2:
                fn_80100F24(&d, &up);
                fn_80101820(&d);
                val = Ang(dir, d);
                break;
            case 1:
                fn_80100F24(&d, &up);
                fn_80101820(&d);
                val = -Ang(dir, d);
                break;
            case 0:
            default:
                fn_80100F24(&d, &up);
                fn_80101820(&d);
                val = d.x * dir.x + d.y * dir.y + d.z * dir.z;
                break;
            }
            ok1 = 1;
            if (self == lbl_8035B308->player && (f32)__fabs(ud) > cosv && az > lbl_80365F38) ok1 = 0;
            switch (mode) {
            case 3:
            case 4:
                if (val < thr) ok2 = 1;
                else ok2 = 0;
                break;
            case 0:
            case 1:
            case 2:
            default:
                ok2 = 1;
                break;
            }
            if (val > lim && ok1 && ok2 && fn_80237BB0(self, grp, 0, 0, 0)) {
                lim = val;
                res = grp;
                best = len;
            }
        } else {
            if (fn_80237BB0(self, grp, 0, 0, 0) && len < best) {
                res = grp;
                best = len;
            }
        }
    }
    self->target = res;
}

}
