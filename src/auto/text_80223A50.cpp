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

static void fn_802237E4(S802237E4 *p, f32 dt) {
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



extern f32 lbl_80365A70;
extern const char lbl_80365ADC[8];
extern const char lbl_80365AE4[8];
extern const char lbl_802A8268[];
extern void *lbl_8035B7BC;
static void dummy_pool(void (*f)(const char *)) { f("GmAcCamera"); f("AtEvSubscriber"); f("GmBaObject"); f("GmAcNode"); f("GmAcActor"); }
int strncmp(const char *a, const char *b, u32 n);
void fn_80263044(char *s);
void fn_8026B524(void *a);
void fn_8026B3B4(void *a);
void fn_8026B7CC(void *a, const char *s);
struct Q50 { u8 pad[0xc0]; char **fc0; char **fc4; u8 pc8[0xd8 - 0xc8]; s32 fd8; };
struct P50 { u8 pad[0x20c]; Q50 *q; u8 p210[0x280 - 0x210]; s32 f280; s32 f284; u8 p288[8]; f32 f290, f294; s32 f298, f29c, f2a0; u8 p2a4[0x2ec - 0x2a4]; f32 f2ec; u8 p2f0[0x300 - 0x2f0]; s32 f300; u8 p304[0x328 - 0x304]; s32 f328, f32c; };
static void fn_80223934(P50 *p) {
    p->f300 = 1;
    p->f2ec = lbl_80365A70;
    if (strncmp(p->q->fc4[p->q->fd8], "MPath", 5) == 0) fn_80263044(p->q->fc0[p->q->fd8]);
    p->f300 = 0;
    fn_8026B524(lbl_8035B7BC);
    fn_8026B3B4(lbl_8035B7BC);
    if (p->f328 != 0) {
        p->f328 = 0;
        if (p->f32c == 0) fn_8026B7CC(lbl_8035B7BC, "");
        p->f32c = 0;
    }
    p->f294 = lbl_80365A70;
    p->f290 = lbl_80365A70;
    p->f29c = 0;
    p->f2a0 = 0;
    p->f298 = 0;
    p->f284 = 0;
    if (strncmp(p->q->fc4[p->q->fd8], "MStation", 8) != 0) p->f280 = 1;
}

struct V3 { f32 x, y, z; };
struct OB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, int, int, int, int);
};
struct Fd { u8 pad[0xb]; u8 a; u8 pc[0x2c - 0xc]; u32 fl; };
struct Ctl { u8 pad[4]; s32 on; };
struct CS {
    u8 pad0[0x44];
    V3 org;
    u8 pad50[0x18c - 0x50];
    OB *o18c;
    u8 pad190[0x20c - 0x190];
    Q50 *q;
    u8 pad210[0x270 - 0x210];
    f32 f270, f274, f278;
    s32 i27c, i280, i284;
    u8 pad288[8];
    f32 f290, f294;
    s32 i298, i29c, i2a0;
    u8 pad2a4[4];
    s32 spr_on; f32 spr_tgt, spr_x, spr_v;
    u8 pad2b8[0x2ec - 0x2b8];
    f32 f2ec;
    Fd *fd;
    f32 f2f4;
    s32 i2f8;
    f32 f2fc;
    s32 i300;
    u8 pad304[0x314 - 0x304];
    s32 i314;
    f32 f318, f31c;
    s32 i320;
    void *o324;
};
extern s32 lbl_8035B2B0;
extern s32 lbl_8035B2B4;
extern s32 lbl_8035B2BC;
extern void *lbl_8035B5E4;
extern u32 lbl_80365A74;
extern f32 lbl_80365A78;
extern f32 lbl_80365A7C;
extern f32 lbl_80365B10;
extern char lbl_802A8228[];
extern char lbl_80365AE8[7];
extern char lbl_80365AF0[6];
extern char lbl_80365AF8[8];
extern char lbl_80365B00[7];
extern char lbl_80365B08[8];
void fn_80238618(CS *, f32);
Ctl *fn_800F8274(void *, const char *);
s32 fn_80253664(Ctl *, int);
void fn_80241DD0(Q50 *, const char *, int, int, int, int);
void fn_80222FE8(CS *, f32);
void fn_80101820(V3 *);
void fn_80225EC0(void *, CS *, V3 *);

#define OUT(c, n) (!((f32)fn_80253664(c, n) >= lbl_80365AC4 && (f32)fn_80253664(c, n) <= lbl_80365AC8))
static inline int busy(CS *p) { return p->i284 != 0 || p->f290 != lbl_80365A70; }

