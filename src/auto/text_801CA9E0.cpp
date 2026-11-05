// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Rect { f32 x0, y0, x1, y1; } Rect;
extern f32 lbl_803596E0[];
extern int fn_8010069C(Rect *a, Rect *b);

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))

struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual int v47(f32, void *, int, int, int, Rect *); };
struct Node { N *obj; int on; Node *next; };
struct M { char vptr_pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(int, void *, int, u32, u32, u32, Rect *, u32, u32, u32, f32); };
struct Cnt { u8 pad[0x20]; u32 n; };
struct Row { u8 pad[4]; Cnt *x4; };
struct Elem { u8 pad[72]; Rect rect; };
struct Base {
    u32 x0;
    s32 types[4];
    Elem *elems[4];
    f32 margins[4];
    u8 pad34[0x48 - 0x34];
    Rect rect;
    u8 pad58[0x68 - 0x58];
    u32 x68;
    u32 x6c;
    void *x70;
    u8 pad74[0x80 - 0x74];
};
struct Obj : Base {
    virtual void t0(); virtual void t1(); virtual void t2(); virtual void t3(); virtual void t4(); virtual void t5(); virtual void t6();
    virtual void draw(f32, int, int, int, Rect *);
    virtual void t8(); virtual void t9(); virtual void t10(); virtual void t11(); virtual void t12(); virtual void t13(); virtual void t14(); virtual void t15(); virtual void t16(); virtual void t17(); virtual void t18(); virtual void t19(); virtual void t20(); virtual void t21(); virtual void t22(); virtual void t23(); virtual void t24(); virtual void t25(); virtual void t26(); virtual void t27(); virtual void t28(); virtual void t29(); virtual void t30(); virtual void t31(); virtual void t32(); virtual void t33(); virtual void t34(); virtual void t35(); virtual void t36(); virtual void t37(); virtual void t38(); virtual void t39(); virtual void t40(); virtual void t41(); virtual void t42(); virtual void t43(); virtual void t44(); virtual void t45(); virtual void t46(); virtual void t47(); virtual void t48(); virtual void t49(); virtual void t50(); virtual void t51(); virtual void t52(); virtual void t53(); virtual void t54(); virtual void t55(); virtual void t56(); virtual void t57(); virtual void t58(); virtual void t59(); virtual void t60(); virtual void t61(); virtual void t62(); virtual void t63(); virtual void t64(); virtual void t65(); virtual void t66(); virtual void t67(); virtual void t68(); virtual void t69(); virtual void t70(); virtual void t71(); virtual void t72(); virtual void t73(); virtual void t74(); virtual void t75(); virtual void t76(); virtual void t77();
    virtual void cell(u32, u32, f32, int, int, int, Rect *);
    virtual void t79(); virtual void t80(); virtual void t81(); virtual void t82(); virtual void t83(); virtual void t84();
    virtual void upd();
    u32 pad84;
    Node *x88;
    u8 pad8c[0x134 - 0x8c];
    Obj *x134;
    u8 pad138[0x144 - 0x138];
    u32 x144;
    u32 x148;
    u8 pad14c[0x168 - 0x14c];
    Obj *x168;
    Obj *x16c;
    Obj *x170;
    Obj *x174;
    Obj *x178;
    Obj **x17c;
    u8 x180[0xc];
    u32 x18c;
    u32 x190;
    u8 pad194[0x1ac - 0x194];
    u32 x1ac;
    u8 pad1b0[0x1c0 - 0x1b0];
    u32 x1c0;
    u32 pad1c4;
    f32 *x1c8;
    f32 x1cc;
    f32 x1d0;
    f32 x1d4;
    u8 pad1d8[0x1e8 - 0x1d8];
    u32 x1e8;
    f32 x1ec;
    u32 pad1f0;
    Rect x1f4;
    Rect x204;
    Rect x214;
    Rect x224;
    u32 pad234;
    s32 x238;
};

extern void *fn_8010EE60(void *, u32);
extern void *fn_8010D0BC(void *, u32);
extern int fn_801CCA8C(void *, u32 *, u32 *, u32);

