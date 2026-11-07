// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
/* QV=2.0p1 + -use_lmw_stmw on. NonMatching draft: structure matches, DIFF 289 / SDIFF 59 (regs + const-load scheduling). */
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct St { V3 pos, fwd, up, a, vel; };
struct Tri;
struct Cam {
    u8 pad0[0x14];
    St s0;
    St s1;
    u8 pad8c[0xb0 - 0x8c];
    s32 b0;
    s32 b4;
    V3 tb8;
    f32 c4, c8;
    u8 padcc[0xe8 - 0xcc];
    f32 e8, ec;
    u8 padf0[0xf4 - 0xf0];
    f32 f4, f8;
    u8 padfc[0x100 - 0xfc];
    f32 f100, f104;
    u8 pad108[0x10c - 0x108];
    f32 f10c, f110;
    u8 pad114[0x12c - 0x114];
    f32 t12c;
    f32 f130;
    f32 f134;
    f32 f138;
    f32 f13c;
    f32 f140;
};
struct Ray { V3 p; f32 r; V3 d; };

extern f32 lbl_80366E98;
extern f32 lbl_80366E9C;
extern f32 lbl_80366EA0;
extern f32 lbl_80366EA4;
extern f32 lbl_80366EA8;
extern f32 lbl_80366EAC;
extern f32 lbl_80366EB0;
extern f32 lbl_80366EB4;
extern f32 lbl_80366EB8;
extern f64 lbl_80366EC0;
extern f64 lbl_80366EC8;
extern f32 lbl_80366EF0;
extern f32 lbl_80366EF4;
extern f32 lbl_80366EF8;
extern f32 lbl_80366EFC;
extern f32 lbl_80366F00;
extern f32 lbl_80366F04;
extern f32 lbl_80366F08;
extern f32 lbl_80366F0C;
extern f32 lbl_80366F10;
extern f32 lbl_80366F14;

void fn_80100CF4(f32 *);
void fn_802610A0(Cam *);
void fn_8026102C(Cam *);
void fn_80101820(V3 *);
void fn_8010117C(V3 *, f32);
u32 fn_800EB1B4(void);
void fn_80270A18(Cam *);
void fn_80264AC0(s32 n, V3 *a, V3 *b, f32 *c, s32 *d, V3 *e, V3 *f, s32 *g, s32 *h, s32 *i, Tri **j, s32 k, s32 *l, s32 *m, s32 *n2, Tri **o, s32 q, s32 r);

