// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Sub7F { u8 pad[0x24]; void *f24; };
struct Ent7F { void *f0; s32 f4; u32 f8; };
struct Arr7F { u8 pad[0xc]; s32 *fc; };
struct It7F;
struct Own7F { u8 pad[0x68]; void *f68; u32 pad6c; void *f70; };
struct It7F {
    u8 pad0[0x6c]; s32 f6c; u8 pad70[0x80 - 0x70];
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void w7();
    virtual void w8();
    virtual void w9();
    virtual void w10();
    virtual void w11();
    virtual void w12();
    virtual void w13();
    virtual void w14();
    virtual void w15();
    virtual void w16();
    virtual void w17();
    virtual void w18();
    virtual void w19();
    virtual void v58(s32);
    virtual void w21();
    virtual void w22();
    virtual void w23();
    virtual void w24();
    virtual void w25();
    virtual void w26();
    virtual void w27();
    virtual void w28();
    virtual void w29();
    virtual void w30();
    virtual void w31();
    virtual void w32();
    virtual void w33();
    virtual void w34();
    virtual void w35();
    virtual void w36();
    virtual void w37();
    virtual void w38();
    virtual void w39();
    virtual void w40();
    virtual void w41();
    virtual void w42();
    virtual void w43();
    virtual void w44();
    virtual void w45();
    virtual void w46();
    virtual void w47();
    virtual void w48();
    virtual void w49();
    virtual void w50();
    virtual void w51();
    virtual void w52();
    virtual void w53();
    virtual void w54();
    virtual void w55();
    virtual void w56();
    virtual void w57();
    virtual void vf0(void *, void *);
    virtual void vf4(s32, s32);
    virtual void vf8(s32, s32);
    virtual void w61();
    virtual void w62();
    virtual void w63();
    virtual void w64();
    virtual void w65();
    virtual void w66();
    virtual void w67();
    virtual void w68();
    virtual void v11c(void *);
    virtual void w70();
    virtual void w71();
    virtual void sel(s32);
    virtual void desel(s32);
    u8 pad84[0x144 - 0x84]; u32 f144; u8 pad148[0x1b8 - 0x148]; Own7F **f1b8; Ent7F *f1bc; u8 pad1c0[0x1d4 - 0x1c0]; Arr7F *f1d4;
};
struct L7F { virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void l4(); virtual void l5(); virtual void l6(); virtual void l7(); virtual void l8(); virtual void l9(); virtual void l10(); virtual void l11(); virtual void l12(); virtual void l13(); virtual void l14(); virtual void l15(); virtual void l16(); virtual void l17(); virtual void l18(); virtual void l19(); virtual void l20(); virtual void l21(); virtual void l22(); virtual void l23(); virtual void l24(); virtual void l25(); virtual void l26(); virtual void l27(); virtual void l28(); virtual void l29(); virtual void l30(); virtual void l31(); virtual void l32(); virtual void l33(); virtual void l34(); virtual void l35(); virtual void l36(); virtual void l37(); virtual void l38(); virtual void l39(); virtual void l40(); virtual void l41(); virtual void l42(); virtual void l43(); virtual void l44(); virtual s32 hit(void *, It7F *); };
struct N7F { L7F *obj; s32 on; N7F *next; };
struct P7F { u8 pad[0x6c]; u32 f6c; u8 pad70[0x88 - 0x70]; N7F *f88; u8 pad8c[0x11c - 0x8c]; It7F *f11c; u8 pad120[0x164 - 0x120]; s32 f164; u8 pad168[0x170 - 0x168]; It7F *f170; It7F *f174; It7F *f178; };
void fn_801CCB84(void *, s32 *, Sub7F **, void *);
void fn_801AF27C(It7F *, void *);
void fn_801D7048(P7F *, P7F *);
void fn_801D791C(P7F *, s32, s32);

inline s32 IsSel7F(It7F *o) {
    u8 b = 0;
    u16 t = o->f144;
    if (t == 8 || t == 4 || t == 0x20 || t == 0x80 || t == 0x200) b = 1;
    return b;
}

inline s32 Bit1(It7F *o) { int v = (o->f6c >> 1) & 1; return v; }
inline s32 IsFoc7F(It7F *o) {
    u16 t = o->f144;
    if (t == 0x10 || t == 0x20 || t == 0x40 || t == 0x80) return 1;
    return 0;
}

s32 fn_801A7F70(P7F *p, It7F *it) {
    N7F *n;
    s32 r = 0;
    for (n = p->f88; n != NULL; n = n->next) {
        if (n->on != 0 && n->obj->hit(p, it) == 0) r = 1;
    }
    if (r != 0) return 0;
    if (!(p->f6c & 2)) return 0;
    It7F *o = p->f170;
    if (o == it) {
        s32 idx = o->f1d4->fc[0];
        if (idx >= 0) {
            s32 c = 0;
            Sub7F *s;
            void *x;
            Ent7F *t = o->f1bc;
            if (t) {
                x = t[idx].f0;
            } else {
                fn_801CCB84(o->f1b8[idx]->f70, &c, &s, o->f1b8[idx]->f68);
                if (!s) x = 0;
                else x = s->f24;
            }
            fn_801AF27C(p->f174, x);
        }
        if ((p->f170->f6c & 1) == 1) p->f170->v58(0);
        if (p->f164 == 1) {
            if (Bit1(p->f170) == 1) p->f170->f6c &= ~2;
            if (IsSel7F(p->f170) == 1) p->f170->desel(1);
            if (IsFoc7F(p->f170) == 1) p->f170->vf8(0, 1);
            if (IsFoc7F(p->f174) == 0) p->f174->vf4(0, 1);
            if (!IsSel7F(p->f174)) p->f174->sel(1);
        }
        fn_801D7048(p, p);
        p->f11c->v11c(p);
    } else if (it == p->f178) {
        if (p->f170->f6c & 1) {
            p->f170->v58(0);
            if (p->f164 == 1) {
                if (Bit1(p->f170) == 1) p->f170->f6c &= ~2;
                if (IsSel7F(p->f170)) p->f170->desel(1);
                if (IsFoc7F(p->f170) == 1) p->f170->vf8(0, 1);
            }
            fn_801D791C(p, 0, 1);
        } else {
            p->f170->v58(1);
            if (Bit1(p->f170) == 0) p->f170->f6c |= 2;
            if (IsFoc7F(p->f170) == 0) p->f170->vf4(0, 1);
            if (!IsSel7F(p->f170)) p->f170->sel(1);
        }
    }
    return 0;
}

} /* extern "C" */