#pragma opt_propagation off
void fn_80223A50(CS *p, f32 dt) {
    if (p->i314 != 0) return;
    if (lbl_8035B2B0 == 0 && p->q->fd8 != 0) return;
    if (lbl_80365A70 == dt) {
        p->spr_v = lbl_80365A70;
        p->spr_x = lbl_80365A70;
    }
    if (p->f290 > lbl_80365A70 && p->f294 > lbl_80365A70) {
        p->f290 = p->f290 - dt;
        { f32 t = p->f290; if (t < lbl_80365A70) p->f290 = lbl_80365A70; }
        f32 r = lbl_80365A80 - p->f290 / p->f294;
        if (r > lbl_80365A80) r = lbl_80365A80;
        if (r < lbl_80365A70) r = lbl_80365A70;
        if ((f32)(p->i298 - p->i29c) > *(volatile f32 *)&lbl_80365A70) p->i2a0 = (s32)(r * (f32)p->i298);
        else { f32 q = *(volatile f32 *)&lbl_80365A80 - r; p->i2a0 = (s32)(q * (f32)p->i29c); }
    }
    if (p->fd) {
        int done = 0;
        f32 d = lbl_80365A7C * dt;
        d = d * p->f2fc;
        if (p->i2f8) {
            p->f2f4 += d;
            f32 t = p->f2f4;
            if (t >= lbl_80365A78) { p->f2f4 = lbl_80365A78; done = 1; }
        } else {
            p->f2f4 -= d;
            f32 t = p->f2f4;
            if (t <= lbl_80365A70) { p->f2f4 = lbl_80365A70; done = 1; }
        }
        Fd *f = p->fd;
        f->a = (u32)p->f2f4;
        f->fl = f->fl | lbl_80365A74;
        if (done) p->fd = 0;
    }
    p->f2ec -= dt;
    lbl_8035B2B0 = 0;
    if (p->i27c) {
        p->f278 -= dt;
        p->f270 = p->f274 * dt + p->f270;
        f32 t = p->f278;
        if (t < lbl_80365A70) {
            p->f278 = lbl_80365A70;
            p->f274 = lbl_80365A70;
            p->i27c = 0;
        }
    }
    fn_80238618(p, dt);
    Ctl *c = fn_800F8274(lbl_8035B5E4, "camera");
    if (c && c->on) {
        if (OUT(c, 0x42)) fn_80241DD0(p->q, "C_STITCH", 0, 0, 0, 0);
        if (OUT(c, 0x43)) fn_80241DD0(p->q, "C_ICO", 0, 0, 0, 0);
        if (OUT(c, 0x44)) fn_80241DD0(p->q, "C_HUNTER", 0, 0, 0, 0);
        if (OUT(c, 0x45)) fn_80241DD0(p->q, "C_RAYMAN", 0, 0, 0, 0);
        if (OUT(c, 0x46)) fn_80241DD0(p->q, "C_UNREAL", 0, 0, 0, 0);
    }
    static s32 s1 = 0;
    static s32 s2 = 0;
    c = fn_800F8274(lbl_8035B5E4, "general");
    Ctl *b = fn_800F8274(lbl_8035B5E4, "gdebug");
    if (b && b->on) {
        if (OUT(b, 0x4e)) s2 = 1;
        else if (s2 == 1) { s2 = 0; fn_80241DD0(p->q, "NEXTCAM", 0, 0, 0, 0); }
        if (OUT(b, 0x4f)) s1 = 1;
        else if (s1 == 1) { s1 = 0; fn_80241DD0(p->q, "C_HUNTER", 0, 0, 0, 0); }
    }
    if (c && c->on && OUT(c, 0x4c)) {
        if (busy(p) && lbl_80365A70 == p->f290 && p->f2ec <= lbl_80365A70) fn_80223934((P50 *)p);
    }
    if (p->i320) {
        f32 d = p->f31c - p->f318;
        if ((f32)__fabs(d) > lbl_80365A70) {
            f32 k = lbl_80365A80 - (f32)fn_800F049C(lbl_80365B10 * dt);
            p->f318 = k * d + p->f318;
        }
        p->i320 = 0;
    } else {
        f32 d = lbl_80365A70 - p->f318;
        if ((f32)__fabs(d) > lbl_80365A70) {
            f32 k = lbl_80365A80 - (f32)fn_800F049C(lbl_80365B10 * dt);
            p->f318 = k * d + p->f318;
        }
    }
    fn_80222FE8(p, dt);
    V3 v, d;
    p->o18c->s13(&v, 0, 0, 0, 0);
    d.x = v.x - p->org.x;
    d.y = v.y - p->org.y;
    d.z = v.z - p->org.z;
    fn_80101820(&d);
    f32 k = p->f318;
    d.x *= k; d.y *= k; d.z *= k;
    if (p->o324) fn_80225EC0(p->o324, p, &d);
    p->f31c = lbl_80365A70;
    {
        S802237E4 *q = (S802237E4 *)p;

    u8 *o;
    f32 d;
    f32 diff;
    f32 damp;
    f32 k;
    o = M2C_FIELD(lbl_8035B65C, u8 **, 40);
    q->cur = lbl_80365AC0 * M2C_FIELD(o, f32 *, 52);
    if (q->cur != q->dst) {
        q->timer -= dt;
        if (q->timer <= lbl_80365A70 && (d = q->cur - q->tgt) >= lbl_80365AC4 && d <= lbl_80365AC8) {
            q->timer = lbl_80365A70;
            q->cur = q->dst;
            q->tgt = q->dst;
        } else {
            if (q->timer > *(volatile f32 *)&lbl_80365A70) q->tgt = q->rate * dt + q->tgt;
            diff = q->tgt - q->cur;
            damp = q->damp;
            if ((f32)__fabs(diff) > lbl_80365A70) {
                k = lbl_80365A80 - (f32)fn_800F049C(-damp * dt);
                q->cur = k * diff + q->cur;
            }
        }
        fn_8012962C(o, lbl_80365ACC * q->cur, lbl_80365AD0, lbl_80365AD4, lbl_80365AD8);
    }
    }
}

} /* extern "C" */