static inline f32 sq(f32 x) {
    volatile f32 y;
    if (x > lbl_80366E9C) {
        f64 h = lbl_80366EC0;
        f64 t = lbl_80366EC8;
        f64 g = __frsqrte(x);
        g = h * g * (t - g * g * x);
        g = h * g * (t - g * g * x);
        g = h * g * (t - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
static inline u32 irand(u32 n) { u32 r = 0; if (n) r = fn_800EB1B4() % n; return r; }
static inline f32 randf(f32 r) {
    s32 n = (s32)(lbl_80366F08 * r);
    if (n < 0) return lbl_80366EF8 * (f32)-(s32)irand(-n);
    return lbl_80366EF8 * (f32)(s32)irand(n);
}
static inline void cp(V3 *d, V3 *s) { d->x = s->x; d->y = s->y; d->z = s->z; }

#pragma opt_loop_invariants off
void fn_80270CDC(Cam *c, f32 dt) {
    V3 start[6];
    V3 end[6];
    V3 e_[6];
    V3 f_[6];
    Tri *j_[6];
    s32 g_[6];
    s32 h_[6];
    s32 i_[6];
    s32 hit[6];
    V3 dir;
    f32 bb[4];
    f32 ang;
    s32 i, cnt, z, n, k, sel;
    s32 flag;
    s32 j;
    s32 *hp;

    fn_80100CF4(bb);
    fn_802610A0(c);
    if (c->b4 == 0) {
        cp(&c->tb8, &c->s0.pos);
        c->tb8.z += lbl_80366EF4;
        c->b4 = 1;
    }
    cp(&c->s1.pos, &c->s0.pos);
    cp(&c->s1.fwd, &c->s0.fwd);
    cp(&c->s1.up, &c->s0.up);
    cp(&c->s1.a, &c->s0.a);
    cp(&c->s1.vel, &c->s0.vel);
    *(volatile f32 *)&bb[0] = c->s0.pos.x;
    *(volatile f32 *)&bb[1] = c->s0.pos.y;
    *(volatile f32 *)&bb[2] = c->s0.pos.z;
    bb[3] = *(volatile f32 *)&lbl_80366E98;
    dir.x = c->s0.fwd.x;
    dir.y = c->s0.fwd.y;
    dir.z = c->s0.fwd.z;
    fn_80101820(&dir);
    dir.x *= lbl_80366E98;
    dir.y *= lbl_80366E98;
    dir.z *= lbl_80366E98;
    i = 0;
    cp(&start[i], &c->s0.pos);
    cp(&end[i], &c->s0.pos);
    end[i].z += dir.z;
    start[i].z += lbl_80366EF4;
    end[i].x += dir.x;
    end[i].y += dir.y;
    end[i].z += lbl_80366EF4;
    if (lbl_80366EF8 * (f32)(s32)(fn_800EB1B4() % 10000) != lbl_80366E9C) ang = lbl_80366EFC;
    else ang = lbl_80366F00;
    for (j = 1; j < 6; j++) {
        cp(&start[j], &c->s0.pos);
        start[j].z += lbl_80366EF4;
        if (j % 2 == 0) fn_8010117C(&dir, lbl_80366F04 * ang);
        else fn_8010117C(&dir, ang);
        end[j].x = c->s0.pos.x + dir.x;
        end[j].y = c->s0.pos.y + dir.y;
        end[j].z = c->s0.pos.z + dir.z;
        end[j].z += lbl_80366EF4;
        ang += lbl_80366EFC;
    }
    hp = hit;
    fn_80264AC0((6 - i < 6) ? 6 - i : 6, &start[i], &end[i], bb, hp, e_, f_, g_, h_, i_, j_, 0, 0, 0, 0, 0, 0, 1);
    cnt = 0;
    i = 0;
    while (i++ != 6) {
        if (hp[i] == 0) cnt++;
    }
    for (i = 0; i < 6 && cnt > 1; i++) {
        f32 dx = end[i].x - c->tb8.x;
        f32 dy = end[i].y - c->tb8.y;
        f32 dz = end[i].z - c->tb8.z;
        if (sq(dx * dx + dy * dy + dz * dz) > c->f13c) {
            hp[i] = 1;
            cnt--;
        }
    }
    if (hp[0] == 0) cnt = 0;
    sel = irand((s32)((f32)(cnt - 1) * randf(c->f140)));
    for (k = 0; k < 6; k++) {
        if (sel == 0 && hp[k] == 0) break;
        if (hp[k] == 0) sel--;
    }
    if (k != 0) {
        c->s1.fwd.x = end[k].x - start[k].x;
        c->s1.fwd.y = end[k].y - start[k].y;
        c->s1.fwd.z = end[k].z - start[k].z;
        fn_80101820(&c->s1.fwd);
        if (c->b0 == 0) fn_80270A18(c);
    } else {
        cp(&c->s1.fwd, &c->s0.fwd);
    }
    flag = 1;
    if (c->b0 != 0) {
        f32 dx = e_[0].x - start[0].x;
        f32 dy = e_[0].y - start[0].y;
        f32 dz = e_[0].z - start[0].z;
        f32 t, t2, w0, w1, w2, w3, inv;
        if (sq(dx * dx + dy * dy + dz * dz) < lbl_80366EA0 + c->f134) flag = 0;
        t = c->t12c;
        t2 = t * t;
        w0 = lbl_80366EB4 * t2 - lbl_80366EB4 * t;
        w1 = lbl_80366EB8 * t2 + lbl_80366EB4 * t;
        w2 = c->f10c * (lbl_80366EAC + (lbl_80366EB0 * t2 - lbl_80366EA4 * t));
        w3 = c->f110 * (lbl_80366EB0 * t2 - lbl_80366EA8 * t);
        inv = lbl_80366EF0 / c->f138;
        c->s1.fwd.x = w0 * c->c4 + w1 * c->e8 + w2 * c->f4 + w3 * c->f100;
        c->s1.fwd.y = w0 * c->c8 + w1 * c->ec + w2 * c->f8 + w3 * c->f104;
        c->s1.fwd.z = lbl_80366E9C;
        if (c->t12c < lbl_80366EA0) c->f134 = lbl_80366EAC - lbl_80366EA8 * c->t12c;
        else c->f134 = lbl_80366EA8 * c->t12c - lbl_80366EAC;
        c->f134 *= c->f130;
        c->t12c += inv;
        if (c->t12c >= lbl_80366EAC) c->b0 = 0;
    } else {
        cp(&c->s1.fwd, &c->s0.fwd);
        c->f134 = c->f130;
    }
    c->s1.vel.x = lbl_80366E9C;
    c->s1.vel.y = lbl_80366E9C;
    c->s1.vel.z = lbl_80366E9C;
    fn_80101820(&c->s1.fwd);
    {
        f32 sp = c->f134;
        c->s1.vel.x = c->s1.fwd.x * sp;
        c->s1.vel.y = c->s1.fwd.y * sp;
        c->s1.vel.z = c->s1.fwd.z * sp;
    }
    {
        bool r = false;
        if (c->s1.vel.x >= lbl_80366F0C && c->s1.vel.x <= lbl_80366F10 &&
            c->s1.vel.y >= lbl_80366F0C && c->s1.vel.y <= lbl_80366F10 &&
            c->s1.vel.z >= lbl_80366F0C && c->s1.vel.z <= lbl_80366F10) r = true;
        if (r) {
            c->s1.vel.x = c->s1.fwd.x * lbl_80366EF4;
            c->s1.vel.y = c->s1.fwd.y * lbl_80366EF4;
            c->s1.vel.z = c->s1.fwd.z * lbl_80366EF4;
        }
    }
    cp(&c->s1.pos, &c->s0.pos);
    if (flag == 0) {
        c->s1.vel.x *= lbl_80366F14;
        c->s1.vel.y *= lbl_80366F14;
        c->s1.vel.z *= lbl_80366F14;
    }
    c->s1.pos.x += dt * c->s1.vel.x;
    c->s1.pos.y += dt * c->s1.vel.y;
    c->s1.pos.z += dt * c->s1.vel.z;
    c->s1.a.x = c->s1.fwd.y * c->s1.up.z - c->s1.fwd.z * c->s1.up.y;
    c->s1.a.y = c->s1.fwd.z * c->s1.up.x - c->s1.fwd.x * c->s1.up.z;
    c->s1.a.z = c->s1.fwd.x * c->s1.up.y - c->s1.fwd.y * c->s1.up.x;
    {
        f32 xx = c->s1.a.x * c->s1.a.x;
        f32 yy = c->s1.a.y * c->s1.a.y;
        f32 zz = c->s1.a.z * c->s1.a.z;
        f32 len = sq(xx + yy + zz);
        if (lbl_80366E9C == len) {
            c->s1.a.x = lbl_80366EAC;
            c->s1.a.y = lbl_80366E9C;
            c->s1.a.z = lbl_80366E9C;
        } else {
            f32 inv = lbl_80366EAC / len;
            c->s1.a.x *= inv;
            c->s1.a.y *= inv;
            c->s1.a.z *= inv;
        }
    }
    fn_8026102C(c);
}

} /* extern "C" */
