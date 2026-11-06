#include "common.h"
extern "C" {
#include "common.h"

#define V(n) virtual void n();
struct K8 { u32 a, b; };
class Cam { public: V(c0) V(c1) V(c2) V(c3) V(c4) V(c5) V(c6) V(c7) V(c8) V(c9) V(c10) V(c11) V(c12) V(c13) V(c14) V(c15) V(c16) V(c17) V(c18) V(c19)
    V(c20) V(c21) V(c22) virtual void v100(); virtual void v104(); V(c25) V(c26) V(c27) V(c28) V(c29) V(c30) V(c31) V(c32)
    virtual void play(char *, Cam *, int, s32 *, int);
    u8 pad[176]; u32 f180; };
class Lt { public: u8 p[128]; V(l0) V(l1) V(l2) V(l3) V(l4) V(l5) V(l6) V(l7) V(l8) V(l9) V(l10) V(l11) V(l12) V(l13) V(l14) V(l15) V(l16) V(l17) V(l18) V(l19)
    virtual void off(int); };
struct GG { u8 p[448]; Lt *f448; u8 p452[36]; Lt *f488; Lt *f492; };
struct St;
class O { public: u8 p0[96]; s32 f96; u8 p100[124]; Cam *f224; Cam *f228; u8 p232[4]; s32 *f236; u8 p240[40]; char *f280; s32 *f284; f32 *f288; f32 *f292; char *f296;
    f32 *f300; s32 *f304; u8 p308[16]; s32 f324; s32 f328; s32 f332; u8 p336[12]; s32 f348; s32 f352; u32 *f356; u32 f360; s32 f364; s32 f368; };
static u8 sPad[996] = {1};
static s32 tI[15] = {1};
static s32 tB[34] = {1};
static s32 tS[34] = {1};
const char *wG_strpool_80091A9C[] = { "MStation", "FRCFIELD", "UNBROKEN", "SENDDIST", "ANIMOVER", "SDORFREE", "ACTIVATE", "DEACTIV8" };
extern "C" {
extern void *lbl_8035A0A4;
extern void *volatile lbl_8035B65C;
extern GG *lbl_80359F2C;
extern f32 lbl_80360BF0;
extern char lbl_80360B70[8], lbl_80360BD8[8], lbl_80360BF4[8], lbl_80360BD0[8], lbl_80360BFC[8], lbl_80360C04[8], lbl_80360C0C[8], lbl_80360C14[8];
void fn_80241628(O *, int, int);
int fn_8003C778(void *, Cam *, u32 **);
int fn_8003CF0C(void *, char *);
int fn_800F6CD0(char *, char *);
s32 fn_8003CD00(void *, char *);
s32 fn_8003CE68(void *, char *);
void *fn_8022C3F4(Cam *);
void fn_8022C128(Cam *, s32, s32, s32, int, f32);
void fn_802494A4(O *, int);
void fn_8022AD0C(Cam *);
void fn_802490E0(O *, int, f32);
void fn_8022A7A8(Cam *);
St *fn_80242144(O *, int);
void fn_80242BC0(St *, char *, Cam *, int, void *, void *);
u32 fn_8003C930(void *);
void fn_80240B50(O *, char *, int);
void fn_8023F9C8(O *, int);
void __ct__9C80253F24Fiiii(void *, char *, Cam *, int, s32 *);
void fn_800F6E88(K8 *, char *);
}
inline void Ld(O *o, char *x) { if (x && !fn_800F6CD0(x, lbl_80360B70)) fn_80240B50(o, x, 0); }
extern "C" void fn_80091A9C(O *o, s32 idx) {
    s32 *q;
    s32 i;
    s32 t;
    f32 v2;
    volatile f32 v;
    volatile s32 a;
    K8 b2;
    K8 b;
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
        if (!fn_8003C778(lbl_8035A0A4, o->f224, &o->f356)) {
            u32 m = o->f360;
            if (*o->f284 <= 0) *o->f356 |= m;
            else *o->f356 &= ~m;
        }
        if (fn_8003CF0C(lbl_8035A0A4, o->f280)) *o->f356 |= o->f360;
        if (!fn_800F6CD0(o->f280, lbl_80360B70)) {
            o->f324 = fn_8003CD00(lbl_8035A0A4, o->f280);
            o->f328 = fn_8003CE68(lbl_8035A0A4, o->f280);
        } else {
            o->f324 = 0;
            o->f328 = 0;
        }
        o->f332 = o->f324 - o->f328;
        o->f224->f180 |= 4;
        if (fn_8022C3F4(o->f224)) fn_8022C128(o->f224, 0, 0, 0, 1, lbl_80360BF0);
        if (*o->f356 & o->f360) fn_802494A4(o, 3);
        else fn_802494A4(o, 1);
        break;
    case 1:
        o->f224->v100();
        fn_8022AD0C(o->f224);
        break;
    case 2:
        fn_802490E0(o, 0, *o->f288);
        fn_802490E0(o, 1, *o->f292);
        break;
    case 3:
        o->f224->v104();
        fn_8022A7A8(o->f224);
        fn_80242BC0(fn_80242144(o, 2), lbl_80360BD8, 0, 0, 0, 0);
        *o->f356 |= o->f360;
        break;
    case 4:
        return;
    case 5:
        if (o->f352) {
            if (o->f348 || fn_8003C930(lbl_8035A0A4) >= (u32)*o->f284)
                o->f228->play(lbl_80360BF4, o->f224, 0, o->f236, 0);
            else
                Ld(o, o->f296);
        }
        break;
    case 6: fn_802494A4(o, 2); break;
    case 7:
        fn_80242BC0(fn_80242144(o, 3), lbl_80360BD0, 0, 0, 0, 0);
        fn_80242BC0(fn_80242144(o, 0), lbl_80360BFC, o->f224, 0, 0, 0);
        fn_80242BC0(fn_80242144(o, 0), (char *)"ACTIVATE", o->f224, 0, 0, 0);
        fn_802494A4(o, 3);
        break;
    case 8:
        fn_8023F9C8(o, 0);
        fn_8023F9C8(o, 1);
        __ct__9C80253F24Fiiii(lbl_8035B65C, (char *)"SDORFOUT", o->f224, 0, 0);
        if (!o->f368) {
            s32 w;
            a = 0;
            v = *o->f300;
            __ct__9C80253F24Fiiii(lbl_8035B65C, (char *)"SDORFADE", o->f224, 0, (s32 *)&a);
            w = a ? *o->f304 : 0;
            fn_8022C128(o->f224, w, w, w, 0, v);
            if (o->f96 == 1) {
                if (a) fn_800F6E88(&b, lbl_80360C04);
                else fn_800F6E88(&b, lbl_80360C0C);
                fn_80242BC0(fn_80242144(o, 2), (char *)&b, 0, 0, o->f304, (f32 *)&v);
            }
        } else {
            o->f224->v104();
        }
        fn_80242BC0(fn_80242144(o, 2), lbl_80360C14, 0, 0, 0, 0);
        break;
    case 9: o->f348 = 1; break;
    case 10:
        o->f352 = 1;
        o->f224->v100();
        fn_8022AD0C(o->f224);
        fn_80242BC0(fn_80242144(o, 2), lbl_80360BD0, 0, 0, 0, 0);
        break;
    case 11:
        o->f352 = 0;
        o->f224->v104();
        fn_8022A7A8(o->f224);
        fn_80242BC0(fn_80242144(o, 2), lbl_80360BD8, 0, 0, 0, 0);
        break;
    case 12: o->f364 = 1; break;
    case 13: o->f364 = 0; break;
    case 14: if (o->f228 != o->f224) o->f368 = 0; break;
    case 15: if (o->f228 != o->f224) o->f368 = 1; break;
    case 16:
        if (o->f228 != o->f224) {
            s32 a = *o->f236;
            s32 w;
            v2 = *o->f300;
            w = a ? *o->f304 : 0;
            fn_8022C128(o->f224, w, w, w, 0, v2);
            if (o->f96 == 1) {
                                if (a) fn_800F6E88(&b2, lbl_80360C04);
                else fn_800F6E88(&b2, lbl_80360C0C);
                fn_80242BC0(fn_80242144(o, 2), (char *)&b2, 0, 0, o->f304, &v2);
            }
        }
        break;
    case 17: {
        if (lbl_80359F2C->f448) lbl_80359F2C->f448->off(0);
        if (lbl_80359F2C->f488) lbl_80359F2C->f488->off(0);
        if (lbl_80359F2C->f492) lbl_80359F2C->f492->off(0);
        break;
    }
    case 18: break;
    }
}
}
