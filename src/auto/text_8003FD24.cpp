#include "common.h"
extern "C" {
typedef struct { f32 x, y, z; } V3;
struct VO {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5();
    virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12();
    virtual void get(V3 *, V3 *, s32, s32, s32);
};
struct VB {
    u8 pad[104];
    virtual void v0(); virtual void v1(); virtual void v2();
};
struct VM {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5();
    virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17();
    virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29();
    virtual void p30(); virtual void p31(); virtual void p32();
    virtual void msg(char *, void *, s32, f32 *, s32);
};
extern u8 *lbl_8035B308;
extern f32 lbl_8035C300;
extern char lbl_8035C2F8[4];
extern char lbl_8035C304[7];
extern f32 lbl_8035C2FC;
extern const f64 lbl_8035C310, lbl_8035C318;
s32 fn_800F6CD0(void *, char *);
void fn_8024118C(void *, void *, s32);
s32 fn_80237BB0(void *, void *, s32, s32, s32);
void fn_80101820(V3 *);
void fn_802494A4(void *, s32);
void fn_80241628(void *, s32, s32);

static inline void chk(u8 *p, void *e) {
    if (e != 0 && fn_800F6CD0(e, lbl_8035C2F8) == 0) fn_8024118C(p, e, 0);
}
static inline f32 Sq(f32 x) {
    if (x > lbl_8035C2FC) {
        const f64 _half = lbl_8035C310;
        const f64 _three = lbl_8035C318;
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
static inline void react(u8 *p) {
    if (*(s32 *)(p + 96) != 2) fn_802494A4(p, 2);
    else fn_80241628(p, 1, 0);
}
static inline f32 bnd(u8 *o) {
    VB *b = *(VB **)(o + 156);
    if (*(u32 *)b & 4) b->v2();
    return *(f32 *)((u8 *)b + 36);
}

#define F(T, o) (*(T *)(p + (o)))
void fn_8003FD24(u8 *p, s32 flag) {
    if (flag != 0) {
        if (F(s32, 96) == 2) {
            f32 *pm = F(f32 *, 320);
            f32 sp = *(f32 *)(F(u8 *, 224) + 340);
            f32 mx = *pm;
            f32 r;
            if (mx <= lbl_8035C2FC || sp >= mx) r = lbl_8035C300;
            else if (sp < *F(f32 *, 316)) r = lbl_8035C2FC;
            else r = sp / mx;
            f32 dmg;
            *(volatile f32 *)&dmg = *F(f32 *, 312) * r;
            if (dmg > *(volatile f32 *)&lbl_8035C2FC) {
                VM *m = *(VM **)(lbl_8035B308 + 72);
                if (fn_80237BB0(F(void *, 224), m, 1, 0, 0) != 0) {
                    chk(p, F(void *, 288));
                    dmg = -dmg;
                    m->msg(lbl_8035C304, F(void *, 224), 0, &dmg, 0);
                }
            }
        }
    } else if (F(void *, 228) != F(void *, 336)) {
        V3 pa;
        V3 pb;
        V3 n;
        V3 m;
        f32 vax, vay, vaz, vbx, vby, vbz;
        f32 t;
        u8 *a;
        u8 *b;
        chk(p, F(void *, 292));
        a = F(u8 *, 224);
        b = F(u8 *, 228);
        vax = *(f32 *)(a + 280); vay = *(f32 *)(a + 284); vaz = *(f32 *)(a + 288);
        vbx = *(f32 *)(b + 280); vby = *(f32 *)(b + 284); vbz = *(f32 *)(b + 288);
        ((VO *)a)->get(&pa, 0, 0, 0, 0);
        F(VO *, 228)->get(&pb, 0, 0, 0, 0);
        n.x = pb.x - pa.x; n.y = pb.y - pa.y; n.z = pb.z - pa.z;
        fn_80101820(&n);
        {
            VB *ob;
            VB *oa;
            oa = *(VB **)(F(u8 *, 224) + 156);
            ob = *(VB **)(F(u8 *, 228) + 156);
            if (*(u32 *)oa & 4) oa->v2();
            t = *(f32 *)((u8 *)oa + 36);
            if (*(u32 *)ob & 4) ob->v2();
{ f32 k = t + *(f32 *)((u8 *)ob + 36); n.x *= k; n.y *= k; n.z *= k; }
        }
m.x = -n.x; m.y = -n.y; m.z = -n.z; t = n.x * vax + n.y * vay + n.z * vaz;
        fn_80101820(&n);
        n.x *= t; n.y *= t; n.z *= t;
        t = m.x * vbx + m.y * vby + m.z * vbz;
        fn_80101820(&m);
        m.x *= t; m.y *= t; m.z *= t;
        vax -= n.x; vay -= n.y; vaz -= n.z;
        vax += m.x; vay += m.y; vaz += m.z;
        react(p);
        {
            f32 l = Sq(vax * vax + vay * vay + vaz * vaz);
            a = F(u8 *, 224);
            *(f32 *)(a + 280) = vax; *(f32 *)(a + 284) = vay; *(f32 *)(a + 288) = vaz;
            *(f32 *)(a + 340) = l;
        }
        vbx += n.x; vby += n.y; vbz += n.z;
        vbx -= m.x; vby -= m.y; vbz -= m.z;
        {
            u8 *c;
            u8 *q = *(u8 **)(F(u8 *, 228) + 524);
            *(void **)(q + 336) = F(void *, 224);
            c = F(u8 *, 228);
            react(q);
            f32 l = Sq(vbx * vbx + vby * vby + vbz * vbz);
            *(f32 *)(c + 280) = vbx; *(f32 *)(c + 284) = vby; *(f32 *)(c + 288) = vbz;
            *(f32 *)(c + 340) = l;
        }
    }
}
}
