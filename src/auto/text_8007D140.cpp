#include "common.h"
extern "C" {
#pragma opt_common_subs off
struct B { u32 a, b; };
struct V3 { f32 x, y, z; };
struct L0 { u8 pad[16]; u32 n; };
struct L { L0 *f0; u8 pad4[8]; u8 *f12; };
struct U { u8 pad[12]; u32 n; };
struct Y { u8 pad[0x30]; void *f30; };
struct X { u8 pad[0x9c]; Y *f9c; };
struct S { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
 virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(const char *, X *, int, void *, void *);
 u8 pad[0x408]; B f40c; B f414; };
struct T { u8 pad[0xe0]; X *fe0; u8 pade4[0x11c - 0xe4]; int f11c; u8 pad120[4]; B *f124; void *f128; u8 pad12c[0x140 - 0x12c];
    L *f140; L *f144; L *f148; u8 pad14c[0x178 - 0x14c]; int f178; u8 pad17c[0x188 - 0x17c]; u32 f188; int f18c; u32 *f190; u32 f194; };
extern void *lbl_8035B308;
extern f32 lbl_8035F910;
extern char lbl_8035F940[4], lbl_8035F94C[6], lbl_8035F954[6], lbl_8035F95C[6];
S *fn_802288FC(void *, int);
void fn_80107244(void *, V3 *);
U *fn_80240004(T *, int);
int fn_8024548C(void *, int, int, int, B *, int, int);
void *fn_80245F8C(void *, int);
void fn_800F6E88(B *, const void *);
int fn_800F6CD0(const void *, const void *);
void fn_80240B50(T *, B *, int);
typedef void (*VF)(S *, const char *, X *, int, void *, void *);
static inline int chk(T *t, L *l, int u, int idx) {
    B n;
    B tt;
    u32 i;
    if (!fn_8024548C(fn_80240004(t, u), idx, -1, 1, &n, 0, 0)) fn_800F6E88(&n, t->f128);
    for (i = 0; i < l->f0->n; i++) {
        fn_800F6E88(&tt, l->f12 + i * 8);
        if (fn_800F6CD0(&n, &tt)) return 1;
    }
    return 0;
}
void fn_8007D140(T *t, int a, int b) {
    void *r;
    S *s;
    V3 v;
    int u;
    u32 n;
    int found;
    u32 i;
    s = fn_802288FC(lbl_8035B308, t->f11c);
    Y *y = t->fe0->f9c;
    if (y->f30) fn_80107244(y->f30, &v);
    else { v.x = lbl_8035F910; v.y = lbl_8035F910; v.z = lbl_8035F910; }
    u = a ? b + 1 : 0;
    n = a ? fn_80240004(t, u)->n : t->f188;
    found = 0;
    for (i = 0; i < n; i++) {
        int c;
        c = 1;
        if (!a) c = (!(*t->f190 & (t->f194 & (1 << i))) || (!chk(t, t->f140, 0, i) && !chk(t, t->f144, 0, i)))
                 && !(chk(t, t->f144, 0, i) && t->f178);
        if (c) {
            B nm, tmp, tmp2;
            int k;
            if (a) { if (!chk(t, t->f140, u, i)) chk(t, t->f144, u, i); }
            if (!a) { if (chk(t, t->f140, 0, i)) t->f18c++; }
            k = fn_8024548C(fn_80240004(t, u), i, -1, 1, &nm, 0, 0);
            fn_800F6E88(&tmp, k > 0 ? (void *)&nm : t->f128);
            fn_800F6E88(&s->f40c, &tmp);
            if (!a && (chk(t, t->f144, 0, i) || chk(t, t->f148, 0, i))) fn_800F6E88(&tmp2, lbl_8035F94C);
            else fn_800F6E88(&tmp2, lbl_8035F954);
            fn_800F6E88(&s->f414, &tmp2);
            r = fn_80245F8C(fn_80240004(t, u), i);
            k = a ? 0 : chk(t, t->f140, u, i);
            s->v33(lbl_8035F95C, a ? 0 : t->fe0, 0, a ? 0 : r, k ? (void *)&v : r);
            if (chk(t, t->f140, u, i)) found = 1;
        }
    }
    if (found) {
        B *p = t->f124;
        if (!fn_800F6CD0(p, lbl_8035F940)) fn_80240B50(t, p, 0);
    }
}
}
