#include "common.h"

struct V3 { f32 x, y, z; };
struct T7 { V3 p; f32 q[4]; };
struct K8 { u32 a, b; };
#define V(n) virtual void n();
struct Nd { u8 p[16]; void *f16; u8 p20[12]; u32 f32; };
struct Hd { u8 p[48]; Nd *f48; };
class O { public: V(o0) V(o1) V(o2) V(o3) V(o4) V(o5) V(o6) V(o7) V(o8) V(o9) V(o10) V(o11) V(o12) V(o13) V(o14) V(o15) V(o16) V(o17) V(o18) V(o19) };
struct FT { u8 p[12]; void (*f12)(void *, V3 *); u8 p16[288]; void (*f304)(void *, V3 *); };
struct GB { u8 p[8]; u8 *f8; };
#define F(o, off, t) (*(t *)((u8 *)(o) + (off)))
extern "C" {
extern char lbl_80298060[];
extern u32 lbl_8035A238;
extern volatile u32 lbl_8035A264;
extern f32 lbl_8035F3EC, lbl_8035F45C, lbl_8035F490;
extern u32 lbl_8035F3E8, lbl_8035F3F0;
extern void *lbl_80359F2C;
extern void *volatile lbl_8035B65C;
extern void *lbl_8035B684;
extern GB *lbl_8035B460;
extern char lbl_8035F3F4[8], lbl_8035F5D4[8];
extern FT lbl_803286D0;
void fn_8022BF30(O *, int, int, f32);
void fn_8022BE28(O *, int);
void fn_8002B42C(void *, int);
void fn_8022F700(O *);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);
void fn_8002FD10(void *, K8 *);
void fn_800F6E88(K8 *, void *);
int fn_800F6CD0(K8 *, void *);
void *fn_800F9398(u8 *, void *);
void fn_80241DD0(void *, char *, int, int, K8 *, int);
void fn_80107244(Nd *, V3 *);
void fn_801075B8(Nd *, f32 *);
void fn_80190C98(Hd *);
}
extern "C" void fn_80078308(O *o) {
    char *s = lbl_80298060;
    V3 v;
    f32 tq[4];
    V3 tp;
    K8 b;
    K8 n;
    lbl_8035A238 = 0;
    F(o, 1376, u32) = 0;
    F(o, 1360, f32) = lbl_8035F3EC;
    fn_8022BF30(o, 255, 1, lbl_8035F3EC);
    fn_8022BE28(o, 0);
    F(o, 552, u32) |= 1;
    fn_8002B42C(lbl_80359F2C, 1);
    if (F(o, 1064, u32 *)) *F(o, 1064, u32 *) |= lbl_8035F3E8;
    if (F(o, 1080, u32 *)) *F(o, 1080, u32 *) |= lbl_8035F3E8;
    F(o, 1752, u32) = 1;
    F(o, 1644, f32) = F(o, 1648, f32) = lbl_8035F45C;
    fn_8022F700(o);
    if (*F(o, 1348, s32 *) <= 0) *F(o, 1348, s32 *) = 1;
    F(o, 428, f32) = *F(o, 1348, s32 *);
    F(o, 424, f32) = *F(o, 1352, s32 *);
    __ct__9C80253F24Fiiii(lbl_8035B65C, s + 1016, 0, 0, 0);
    fn_8002FD10(lbl_8035B684, &n);
    fn_800F6E88(&b, lbl_8035F3F4);
    if (!fn_800F6CD0(&n, lbl_8035F3F4) && fn_800F9398(lbl_8035B460->f8 + 144, &n)) fn_800F6E88(&b, &n);
    else if (fn_800F9398(lbl_8035B460->f8 + 144, lbl_8035F5D4)) fn_800F6E88(&b, lbl_8035F5D4);
    if (!fn_800F6CD0(&b, lbl_8035F3F4)) fn_80241DD0(F(o, 524, void *), s + 372, 0, 0, &b, 0);
    F(o, 1456, Hd *) = 0;
    if (F(o, 1456, Hd *)) {
        Hd *h = F(o, 1456, Hd *);
        f32 z = lbl_8035F3EC;
        tp.x = z; tp.y = z; tp.z = z; tq[0] = z; tq[1] = z; tq[2] = z; tq[3] = z;
        if (h->f48) fn_80107244(h->f48, &tp);
        else { tp.x = z; tp.y = z; tp.z = z; }
        if (F(o, 1456, Hd *)->f48) fn_801075B8(F(o, 1456, Hd *)->f48, tq);
        F(o, 1460, f32) = tp.x; F(o, 1464, f32) = tp.y; F(o, 1468, f32) = tp.z;
        F(o, 1472, f32) = tq[0]; F(o, 1476, f32) = tq[1]; F(o, 1480, f32) = tq[2]; F(o, 1484, f32) = tq[3];
    }
    F(o, 824, u32) = 0;
    o->o19();
    o->o17();
    lbl_8035A264 = 0;
    __ct__9C80253F24Fiiii(lbl_8035B65C, s + 1028, 0, 0, 0);
    F(o, 1676, u32) = 1;
    if (F(o, 1824, Hd *) && F(o, 1816, Hd *)) {
        Nd *y = F(o, 1824, Hd *)->f48;
        if (y) lbl_803286D0.f304(y->f16, &v);
        else { v.x = lbl_8035F3EC; v.y = lbl_8035F3EC; v.z = lbl_8035F3EC; }
        {
            Hd *z = F(o, 1816, Hd *);
            Nd *w = z->f48;
            if (w) {
                lbl_803286D0.f12(w->f16, &v);
                w->f32 |= lbl_8035F3F0;
                fn_80190C98(z);
            }
        }
    }
    F(o, 1268, u32) = 0;
    F(o, 1272, f32) = lbl_8035F490;
}
