// fn_800502FC: pickup/walker state step (cases 0..41 from TU tables tA/tB/tC, string pool via -str reuse,readonly).
#include "common.h"
extern "C" {
struct V3 { f32 x, y, z; };
struct VO {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void getPos(V3 *a, V3 *b, V3 *c, V3 *d, int e);
    virtual void setPos(V3 *a, V3 *b, V3 *c, V3 *d, int e);
    virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20();
    virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26();
    virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32();
    virtual void send(const char *msg, void *to, int a, void *d, int b);
};
struct Bn { u8 _0[0x10]; void *f10; u8 _14[0xc]; u32 f20; };
struct Md { u8 _0[0x30]; Bn *f30; };
struct Sk { u8 _0[0x78]; void *f78; };
struct Act : VO { u8 _4[0x9c - 4]; Sk *f9c; void *fa0; u8 _a4[0x118 - 0xa4]; f32 f118, f11c, f120; u8 _124[0x154 - 0x124]; f32 f154; };
struct Ob : VO { u8 _4[0x9c - 4]; Md *f9c; };
struct XC { u32 fl; u8 _4[0x18 - 4]; f32 f18, f1c, f20; u8 _24[0x68 - 0x24]; virtual void a0(); virtual void a1(); virtual void a2(); };
struct Rk { XC *f9c; };
struct Ob2 : VO { u8 _4[0x9c - 4]; XC *f9c; };
struct Cam { u8 _0[0xbc]; f32 fbc; };
struct CamH { u8 _0[4]; Cam *f4; };
struct P : VO {
    u8 _4[0x60 - 4];
    s32 f60;
    u8 _64[0xc0 - 0x64];
    CamH *fc0;
    u8 _c4[0xe0 - 0xc4];
    Act *fe0;
    Ob *fe4;
    u8 _e8[4];
    void *fec;
    void *ff0;
    u8 _f4[0x128 - 0xf4];
    f32 *f128;
    u8 _12c[0x1b0 - 0x12c];
    f32 f1b0;
    s32 f1b4;
    s32 f1b8;
    u8 _1bc[0x1c4 - 0x1bc];
    s32 f1c4;
    u8 _1c8[0x214 - 0x1c8];
    f32 *f214;
    u8 _218[0x228 - 0x218];
    s32 f228;
    f32 *f22c;
    s32 *f230;
    void *f234;
    s32 *f238;
    s32 *f23c;
    s32 *f240;
    f32 *f244;
    u8 _248[4];
    f32 *f24c;
    Ob2 *f250;
    void *f254;
    u8 _258[4];
    V3 f25c;
    f32 f268;
    Ob *f26c;
};
struct GL { u8 _0[0x48]; VO *f48; };
static u8 sPad[1556] = {1};
static s32 tA[27] = {1};
static s32 tB[85] = {1};
static s32 tC[85] = {1};
extern char lbl_80296378[];
extern GL *lbl_8035B308;
extern void *lbl_8035B65C;
extern Act *lbl_8035A244;
extern void *lbl_803286D0[];
extern u32 lbl_8035DC98;
extern f32 lbl_8035DC9C, lbl_8035DCA0, lbl_8035DCB0, lbl_8035DCE0, lbl_8035DCE4, lbl_8035DCE8;
extern f64 lbl_8035DCA8, lbl_8035DCB8;
extern char lbl_8035DC28[8], lbl_8035DC30[8], lbl_8035DCC0[8], lbl_8035DCC8[8], lbl_8035DCD0[8], lbl_8035DCD8[8],
    lbl_8035DCEC[8], lbl_8035DCF4[8], lbl_8035DCFC[8], lbl_8035DD04[8], lbl_8035DD0C[8], lbl_8035DD14[8];
extern int rand(void);
void __ct__9C80253F24Fiiii(void *, const char *, void *, int, s32);
void fn_80072AC8(VO *, V3 *);
int fn_800F6CD0(void *, const void *);
void fn_800A1AA8(P *);
void fn_800515C4(P *, int, int, f32);
void fn_80101820(V3 *);
void fn_80107F3C(void *, V3 *);
void fn_80190604(XC *, void *, const char *);
void fn_80190888(XC *, void *, const char *);
void fn_80190C98(Md *);
void fn_8023F5E8(P *, VO *);
void fn_8023F9C8(P *, int);
void fn_80240274(P *, int);
void fn_802402E0(P *);
void fn_80240948(P *, const char *, int);
void fn_80240DEC(P *, s32, int, int);
void fn_802413D8(P *, void *, f32, int, int, void *);
void fn_80241588(P *, int, int, f32);
int fn_80241628(P *, int, int);
void fn_80241DD0(P *, const char *, int, int, int, int);
P *fn_80242144(P *, int);
void fn_80242BC0(P *, const char *, Ob *, int, void *, int);
void fn_80257A4C(Cam *, void *);
void fn_802490E0(P *, int, f32);
void fn_802494A4(P *, int);

const char *wKV_strpool_800502FC[] = {"MStation", "HITREACT", "PlrShot2", "PlrShot3", "PlrShot4", "PlrShot5", "PlrShot6", "NodePool", "FADEOVER", "TRPDEATH", "ATTARGET", "ANIMOVER", "STRT_COL", "SHRIVRET", "SHRVPNTR", "PICKEDUP", "UNNEARG0", "SHCOLECT", "PATHOVER"};

static inline f32 Sq(f32 x) {
    if (x > lbl_8035DCA0) {
        const f64 _half = lbl_8035DCA8;
        const f64 _three = lbl_8035DCB8;
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
static inline f32 SqV(f32 x) {
    if (x > *(volatile f32 *)&lbl_8035DCA0) {
        const f64 _half = lbl_8035DCA8;
        const f64 _three = lbl_8035DCB8;
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
static inline void ScaleV(V3 *v, f32 k) { *(volatile f32 *)&v->x = v->x * k; *(volatile f32 *)&v->y = v->y * k; *(volatile f32 *)&v->z = v->z * k; }
static inline f32 crand() {
    s32 ri = (u32)rand() % 10000;
    f32 r = lbl_8035DCE8 * (f32)ri;
    r = lbl_8035DCA8 - r;
    return r;
}
static inline void Scale(V3 *v, f32 k) { f32 x = v->x, y = v->y, z = v->z; v->x = x * k; v->y = y * k; v->z = z * k; }
static inline void setVel(P *p, f32 x, f32 y, f32 z, f32 s) {
    x *= s;
    y *= s;
    z *= s;
    f32 l = Sq(x * x + y * y + z * z);
    Act *a = p->fe0;
    a->f118 = x;
    a->f11c = y;
    a->f120 = z;
    a->f154 = l;
}
static inline void vset(V3 *v, f32 x, f32 y, f32 z) { v->x = x; v->y = y; v->z = z; }
#define ENABLE(p) \
    if (*p->f230 != 0 && p->f26c == 0) { \
        __ct__9C80253F24Fiiii(lbl_8035B65C, "PKUPTYPE", p->fe0, 0, 0); \
        if (p->f26c != 0) { \
            p->f26c->send(lbl_8035DCC0, 0, 0, 0, 0); \
            fn_80190888((XC *)p->f26c->f9c, p->fe0->fa0, lbl_8035DCC8); \
            V3 v; \
            Md *m; \
            Bn *b; \
            v.x = lbl_8035DCA0; \
            v.y = lbl_8035DCA0; \
            v.z = lbl_8035DCA0; \
            m = p->f26c->f9c; \
            b = m->f30; \
            if (b != 0) { \
                ((void (*)(void *, V3 *))lbl_803286D0[3])(b->f10, &v); \
                b->f20 |= lbl_8035DC98; \
                fn_80190C98(m); \
            } \
        } \
    }
static inline void pickup(P *p) {
    if (p->f26c != 0) {
        fn_80190604((XC *)p->f26c->f9c, p->fe0->fa0, lbl_8035DCC8);
        p->f26c->send("FORCPKUP", 0, 0, 0, 0);
        fn_80242BC0(fn_80242144(p, 0), lbl_8035DCD0, p->f26c, 0, p->f234, 0);
    }
    __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035DCD8, 0, 0, p->f228);
}
static inline void idle(P *p) {
    if (lbl_8035DCA0 == p->f1b0 && lbl_8035DCA0 == *p->f128) {
        fn_80241588(p, (u32)rand() % 3 + 1, 0, lbl_8035DC9C);
    } else {
        fn_80241588(p, 0, 0, lbl_8035DC9C);
    }
}

void fn_800502FC(P *p, int idx) {
    s32 i;
    s32 t = p->f60;
    i = tA[idx];
    while (t > 0) {
        if (tB[i] > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        fn_802402E0(p);
        fn_8023F5E8(p, 0);
        p->w18();
        break;
    case 1: {
        fn_80241588(p, 0, 0, lbl_8035DC9C);
        p->f250 = (Ob2 *)p->fe4;
        p->f254 = p->fec;
        Cam *c = p->fc0->f4;
        fn_80257A4C(c, p->f254);
        c->fbc = *p->f214;
        f32 x = lbl_8035DCA0;
        f32 s = *p->f214 * lbl_8035DCA8;
        f32 y = lbl_8035DCA0 * s;
        f32 z = lbl_8035DCB0 * s;
        x *= s;
        f32 l = Sq(x * x + y * y + z * z);
        Act *a = p->fe0;
        a->f118 = x;
        a->f11c = y;
        a->f120 = z;
        a->f154 = l;
        fn_80241628(p, 1, 0);
        lbl_8035A244 = p->fe0;
        ENABLE(p);
        fn_80240DEC(p, *p->f238, 8, 10);
        break;
    }
    case 2: {
        fn_80241628(p, 2, 0);
        fn_80240DEC(p, *p->f23c, 2, 4);
        V3 v;
        v.x = lbl_8035DCB0;
        v.y = lbl_8035DCB0;
        v.z = lbl_8035DCB0;
        void *q = p->fe0->f9c->f78;
        if (q != 0) fn_80107F3C(q, &v);
        idle(p);
        fn_8023F5E8(p, lbl_8035B308->f48);
        p->f1c4 = 1;
        fn_800A1AA8(p);
        break;
    }
    case 3:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 5, 0, lbl_8035DC9C);
        p->f1c4 = 1;
        break;
    case 4:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 6, 0, lbl_8035DC9C);
        p->f1c4 = 0;
        fn_80240DEC(p, *p->f240, 5, 7);
        break;
    case 5:
        fn_80241628(p, 2, 0);
        fn_800515C4(p, 1, 0, lbl_8035DCA0);
        break;
    case 6:
        fn_80241628(p, 0, 0);
        p->fc0->f4->fbc = p->f1b0;
        fn_802402E0(p);
        if (p->f250 != 0) p->f250->send(lbl_8035DC28, p->fe0, 0, p->f254, 0);
        pickup(p);
        break;
    case 7: {
        fn_80241628(p, 1, 0);
        fn_8023F5E8(p, 0);
        fn_80241588(p, 0, 0, lbl_8035DC9C);
        XC *x = p->f250->f9c;
        if (x->fl & 4) x->a2();
        p->f25c.x = x->f18;
        p->f25c.y = x->f1c;
        p->f25c.z = x->f20;
        p->f25c.z -= *p->f22c;
        Cam *c = p->fc0->f4;
        fn_80257A4C(c, &p->f25c);
        c->fbc = *p->f214;
        fn_802490E0(p, 1, *p->f24c);
        break;
    }
    case 8:
        fn_80241628(p, 3, 0);
        fn_80241588(p, 2, 0, lbl_8035DC9C);
        break;
    case 9: {
        V3 d;
        V3 c;
        V3 b;
        V3 f;
        V3 a;
        V3 e;
        fn_80241628(p, 1, 0);
        fn_80241588(p, 0, 0, lbl_8035DC9C);
        fn_8023F9C8(p, 1);
        fn_8023F9C8(p, 2);
        p->fe4->getPos(&a, &b, &c, &d, 0);
        p->fe0->setPos(&a, &b, &c, &d, 0);
        lbl_8035B308->f48->getPos(&e, 0, 0, 0, 0);
        f.x = a.x - e.x;
        f.y = a.y - e.y;
        f.z = a.z - e.z;
        fn_80101820(&f);
        f.x *= lbl_8035DCE0;
        f.y *= lbl_8035DCE0;
        f.z *= lbl_8035DCE0;
        f.x += e.x;
        f.y += e.y;
        f.z += e.z;
        Cam *cm = p->fc0->f4;
        fn_80257A4C(cm, &f);
        cm->fbc = lbl_8035DCE4;
        break;
    }
    case 10:
        ENABLE(p);
        pickup(p);
        fn_802402E0(p);
        break;
    case 11: {
        V3 u;
        V3 w;
        V3 v;
        fn_80241628(p, 1, 0);
        fn_80241588(p, 0, 0, lbl_8035DC9C);
        vset(&v, crand(), crand(), crand());
        fn_80101820(&v);
        f32 k = *p->f244;
        *(volatile f32 *)&v.x = v.x * k;
        *(volatile f32 *)&v.y = v.y * k;
        *(volatile f32 *)&v.z = v.z * k;
        fn_80072AC8((*(GL *volatile *)&lbl_8035B308)->f48, &w);
        w.z -= *p->f22c;
        u.x = w.x + v.x;
        u.y = w.y + v.y;
        u.z = w.z + v.z;
        p->fe0->setPos(&u, 0, 0, 0, 0);
        fn_800515C4(p, 1, 1, lbl_8035DCA0);
        break;
    }
    case 12:
        fn_80240274(p, 0);
        p->f1b8 = 1;
        if (fn_800F6CD0(p->fec, "TRPDEATH")) {
            fn_802494A4(p, 9);
        } else if (fn_800F6CD0(p->fec, lbl_8035DC30)) {
            fn_802494A4(p, 11);
        } else if (fn_800F6CD0(p->fec, "CERTCHET")) {
            fn_80241DD0(p, "SHCOLECT", 0, 0, 0, 0);
        } else {
            V3 v;
            p->fe0->getPos(&v, 0, 0, 0, 0);
            v.z -= *p->f22c;
            p->fe0->setPos(&v, 0, 0, 0, 0);
            fn_802494A4(p, 1);
        }
        break;
    case 13:
        return;
    case 14: {
        V3 v;
        p->fe0->getPos(0, &v, 0, 0, 0);
        fn_80101820(&v);
        ScaleV(&v, p->f1b0);
        f32 l = SqV(v.x * v.x + v.y * v.y + v.z * v.z);
        Act *a = p->fe0;
        a->f118 = v.x;
        a->f11c = v.y;
        a->f120 = v.z;
        a->f154 = l;
        fn_802494A4(p, 2);
        break;
    }
    case 15:
        fn_80241628(p, 2, 0);
        fn_800A1AA8(p);
        break;
    case 16:
        fn_80241628(p, 0, 0);
        fn_802402E0(p);
        p->f250->send("RETURNED", 0, 0, 0, 0);
        if (p->f26c != 0) p->f26c->send(lbl_8035DCEC, 0, 0, 0, 0);
        fn_802494A4(p, 0);
        break;
    case 17:
        p->fc0->f4->fbc = p->f1b0;
        fn_802402E0(p);
        break;
    case 18:
        fn_802402E0(p);
        break;
    case 19:
        idle(p);
        break;
    case 20: fn_802494A4(p, 2); break;
    case 21: fn_802494A4(p, 3); break;
    case 22: fn_802494A4(p, 7); break;
    case 23:
        if (fn_800F6CD0(p->fec, p->f234)) p->f26c = p->fe4;
        break;
    case 24:
        p->fe4->send(lbl_8035DCF4, p->fe0, 0, 0, 0);
        break;
    case 25: fn_802494A4(p, 4); break;
    case 26: fn_802494A4(p, 5); break;
    case 27: fn_802494A4(p, 6); break;
    case 28: p->f1b4 = 1; break;
    case 29: p->f1b4 = 0; break;
    case 30: fn_802494A4(p, 10); break;
    case 31:
        if (lbl_8035A244 == p->fe0) lbl_8035A244 = 0;
        break;
    case 32: p->f1c4 = 0; break;
    case 33:
        fn_80241628(p, 0, 0);
        fn_802402E0(p);
        break;
    case 34:
        fn_802494A4(p, 8);
        fn_802402E0(p);
        break;
    case 35:
        fn_802494A4(p, 8);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DCFC, 0);
        break;
    case 36:
        fn_802494A4(p, 8);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DD04, 0);
        break;
    case 37:
        fn_802494A4(p, 8);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DD0C, 0);
        break;
    case 38:
        fn_802494A4(p, 8);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DD14, 0);
        break;
    case 39:
        if (p->ff0 != 0) fn_802413D8(p, p->ff0, lbl_8035DC9C, 0, 1, p->fec);
        break;
    case 40:
        fn_80241DD0(p, "ATTARGET", 0, 0, 0, 0);
        break;
    case 41:
        break;
    }
}
}
