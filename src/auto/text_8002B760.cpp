#include "common.h"

extern "C" {

#define V4(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3();
struct VA { u8 pad[8]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5();
    virtual void set(s32 *v, s32 a, s32 b); };
struct VB { V4(a) V4(b) V4(c) V4(d) V4(e) V4(f) V4(g) V4(h) virtual void i0();
    virtual void play(char *s, s32 a, s32 b, s32 c, s32 d); };
struct VO { u8 pad[0x80]; V4(a) V4(b) V4(c) V4(d) V4(e) virtual void Show(s32); };
struct VN { u8 pad[8]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void *name(s32); };
struct VR { u8 pad[0xc]; void *fc; void *f10; };
struct E { u8 pad[0x9c]; u32 f9c; };
struct S { u8 pad[0x68]; u32 f68; u32 f6c; void *f70; };
struct F { u8 pad[4]; f32 f4; f32 f8; u8 pad2[4]; u8 *f10; };
struct M { u8 pad[0xb0]; F *fb0; };
struct T { u8 pad[0x28]; void *f28; };
struct SL { u8 pad[0x28]; s32 *f28; };
struct C800FB754 { u8 d[20]; };
struct G { u8 pad[0x14]; f32 dt; };
struct W { u8 pad[0x18c]; E *f18c; u8 pad2[0x20c - 0x190]; u32 f20c; u8 pad3[0x240 - 0x210]; s32 f240;
    u8 pad4[0x540 - 0x244]; s32 *f540; u8 pad5[0x560 - 0x544]; s32 f560; };

void fn_8026820C(void *, s32);
void fn_80268178(void *, s32);
s32 fn_8003CC3C(void *);
s32 fn_8003CDA4(void *);
s32 fn_8003C930(void *);
VR *fn_802288FC(void *, char *);
VN **fn_8010FEDC(void *, void *, char *, s32);
void fn_800F6E88(void *, void *);
void __ct__9C80253F24Fiiii(void *, char *, s32, s32, s32);
void fn_80180600(void *, f32);
void fn_8002BDD4(u8 *, f32);
void fn_80236CB0(E *, s32);
void fn_80039EA4(void *, f32);
void fn_8002C150(u8 *);
s32 fn_801CCA8C(void *, u32 *, void *, u32);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
void __ct__9C800FB754Fv(C800FB754 *);
void fn_800FB700(C800FB754 *, char *, s32);
void fn_800E8F6C(char *, char *, ...);
void fn_800FA5D8(C800FB754 *, char *);
void fn_80109DD4(void *, C800FB754 *);
void fn_800FB6D8(C800FB754 *);
void fn_8002C5A4(u8 *, f32);
void fn_8002CA0C(u8 *, f32);

extern void *lbl_8035A0A4;
extern u8 *lbl_8035B65C;
extern void *lbl_8035B79C;
extern void *lbl_8035B308;
extern void *lbl_8035A02C;
extern G *lbl_8035B488;
extern char lbl_8035B9A4[8];
extern char lbl_8035B9AC[6];
extern char lbl_8035B9B4[8];
extern char lbl_8035B9BC[8];
extern char lbl_80294430[];
extern char lbl_80294440[];
extern f32 lbl_8035B99C, lbl_8035B9C4, lbl_8035B9C8, lbl_8035B960;

#define PA(o) (*(VA **)(p + (o)))
#define PO(o) (*(VO **)(p + (o)))
#define PF(o) (*(f32 *)(p + (o)))
#define PW (*(W **)(p + 0x2e8))
#define PE (*(E **)(p + 8))

static inline s32 Diff(void *g) {
    s32 a = fn_8003CC3C(g);
    return a - fn_8003CDA4(g);
}

static inline void *Find(u8 *q, char *n, void *a) {
    if (n == 0 || *n == 0) return fn_800F9398(q + 0x90, a);
    return fn_800F9788(q + 0xa8, n, a);
}

void fn_8002B760(u8 *p, s32 arg) {
    char sbuf[20];
    C800FB754 str;
    char tbuf[12];
    char nbuf[8];
    s32 v;
    T *tl;
    u32 ti;
    SL *sl;
    u32 si;
    f32 dt;
    if (PA(0x240)) {
        v = Diff(lbl_8035A0A4);
        PA(0x240)->set(&v, 0, 1);
        if (v == 0 && *(s32 *)(p + 0x248) != 0 && *(s32 *)(lbl_8035B65C + 0xb80) == 0) {
            fn_8026820C(lbl_8035B79C, 5);
            fn_80268178(lbl_8035B79C, 4);
            (*(VB **)(p + 0x2e8))->play(lbl_8035B9A4, 0, 0, 0, 0);
            PO(0x1c4)->Show(1);
            VR *r = fn_802288FC(lbl_8035B308, lbl_8035B9AC);
            void *b = r->f10;
            void *a = r->fc;
            if (b) {
                VN **n = fn_8010FEDC(a, b, lbl_80294430, 0);
                if (n) {
                    fn_800F6E88(nbuf, (*n)->name(0));
                    if (nbuf[0]) __ct__9C80253F24Fiiii(lbl_8035B65C, nbuf, 0, 0, 0);
                }
            }
        }
        *(s32 *)(p + 0x248) = v;
    }
    if (PA(0x23c)) {
        v = fn_8003C930(lbl_8035A0A4);
        PA(0x23c)->set(&v, 0, 1);
    }
    dt = lbl_8035B488->dt;
    if (PF(0x2f4) > lbl_8035B99C) {
        PF(0x2f4) -= dt;
        if (PF(0x2f4) <= lbl_8035B99C) {
            PO(0x1f0)->Show(0);
            PO(0x1f4)->Show(0);
            PF(0x2f4) = lbl_8035B99C;
        }
    }
    fn_80180600(*(void **)(p + 0xb4), dt);
    if (PF(0x260) <= *(f32 *)(*(u8 **)(p + 0x238) + 0xc)) PF(0x260) += dt;
    fn_8002BDD4(p, dt);
    if (PW->f560 == 1) {
        if (PE && PE->f9c) {
            fn_80236CB0(PE, 0);
            PE = 0;
        }
    } else {
        E *e = PW->f18c;
        if (PE != e) {
            if (PE && PE->f9c) fn_80236CB0(PE, 0);
            if (e && e->f9c) fn_80236CB0(e, 1);
            PE = e;
        }
    }
    fn_80039EA4(lbl_8035A02C, lbl_8035B488->dt);
    if (arg && PW->f240 == 0) {
        fn_8002C150(p);
        ti = 0;
        PF(0x268) -= dt;
        S *s = *(S **)(p + 0x1bc);
        fn_801CCA8C(s->f70, &ti, &tl, s->f68);
        void *tx = tl->f28;
        u32 w = PW->f20c;
        M *m = (M *)Find(*(u8 **)(p + 0xac), lbl_8035B9B4, lbl_80294440);
        if (m) {
            if (PF(0x268) < 0.0f) PF(0x268) = 0.0f;
            __ct__9C800FB754Fv(&str);
            fn_800FB700(&str, sbuf, 10);
            F *f = m->fb0;
            f32 t = ((f32)(s32)*(u16 *)(f->f10 + 0x34) - f->f4) / f->f8;
            fn_800E8F6C(tbuf, lbl_8035B9BC, (s32)(lbl_8035B9C4 * t), (s32)t % 60);
            fn_800FA5D8(&str, tbuf);
            if (w) fn_80109DD4(tx, &str);
            else fn_80109DD4(tx, &str);
            fn_800FB6D8(&str);
        }
        fn_8002C5A4(p, dt);
    }
    fn_8002CA0C(p, dt);
    si = 0;
    s32 sc = *PW->f540;
    S *s2 = *(S **)(p + 0x1b4);
    fn_801CCA8C(s2->f70, &si, &sl, s2->f68);
    sl->f28[3] = sc;
    if (*(s32 *)(*(u8 **)(p + 0x244) + 0xc) == 2) {
        if (PF(0x280) > lbl_8035B99C) {
            PF(0x280) -= dt;
            VO *o = PO(0x1b4);
            if (*(u32 *)((u8 *)o + 0x6c) & 1) {
                if (o) o->Show(0);
            } else {
                if (o) o->Show(1);
            }
        } else if (PF(0x280) < lbl_8035B99C) {
            VO *o = PO(0x1b4);
            if (o) o->Show(1);
        }
    }
    if (PF(0x27c) > lbl_8035B99C) {
        PF(0x27c) -= dt;
    } else {
        s32 *a = *(s32 **)(p + 0x274);
        s32 av = *a;
        s32 *b = *(s32 **)(p + 0x278);
        s32 bv = *b;
        if (av != bv) {
            if (bv > av) {
                *b = av;
            } else if (bv < av) {
                *b = bv + 1;
                if (**(s32 **)(p + 0x278) >= 10 && **(s32 **)(p + 0x274) >= 10) {
                    **(s32 **)(p + 0x274) -= 10;
                    W *w2 = PW;
                    (*w2->f540)++;
                    if (*w2->f540 < 0) *w2->f540 = 0;
                    PF(0x280) = lbl_8035B960;
                    **(s32 **)(p + 0x278) = 0;
                }
            }
            PF(0x27c) = lbl_8035B9C8;
        }
    }
}

}
