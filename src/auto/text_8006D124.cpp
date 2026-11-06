#include "common.h"

extern "C" {

struct V3 { f32 x; f32 y; f32 z; };
struct HB { u32 f0; u8 pad4[0x18 - 4]; f32 f18; f32 f1c; f32 f20; u8 pad24[0x30 - 0x24]; void *f30; u8 pad34[0x68 - 0x34]; };
struct H : HB {
    virtual void v0(); virtual void v1(); virtual void Update(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void Tick(f32);
};
struct G {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void GetPos(V3 *, V3 *, V3 *, V3 *, s32);
    virtual void SetPos(V3 *, V3 *, V3 *, V3 *, s32);
    u8 pad4[0x9c - 4]; H *f9c; u8 padA0[0x118 - 0xa0]; V3 v118; u8 pad124[0x154 - 0x124]; f32 f154;
};
struct E {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void Say(char *, s32, s32, char *, s32);
    u8 pad4[0x40c - 4]; char f40c[8]; char f414[8];
};
struct G1 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void GetPos(s32, V3 *, V3 *, V3 *, s32);
};
struct S { u8 pad[0x10]; f32 f10; u8 pad14[4]; f32 f18; u8 pad1c[0x2c - 0x1c]; void Set(f32 a, f32 b) { f10 = a; f18 = b; } };
struct P {
    u8 pad[0xd8]; s32 fd8; u8 paddc[4]; G *fe0; u8 pade4[0x118 - 0xe4]; void *f118;
    u8 pad11c[0x178 - 0x11c]; char f178[8]; G *f180; s32 f184; u8 pad188[0x1a8 - 0x188]; s32 f1a8; V3 v1ac;
    u8 pad1b8[0x1f0 - 0x1b8]; G1 *f1f0; u8 pad1f4[0x1fc - 0x1f4]; s32 f1fc; u8 pad200[0x22c - 0x200]; H *f22c; s32 f230;
    u8 pad234[0x258 - 0x234]; s32 f258; s32 f25c; u8 pad260[4]; f32 *f264; s32 f268; f32 f26c; f32 f270; s32 f274;
    s32 f278; char *f27c; u8 pad280[0x288 - 0x280]; V3 v288; s32 f294;
};
s32 fn_800724A4(void *);
void fn_800711D0(P *, s32, f32);
void fn_8007112C(P *, f32);
void fn_8007115C(P *);
void fn_8006BB24(P *, f32);
void fn_80072AC8(void *, V3 *);
void fn_801078CC(void *, V3 *, V3 *, V3 *, V3 *, s32);
void fn_80190C98(H *);
void fn_8006C748(P *, f32, s32);
s32 fn_8003C674(void *, char *, u32 **);
E *fn_802288FC(void *, s32);
void fn_800F6E88(char *, char *);
void fn_802490E0(P *, s32, f32);
void fn_8023F864(P *, s32);
s32 fn_800F6CD0(char *, char *);
f32 fn_80101664(V3 *);
void fn_80101820(V3 *);
void fn_800713AC(P *, f32);
double fn_800F049C(double);
f32 fn_8023D494(S *, f32, f32);
void fn_80076D44(G *);
void fn_80076C6C(G *);
void *__ct__9C8023D65CFv(void *);
void __dt__9C8023D65CFv(void *, s32);
void __register_global_object(void *, void *, void *);
extern void *volatile lbl_8035A0A4;
extern void *lbl_8035B308;
extern char lbl_80297D28[];
extern char lbl_8035F1E8[8], lbl_8035F1F0[8], lbl_8035F1F8[8], lbl_8035F264[8], lbl_8035F0E4[4], lbl_8035F26C[8];
extern u8 lbl_80306798[];
extern volatile f32 lbl_8035A210, lbl_8035A218;
extern volatile f32 lbl_8035A27C, lbl_8035A280;
extern s32 lbl_8035A220;
extern volatile s8 lbl_8035A214, lbl_8035A21C, lbl_8035A21D, lbl_8035A21E, lbl_8035A224;
extern volatile f32 lbl_8035F0C0;
extern f32 lbl_8035F0C8, lbl_8035F1C8, lbl_8035F240, lbl_8035F260, lbl_8035F274, lbl_8035F278, lbl_8035F27C;
extern f32 lbl_8035F280, lbl_8035F284, lbl_8035F288;
extern f64 lbl_8035F250;
extern f64 lbl_8035F258;

inline f32 Sqrt6D(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_8035F250 * g * (lbl_8035F258 - g * g * x);
    g = lbl_8035F250 * g * (lbl_8035F258 - g * g * x);
    g = lbl_8035F250 * g * (lbl_8035F258 - g * g * x);
    y = x * g;
    return y;
}

inline f32 Dot6D(V3 *v) {
    f32 m = v->y * v->y;
    m = __fmadds(v->x, v->x, m);
    m = __fmadds(v->z, v->z, m);
    return m;
}

inline f32 Len6D(f32 m) {
    return m > lbl_8035F0C0 ? Sqrt6D(m) : m;
}

void fn_8006D124(P *p, f32 dt) {
    V3 xd0, xc4, xb8, xac, xa0, x94, x88, x7c;
    V3 g70, g64, g58, g4c;
    V3 d, c, b;
    V3 a;
    u8 *base = lbl_80306798;
    if (fn_800724A4(p->f118) && !p->fd8) {
        f32 s;
        f32 m = Dot6D(&p->fe0->v118);
        if (Len6D(m) < lbl_8035F260)
            s = Len6D(m) / lbl_8035F260;
        else
            s = lbl_8035F1C8;
        if (p->f294 == 0) {
            p->f294 = 1;
            fn_800711D0(p, 7, s);
        } else {
            fn_8007112C(p, s);
        }
    } else if (p->f294 == 1) {
        p->f294 = 0;
        fn_8007115C(p);
    }
    if (p->f230) fn_8006BB24(p, dt);
    if (p->f22c->f0 & 0x800) {
        fn_80072AC8(p->f118, &a);
        p->f1f0->GetPos(0, &b, &c, &d, 0);
        {
            H *h = p->f22c;
            if (h->f30) {
                fn_801078CC(h->f30, &b, &c, &d, &a, 0);
                fn_80190C98(h);
            }
        }
        p->f22c->Tick(dt);
    }
    if (p->f1a8) fn_8006C748(p, dt, 0);
    if (p->f274) {
        if (p->f268 > 0) {
            p->f270 += dt;
            while (p->f270 >= p->f26c && p->f268 > 0) {
                u32 *r;
                E *o;
                p->f270 -= p->f26c;
                *(u32 *volatile *)&r = 0;
                if (!fn_8003C674(lbl_8035A0A4, lbl_80297D28, &r)) *r = 0;
                (*r)++;
                p->f268--;
                o = fn_802288FC(lbl_8035B308, p->f278);
                if (o) {
                    char buf[8];
                    fn_800F6E88(o->f414, lbl_8035F1E8);
                    fn_800F6E88(o->f40c, p->f27c);
                    fn_800F6E88(buf, lbl_8035F1F0);
                    o->Say(lbl_8035F1F8, 0, 0, buf, 0);
                }
            }
            if (p->f268 == 0) {
                fn_802490E0(p, 0, *p->f264);
                fn_8023F864(p, 6);
                fn_8023F864(p, 7);
                fn_8023F864(p, 8);
                fn_8023F864(p, 9);
            }
        }
        p->fe0->SetPos(&p->v288, 0, 0, 0, 0);
        {
            G *e = p->fe0;
            e->v118.x = p->v1ac.x;
            e->v118.y = p->v1ac.y;
            e->v118.z = p->v1ac.z;
            e->f154 = lbl_8035F0C0;
        }
    }
    if (p->f184 && (fn_800F6CD0(p->f178, lbl_8035F264) || fn_800F6CD0(p->f178, lbl_8035F0E4) || fn_800F6CD0(p->f178, lbl_8035F26C))) {
        G *o = p->f180;
        if (o) {
            H *h;
            f32 k;
            o->GetPos(&xd0, &xb8, &xc4, 0, 0);
            h = p->f180->f9c;
            if (h->f0 & 4) h->Update();
            xd0.x = h->f18;
            xd0.y = h->f1c;
            xd0.z = h->f20;
            p->fe0->GetPos(&xac, &x94, &x88, &x7c, 0);
            k = lbl_8035F0C8;
            if (fn_800F6CD0(p->f178, lbl_8035F0E4)) {
                k = lbl_8035F274;
            } else if (fn_800F6CD0(p->f178, lbl_8035F264)) {
                f32 t = lbl_8035F278 * dt;
                xac.x = __fmadds(t, xc4.x, xac.x);
                xac.y = __fmadds(t, xc4.y, xac.y);
                xac.z = __fmadds(t, lbl_8035F0C0, xac.z);
                k = lbl_8035F240;
            } else if (fn_800F6CD0(p->f178, lbl_8035F26C)) {
                k = lbl_8035F240;
            }
            {
                f32 len;
                xa0.x = xd0.x - xac.x;
                xa0.y = xd0.y - xac.y;
                xa0.z = xd0.z - xac.z;
                xa0.z = lbl_8035F0C0;
                len = fn_80101664(&xa0);
                if (len < lbl_8035F27C) {
                    f32 s = lbl_8035F240 * (len - k);
                    xac.x = __fmadds(s, xa0.x, xac.x);
                    xac.y = __fmadds(s, xa0.y, xac.y);
                    xac.z = __fmadds(s, xa0.z, xac.z);
                    x94 = xa0;
                    x7c.x = __fmsubs(xa0.y, x88.z, xa0.z * x88.y);
                    x7c.y = __fmsubs(xa0.z, x88.x, xa0.x * x88.z);
                    x7c.z = __fmsubs(xa0.x, x88.y, xa0.y * x88.x);
                    fn_80101820(&x7c);
                    p->fe0->SetPos(&xac, &x94, &x88, &x7c, 0);
                }
            }
        }
    }
    fn_800713AC(p, dt);
    if (p->f1fc) {
        f32 diff;
        f32 bb;
        if (!lbl_8035A214) { lbl_8035A210 = lbl_8035F0C0; lbl_8035A214 = 1; }
        if (!lbl_8035A21C) { lbl_8035A218 = lbl_8035F0C0; lbl_8035A21C = 1; }
        if (!lbl_8035A21D) {
            __register_global_object(__ct__9C8023D65CFv(base + 0x3c), (void *)__dt__9C8023D65CFv, base + 0x30);
            lbl_8035A21D = 1;
        }
        if (!lbl_8035A21E) {
            __register_global_object(__ct__9C8023D65CFv(base + 0x74), (void *)__dt__9C8023D65CFv, base + 0x68);
            lbl_8035A21E = 1;
        }
        if (!lbl_8035A224) { lbl_8035A220 = 1; lbl_8035A224 = 1; }
        if (lbl_8035A220) {
            S *s1 = (S *)(base + 0x3c);
            S *s2 = (S *)(base + 0x74);
            s1->Set(lbl_8035F280, lbl_8035F284);
            s2->Set(lbl_8035F280, lbl_8035F284);
            lbl_8035A220 = 0;
        }
        diff = lbl_8035A280 - lbl_8035A210;
        if ((f32)__fabs(diff) > lbl_8035F0C0)
            lbl_8035A210 = __fmadds(lbl_8035F1C8 - (f32)fn_800F049C(lbl_8035F288 * dt), diff, lbl_8035A210);
        diff = lbl_8035A27C - lbl_8035A218;
        if ((f32)__fabs(diff) > lbl_8035F0C0)
            lbl_8035A218 = __fmadds(lbl_8035F1C8 - (f32)fn_800F049C(lbl_8035F288 * dt), diff, lbl_8035A218);
        diff = fn_8023D494((S *)(base + 0x3c), dt, lbl_8035A218);
        bb = fn_8023D494((S *)(base + 0x74), dt, lbl_8035A210);
        p->fe0->GetPos(&g70, &g64, &g58, &g4c, 0);
        {
            f32 t = lbl_8035F27C * -bb;
            g70.x = __fmadds(t, g58.x, g70.x);
            g70.y = __fmadds(t, g58.y, g70.y);
            g70.z = __fmadds(t, g58.z, g70.z);
        }
        {
            f32 t = *(volatile f32 *)&lbl_8035F278 * diff;
            g70.x = __fmadds(t, g4c.x, g70.x);
            g70.y = __fmadds(t, g4c.y, g70.y);
            g70.z = __fmadds(t, g4c.z, g70.z);
        }
        p->fe0->SetPos(&g70, &g64, &g58, &g4c, 0);
    }
    {
        s32 a258 = p->f258;
        if (a258 && !p->f25c) fn_80076D44(p->fe0);
        else if (p->f25c && !a258) fn_80076C6C(p->fe0);
    }
}

}