void fn_801CA9E0(Obj *p, f32 f, int a, int b, int c, Rect *d) {
    Rect r4;
    Rect r2;
    Rect r3;
    Rect box;
    u32 tl;
    u32 ti;
    u32 j, m, i;
    Node *n;
    int stop;
    f32 acc;
    void *row;
    Rect *cur;

    stop = 0;
    for (n = p->x88; n; n = n->next)
        if (n->obj->v47(f, p, a, b, c, d) == 0) stop = 1;
    if (stop) return;

    tl = 0;
    ti = 0;
    box.x0 = -lbl_803596E0[0];
    box.y0 = -lbl_803596E0[0];
    box.x1 = *(f32 *)&lbl_803596E0[0];
    box.y1 = *(f32 *)&lbl_803596E0[0];
    cur = d;
    if (d) fn_8010069C(&box, d);
    for (i = 0; i < 4; i++) {
        if (p->types[i] == 0x8000) {
            r4 = p->elems[i]->rect;
            r4.y0 += p->margins[i];
            r4.x0 += p->margins[i];
            r4.y1 -= p->margins[i];
            r4.x1 -= p->margins[i];
            fn_8010069C(&box, &r4);
            cur = &box;
        }
    }
    ((M *)p->x70)->m(a, &p->rect, c, p->x148, p->x144, p->x68, d, 0, 0, 0, f);
    p->upd();

    if (p->x178 && p->x178->x70) {
        r2 = p->x178->rect;
        if (p->x1c0 >= p->x1e8) fn_8010069C(&r2, &p->x204);
        else fn_8010069C(&r2, &p->x1f4);
        p->x178->draw(f, a, b, c, &r2);
    }

    if (p->x17c) {
        acc = p->rect.x0;
        for (m = 0; m < ((Row *)fn_8010EE60(p->x180, 0))->x4->n; m++) {
            acc += p->x1c8[m];
            if (p->x17c[m]) {
                p->x17c[m]->rect.x1 = acc;
                p->x17c[m]->rect.x0 = acc - p->x1c8[m];
                if (m >= p->x1e8) {
                    p->x17c[m]->rect.x0 -= p->x1d0;
                    p->x17c[m]->rect.x1 -= p->x1d0;
                    if (p->x1e8 && p->x238) {
                        p->x17c[m]->rect.x0 += p->x1ec;
                        p->x17c[m]->rect.x1 += p->x1ec;
                    }
                    p->x17c[m]->draw(f, a, b, c, &p->x214);
                } else {
                    p->x17c[m]->draw(f, a, b, c, &p->x224);
                }
            }
        }
    }

    if (p->x168) {
        for (j = 0; j < p->x190; j++) {
            row = fn_8010EE60(p->x180, j);
            if (!row) break;
            acc = p->rect.x0;
            for (i = 0; i < p->x1ac; i++) {
                acc += p->x1c8[i];
                p->x168->rect.y0 = p->x1cc * (f32)(j + p->x18c) + p->rect.y0;
                p->x168->rect.y1 = p->x1cc + p->x168->rect.y0;
                p->x168->rect.x1 = acc;
                p->x168->rect.x0 = acc - p->x1c8[i];
                p->x168->rect.y0 -= p->x1d4;
                p->x168->rect.y1 -= p->x1d4;
                if (i >= p->x1e8) {
                    p->x168->rect.x0 -= p->x1d0;
                    p->x168->rect.x1 -= p->x1d0;
                    if (p->x1e8 && p->x238) {
                        p->x168->rect.x0 += p->x1ec;
                        p->x168->rect.x1 += p->x1ec;
                    }
                }
                {
                    Obj *s = p->x168;
                    f32 x0, y0, x1, y1;
 y1 = s->rect.y1; x1 = s->rect.x1; y0 = s->rect.y0; x0 = s->rect.x0;
                    r3.x0 = x0; r3.y0 = y0; r3.x1 = x1; r3.y1 = y1;
                }
                if (fn_8010069C(&r3, &p->rect)) {
                    fn_801CCA8C(p->x168->x70, &ti, &tl, p->x168->x68);
                    if (tl) {
                        *(void **)((u8 *)tl + 0x28) = fn_8010D0BC(row, i);
                        p->cell(j, i, f, a, b, c, d);
                    }
                }
            }
        }
    }

    if (p->x16c) {
        if (p->x1c0 >= p->x1e8) p->x16c->draw(f, a, b, c, &p->x204);
        else p->x16c->draw(f, a, b, c, &p->x1f4);
    }
    if (p->x170) p->x170->draw(f, a, b, c, cur);
    if (p->x174) p->x174->draw(f, a, b, c, cur);
    if (p->x134) p->x134->draw(f, a, b, c, d);
}

}
