#include "common.h"

extern "C" {
}
#define F(o, off, t) (*(t *)((u8 *)(o) + (off)))
struct K8 { u32 a, b; };
struct V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void Say(char *, void *, int, int, int); };
struct Nd { u32 fl; u8 p4[0x88 - 4]; u32 x88; };
struct L0 { u8 p[0x10]; u32 n; };
struct Tb { L0 *l; u8 p4[8]; u8 *xc; };
extern "C" {
extern char lbl_80297908[];
extern char lbl_8035ED68[4], lbl_8035F2F0[4], lbl_8035F2F8[4], lbl_8035F300[4];
extern f32 lbl_8035F1C8;
extern u8 *lbl_8035B65C;
extern void *volatile lbl_8035A0A4;
int fn_800F6CD0(void *, void *);
void fn_800F6E88(void *, void *);
Tb *fn_8023F4A0(void *, char *, char *, char *, int);
u32 fn_8007239C(void *);
void fn_8007222C(void *, f32);
void fn_8007225C(void *, f32);
void fn_800746A4(void *, void *);
void fn_802494A4(void *, int);
void fn_8019B6B8(void *, Nd *);
void fn_8003C674(void *, void *, u32 **);
void __ct__9C80253F24Fiiii(void *, void *, int, int, int);
static inline u32 Last(u8 *o) { u32 n = fn_8007239C(F(o, 0x118, void *)) - 1; return ((u32 *)F(o, 0x20c, Tb *)->xc)[n]; }
static inline u32 FindK(u8 *o, Tb *t1, K8 *a, K8 *b) {
    u32 k = 0, i;
    for (i = 0; i < t1->l->n; i++) {
        k = i / *F(o, 0x280, u32 *);
        fn_800F6E88(b, t1->xc + i * 8);
        if (fn_800F6CD0(a, b)) i = t1->l->n;
    }
    return k;
}
void fn_8006F808(u8 *o) {
    char *s = lbl_80297908;
    void *cmd = F(o, 0xec, void *);
    F(o, 0xec, void *) = 0;
    if (fn_800F6CD0(cmd, lbl_8035ED68) == 0) {
        F(o, 0xe4, V *)->Say(s + 0x4cc, F(o, 0xe0, void *), 0, 0, 0);
        if (fn_800F6CD0(cmd, s + 0x4d8)) {
            V *me;
            int found;
            u32 i;
            F(o, 0x200, u32)--;
            found = -1;
            me = F(o, 0xe4, V *);
            for (i = 0; i < Last(o); i++) {
                if (F(o, 0x228, V **)[i] == me) {
                    found = i;
                    F(o, 0x228, V **)[i = Last(o)] = 0;
                }
            }
            {
                Nd *d = F(o, 0x224, Nd **)[found];
                if (d) {
                    d->fl &= ~0x800;
                    if (d->x88 == 0) fn_8019B6B8(*(void **)(lbl_8035B65C + 12), d);
                }
            }
            if (F(o, 0xe4, V *)) F(o, 0xe4, V *)->Say(s + 0x4e4, 0, 0, 0, 0);
            if (F(o, 0x200, u32) == 0) {
                if (F(o, 0x254, int)) fn_800746A4(F(o, 0xe0, void *), o + 0x244);
                fn_802494A4(o, 0);
            }
            F(o, 0x1f0, V *)->Say(lbl_8035F2F0, 0, 0, 0, 0);
            F(o, 0xe4, V *) = 0;
        } else if (fn_800F6CD0(cmd, s + 0x4f0)) {
            K8 a, d, c, b;
            u32 *r;
            Tb *t1, *t2;
            u32 k, i;
            int ok;
            u32 off;
            u32 j;
            fn_800F6E88(&a, (u8 *)F(o, 0xe4, V *) + 0x8c);
            t1 = fn_8023F4A0(o, lbl_8035ED68, lbl_8035ED68, s + 0x468, 1);
            t2 = fn_8023F4A0(o, lbl_8035ED68, lbl_8035ED68, s + 0x47c, 1);
            k = FindK(o, t1, &a, &b);
            ok = 1;
            j = k * *F(o, 0x280, u32 *);
            for (off = j * 8; j < (k + 1) * *F(o, 0x280, u32 *); off += 8, j++) {
                fn_800F6E88(&c, t1->xc + off);
                if (!fn_800F6CD0(&c, lbl_8035ED68)) {
                    *(u32 *volatile *)&r = 0;
                    fn_8003C674(lbl_8035A0A4, &c, &r);
                    if (!(*r & *F(o, 0x284, u32 *))) ok = 0;
                }
            }
            if (ok) {
                fn_800F6E88(&d, t2->xc + k * 8);
                __ct__9C80253F24Fiiii(lbl_8035B65C, &d, 0, 0, 0);
            }
        } else if (fn_800F6CD0(cmd, lbl_8035F2F8)) {
            fn_8007222C(F(o, 0x118, void *), (s32)*F(o, 0xec, f32 *));
            fn_8007225C(F(o, 0x118, void *), F(F(o, 0xe0, u8 *), 0x1a8, f32) * lbl_8035F1C8);
        } else if (fn_800F6CD0(cmd, lbl_8035F300)) {
            u8 *q = F(o, 0x118, u8 *);
            f32 cu, mx;
            mx = *(volatile f32 *)(q + 0x1a8);
            cu = *(volatile f32 *)(q + 0x1ac);
            if (cu < mx)
                fn_8007225C(q, F(F(o, 0xe0, u8 *), 0x1a8, f32) * *F(o, 0xec, f32 *));
            else
                F(o, 0xe4, V *) = 0;
        } else if (fn_800F6CD0(cmd, s + 0x4fc)) {
            *F(o, 0x1f8, s32 *) += (s32)*F(o, 0xec, f32 *);
        }
    }
    if (F(o, 0xe4, V *)) F(o, 0xe4, V *)->Say(s + 0x4e4, 0, 0, 0, 0);
}
}
