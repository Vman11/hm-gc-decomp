// NonMatching draft (wMU: volatile p0=a+f stores + volatile 0.05 read, SDIFF 18->12)
#include "common.h"

struct K8 { u32 a, b; };
struct V3 { f32 x, y, z; };
struct R0 { s32 f0; };
struct H2 { u8 pad[72]; u32 f72; };
class P2 { public:
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5();
    virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(V3 *, V3 *, V3 *, V3 *, int); virtual void p15(); virtual void p16(); virtual void p17();
    virtual void p18(); virtual void p19(); virtual void p20();
    u8 pad[136]; u8 f140[16]; H2 *f156; };
class O { public:
    virtual void o0(); virtual void o1(); virtual void o2(); virtual void o3(); virtual void o4(); virtual void o5();
    virtual void o6(); virtual void o7(); virtual void o8(); virtual void o9(); virtual void o10(); virtual void o11(f32);
    u8 pad[92]; s32 f96; u8 pad100[124]; P2 *f224; u8 pad228[52]; s32 f280; };
struct G4 { u8 pad[16]; void *f16; };
struct G { u8 pad[12]; void *f12; u8 pad16[24]; G4 *f40; };
struct FT { u8 pad[304]; void (*f304)(void *, V3 *); u8 pad308[16]; void (*f324)(void *, V3 *); void (*f328)(void *, V3 *); void (*f332)(void *, V3 *); };

static u8 sPad[676] = {1};
static s32 tI[6] = {1};
static s32 tB[6] = {1};
static s32 tS[8] = {1};
extern "C" {

extern void *lbl_8035A0A4;
extern G *lbl_8035B65C;
extern char lbl_80362228[8];
extern f32 lbl_80362230;
extern f32 lbl_80362234;
extern f32 lbl_80362238;
extern FT lbl_803286D0;
void fn_80241628(void *, s32, s32);
void fn_800F6E88(K8 *, u8 *);
int fn_8003C674(void *, K8 *, R0 **);
void fn_8019B7E8(void *, H2 *);
void __ct__9C80253F24Fiiii(G *, char *, int, int, int);
void fn_802491DC(O *, int);
void fn_80101820(V3 *);

void fn_800AA770(O *o, s32 idx) {
    s32 *q;
    s32 i;
    s32 t;
    i = tI[idx];
    t = o->f96;
    q = &tB[i];
    while (t > 0) {
        if (*q > t) break;
        t -= tB[i++];
        q++;
    }
    switch (tS[i]) {
    case 0:
        fn_80241628(o, 0, 0);
        o->f224->p20();
        o->f280 = 0;
        break;
    case 1:
        return;
    case 2: {
        K8 k;
        R0 *r;
        fn_800F6E88(&k, o->f224->f140);
        if (fn_8003C674(lbl_8035A0A4, &k, &r) && r && r->f0) {
            o->f224->p19();
            { H2 *h = o->f224->f156; if (!h->f72) fn_8019B7E8(lbl_8035B65C->f12, h); }
            __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80362228, 0, 0, 0);
            o->f280 = 1;
            fn_802491DC(o, 0);
            o->o11(lbl_80362230);
        }
        break;
    }
    case 3:
        o->f224->p20();
        o->f280 = 0;
        break;
    case 4:
        if (o->f280) {
            V3 p3, p2, p1, p0, r, u, f, a;
            f32 s, m;
            lbl_803286D0.f304(lbl_8035B65C->f40->f16, &a);
            lbl_803286D0.f332(lbl_8035B65C->f40->f16, &f);
            lbl_803286D0.f324(lbl_8035B65C->f40->f16, &r);
            lbl_803286D0.f328(lbl_8035B65C->f40->f16, &u);
            u.x = -u.x; u.y = -u.y; u.z = -u.z;
            fn_80101820(&f);
            { f32 fx = *(volatile f32 *)&f.x; s = *(volatile f32 *)&lbl_80362234; *(volatile f32 *)&f.x = fx * s; }
            *(volatile f32 *)&f.y = f.y * s; *(volatile f32 *)&f.z = f.z * s;
            *(volatile f32 *)&p0.x = a.x + f.x; *(volatile f32 *)&p0.y = a.y + f.y; *(volatile f32 *)&p0.z = a.z + f.z;
            m = *(volatile f32 *)&lbl_80362238; p0.x = m * u.x + p0.x; p0.y = m * u.y + p0.y; p0.z = m * u.z + p0.z;
            *(volatile f32 *)&p1.x = -f.x; *(volatile f32 *)&p1.y = -f.y; *(volatile f32 *)&p1.z = -f.z;
            fn_80101820(&p1);
            p2 = u;
            fn_80101820(&p2);
            p3.x = -r.x; p3.y = -r.y; p3.z = -r.z;
            fn_80101820(&p3);
            o->f224->p14(&p0, &p1, &p2, &p3, 0);
        }
        break;
    case 5: {
        K8 k;
        R0 *r;
        fn_800F6E88(&k, o->f224->f140);
        if (fn_8003C674(lbl_8035A0A4, &k, &r) && r && r->f0)
            __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80362228, 0, 0, 0);
        break;
    }
    case 6:
        break;
    }
}
}
