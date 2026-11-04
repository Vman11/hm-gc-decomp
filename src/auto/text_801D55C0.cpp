// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Rc { f32 x, y, z, w; };
struct Wn { u8 pad_[128]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void draw(f32, int, int, int, Rc *); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void setTex(void *); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void setMode(int); };
struct Nd;
struct LV { u8 pad_[128]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual f32 drawNode(f32, int, int, int, Rc *, f32, f32, Nd *); u8 pad84[0x178 - 0x84]; Wn sub; };
struct Lis { virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void l4(); virtual void l5(); virtual void l6(); virtual void l7(); virtual void l8(); virtual void l9(); virtual void l10(); virtual void l11(); virtual void l12(); virtual void l13(); virtual void l14(); virtual void l15(); virtual void l16(); virtual void l17(); virtual void l18(); virtual void l19(); virtual void l20(); virtual void l21(); virtual void l22(); virtual void l23(); virtual void l24(); virtual void l25(); virtual void l26(); virtual void l27(); virtual void l28(); virtual void l29(); virtual void l30(); virtual void l31(); virtual void l32(); virtual void l33(); virtual void l34(); virtual void l35(); virtual void l36(); virtual void l37(); virtual void l38(); virtual void l39(); virtual void l40(); virtual void l41(); virtual void l42(); virtual void l43(); virtual void l44(); virtual void l45(); virtual void l46(); virtual void l47(); virtual void l48(); virtual void l49(); virtual void notify(Wn *, int); };
struct LNode { Lis *obj; int on; LNode *next; };
struct Nd { Nd *parent; Nd *child; Nd *next; Nd *prev; u32 f10; u32 a; s32 open; s32 leaf; u32 idx; };
struct Ic { u8 pad[0x10]; u32 cell; u8 pad14[4]; };
struct Tx { u8 pad[0x24]; u32 f24; };
extern "C" {
extern f32 lbl_80365188;
extern f32 lbl_8036518C;
extern f32 lbl_803651B4;
s32 fn_801D2F44(LV *, Nd *);
void fn_801CCB84(void *, s32 *, Tx **, void *);
s32 fn_8010069C(Rc *, Rc *);
static inline void setState(Wn *s, int st) {
    LNode *n;
    for (n = F(s,0x88,LNode*); n; n = n->next) n->obj->notify(s, st);
    F(s,0x148,u32) = F(s,0x144,u32);
    F(s,0x144,u32) = (F(s,0x144,u32) & 0xFFFF0000) | (st & 0xFFFF);
}
static inline Ic *getIc(LV *p, Nd *n) {
    if (!n) return 0;
    Ic *t = F(p,0x31c,Ic*);
    u32 i = n->idx;
    if (!t || i >= F(p,0x360,u32)) return 0;
    return &t[i];
}
static inline int st1(int s) {
    int r;
    switch (s) {
    case 2: r = 8; break;
    case 0x100: r = 0x200; break;
    case 0x10: r = 0x20; break;
    case 0x40: r = 0x80; break;
    default: r = s; break;
    }
    return r;
}
static inline int st2(int s) {
    int r;
    switch (s) {
    case 2: r = 0x10; break;
    case 0x100: r = 0x10; break;
    case 8: r = 0x20; break;
    default: r = s; break;
    }
    return r;
}
static inline int st3(int s) {
    int r;
    switch (s) {
    case 2: r = 0x100; break;
    case 8: r = 0x200; break;
    default: r = s; break;
    }
    return r;
}
f32 fn_801D55C0(LV *p, f32 a, int b, int c, int d, Rc *e, f32 x, f32 y, Nd *n) {
    Nd *q;
    Tx *t;
    s32 k;
    f32 h;
    Ic *ic;
    int s;
    k = 0;
    if (!n) return lbl_80365188;
    h = F(p,0x334,f32);
    if (y + F(p,0x334,f32) > F(p,0x4c,f32) && y < F(p,0x54,f32)) {
        int m = fn_801D2F44(p, n);
        if (F(p,0x2fc,void*)) {
            p->sub.setTex(F(p,0x2fc,void*));
            F(p,0x1c0,f32) = x - F(p,0x338,f32);
            F(p,0x1c4,f32) = y;
            F(p,0x1c8,f32) = x - lbl_8036518C;
            F(p,0x1cc,f32) = y + F(p,0x334,f32);
            setState(&p->sub, 2);
            p->sub.setMode(m);
            p->sub.draw(a, b, c, d, e);
            q = n->parent;
            p->sub.setMode(1);
            for (; q; q = q->parent) {
                F(p,0x1c0,f32) -= F(p,0x338,f32);
                F(p,0x1c8,f32) -= F(p,0x338,f32);
                if (q->next) p->sub.draw(a, b, c, d, e);
            }
        }
        ic = getIc(p, n);
        s = 2;
        if (n->leaf) s = 0x40;
        if (n->open) s = st1(s);
        if (F(p,0x144,u32) == 0x20 && n == F(p,0x310,Nd*)) s = st2(s);
        if (n == F(p,0x308,Nd*)) s = st3(s);
        setState(&p->sub, s);
        if (F(p,0x304,void*) && ic) {
            Rc r;
            p->sub.setTex(F(p,0x304,void*));
            r.x = x;
            r.y = y;
            r.z = x + F(p,0x34c,f32);
            r.w = y + F(p,0x350,f32);
            if (fn_8010069C(&r, e)) {
                u32 i = ic->cell;
                u32 row = i / F(p,0x35c,u32);
                u32 col = i % F(p,0x35c,u32);
                f32 cx = (s32)col * F(p,0x34c,f32);
                f32 cy = (s32)row * F(p,0x350,f32);
                F(p,0x1c0,f32) = x - cx;
                F(p,0x1c4,f32) = y - cy;
                F(p,0x1c8,f32) = (x + F(p,0x34c,f32) * (s32)F(p,0x35c,u32)) - cx;
                F(p,0x1cc,f32) = (y + F(p,0x350,f32) * (s32)(F(p,0x358,u32) / F(p,0x35c,u32))) - cy;
                p->sub.draw(a, b, c, d, &r);
            }
            x += F(p,0x34c,f32);
        }
        if (F(p,0x300,void*)) {
            p->sub.setTex(F(p,0x300,void*));
            F(p,0x1c0,f32) = x;
            F(p,0x1c4,f32) = y;
            F(p,0x1c8,f32) = lbl_803651B4 + x;
            F(p,0x1cc,f32) = y + F(p,0x334,f32);
            fn_801CCB84(F(p,0x1e8,void*), &k, &t, F(p,0x1e0,void*));
            t->f24 = n->a;
            p->sub.draw(a, b, c, d, e);
        }
        if (F(p,0x304,void*) && ic) x -= F(p,0x34c,f32);
    }
    if (n->open) h += p->drawNode(a, b, c, d, e, x + F(p,0x338,f32), y + h, n->child);
    h += p->drawNode(a, b, c, d, e, x, y + h, n->next);
    return h;
}
}

} /* extern "C" */
