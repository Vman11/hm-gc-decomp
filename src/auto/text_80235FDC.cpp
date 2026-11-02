// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct X35 {
    u32 fl; u8 pad[100];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual ~X35();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
};
struct E35 { X35 *obj; u32 f4; f32 f8; u32 fc; u32 f10; f32 f14; f32 f18; f32 f1c; };
struct V35 { u8 pad[16]; virtual void v0(); virtual void v1(); };
struct M35 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(void *);
};
struct F35 { u8 b; u8 pad[7]; };
struct K35 { s8 s[8]; };
struct Info35 { u32 w[32]; };
struct Tbl35 { u8 pad[4]; u16 type; };
struct C8023C7CC { u8 b[0x1c]; C8023C7CC(); };
struct C801883E0 { u8 b[0xcc]; C801883E0(); };
struct S35 {
    s32 f0;
    u32 f4[10];
    F35 f44[10];
    u32 f124;
    E35 ***f128;
    C8023C7CC *f132;
    void *f136;
    V35 *f140;
};
extern "C" {
extern u8 *lbl_8035B460;
extern u8 *lbl_8035B65C;
extern void *lbl_8035B398;
extern void *lbl_8035B308;
extern Info35 lbl_802A89C8;
extern f32 lbl_80365ED8, lbl_80365EDC;
void fn_800E1E88(void *, void (*)(void *, s32));
void __dla__FPv(void *);
void __dl__FPv(void *);
void fn_8023C754(void *);
void __dt__9C8023C7CCFv(void *, s32);
void __dt__9C8013ECE4Fv(void *, s32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8023C720(C8023C7CC *, void *);
u32 fn_800FADA8(void *);
void fn_800FB064(void *, K35 *);
void fn_800F6E88(F35 *, K35 *);
u32 fn_800FB33C(void *);
Tbl35 *fn_800F9398(void *, K35 *);
Tbl35 *fn_800F9788(void *, K35 *, K35 *);
void fn_800F6F68(Info35 *, K35 *);
void *fn_8019556C(Tbl35 *);
void fn_80188144(X35 *, u8 *, void *, int);
void fn_8019B7E8(void *, X35 *);
u32 *fn_801955D8(Tbl35 *);
void fn_800FAEA0(void *);
void fn_80235BBC(S35 *);

static inline u8 *Res() { return *(u8 **)(lbl_8035B460 + 8); }
static inline void *Mg() { return *(void **)(lbl_8035B65C + 12); }
static inline void Clear(S35 *p) {
    u32 i;
    u32 j;
    u32 k;
    if (p->f136) {
        fn_800E1E88(p->f136, __dt__9C8013ECE4Fv);
    }
    if (p->f140) {
        p->f140->v1();
        (*(M35 **)(*(u8 **)(lbl_8035B460 + 12) + 11332))->v10(p->f140);
    }
    if (p->f128) {
        for (i = 0; i < p->f124; i++) {
            if (p->f128[i]) {
                for (j = 0; j < p->f4[i]; j++) {
                    if (p->f128[i][j]) {
                        p->f128[i][j]->obj->v10();
                        delete p->f128[i][j]->obj;
                        __dl__FPv(p->f128[i][j]);
                    }
                }
                __dla__FPv(p->f128[i]);
            }
        }
        __dla__FPv(p->f128);
    }
    if (p->f132) {
        fn_8023C754(p->f132);
        __dt__9C8023C7CCFv(p->f132, 1);
    }
    p->f0 = 0;
    p->f124 = 0;
    p->f128 = 0;
    for (k = 0; k < 10; k++) {
        p->f4[k] = 0;
        p->f44[k].b = 0;
    }
    p->f132 = 0;
    p->f136 = 0;
    p->f140 = 0;
}

static inline Tbl35 *Find(u8 *r, K35 *k1, K35 *k2) {
    Tbl35 *m;
    if (k2 == 0 || k2->s[0] == 0) {
        m = fn_800F9398(r + 0x90, k1);
    } else {
        m = fn_800F9788(r + 0xa8, k2, k1);
    }
    return m;
}
void fn_80235FDC(S35 *p, void *src) {
    Info35 info;
    K35 k1;
    K35 k2;
    u8 *r;
    void *mgr;
    u32 i;
    u32 j;
    Tbl35 *m;
    if (p->f0 != 0) Clear(p);
    p->f0 = 1;
    if (lbl_8035B398 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B398);
    p->f132 = new C8023C7CC;
    fn_800F7E98();
    if (p->f132 == 0) fn_800604C4(-4, 0, 0, 0);
    fn_8023C720(p->f132, lbl_8035B308);
    r = Res();
    mgr = Mg();
    p->f124 = fn_800FADA8(src);
    if (lbl_8035B398 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B398);
    p->f128 = new E35 **[p->f124];
    fn_800F7E98();
    if (p->f128 == 0) fn_800604C4(-4, 0, 0, 0);
    for (i = 0; i < p->f124; i++) {
        fn_800FB064(src, &k1);
        fn_800FB064(src, &k2);
        fn_800F6E88(&p->f44[i], &k1);
        p->f4[i] = fn_800FB33C(src);
        m = Find(r, &k1, &k2);
        if (m == 0) {
            p->f128[i] = 0;
            info = lbl_802A89C8;
            fn_800F6F68(&info, &k1);
            p->f4[i] = 0;
        } else {
            if (lbl_8035B398 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B398);
            p->f128[i] = new E35 *[p->f4[i]];
            fn_800F7E98();
            if (p->f128[i] == 0) fn_800604C4(-4, 0, 0, 0);
            for (j = 0; j < p->f4[i]; j++) {
                if (lbl_8035B398 == 0) fn_800604C4(-2, 0, 0, 0);
                fn_800F7EC0(lbl_8035B398);
                p->f128[i][j] = new E35;
                fn_800F7E98();
                if (p->f128[i][j] == 0) fn_800604C4(-4, 0, 0, 0);
                if (m->type == 3) {
                    if (lbl_8035B398 == 0) fn_800604C4(-2, 0, 0, 0);
                    fn_800F7EC0(lbl_8035B398);
                    p->f128[i][j]->obj = (X35 *)new C801883E0;
                    fn_800F7E98();
                    if (p->f128[i][j]->obj == 0) fn_800604C4(-4, 0, 0, 0);
                    fn_80188144(p->f128[i][j]->obj, r, fn_8019556C(m), 0);
                }
                fn_8019B7E8(mgr, p->f128[i][j]->obj);
                p->f128[i][j]->f4 = 0;
                p->f128[i][j]->f8 = lbl_80365ED8;
                p->f128[i][j]->obj->fl &= ~0x800;
                p->f128[i][j]->fc = 0;
                p->f128[i][j]->f10 = 0;
                p->f128[i][j]->f14 = lbl_80365EDC;
                p->f128[i][j]->f18 = lbl_80365EDC;
                p->f128[i][j]->f1c = lbl_80365ED8;
            }
            *fn_801955D8(m) &= ~0x800;
        }
    }
    fn_800FAEA0(src);
    fn_80235BBC(p);
}

} /* extern "C" */
