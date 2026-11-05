#include "common.h"
namespace m801D1FBC {
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Scr { u8 pad_[128]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void show(int); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void update(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void setMax(f32); virtual void v80(); virtual void setStep(f32); virtual void v82(); virtual void setRange(f32, f32); virtual f32 getPos(); virtual void setPos(f32); virtual void setPage(f32); };
struct Lis { virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void l4(); virtual void l5(); virtual void l6(); virtual void l7(); virtual void l8(); virtual void l9(); virtual void l10(); virtual void l11(); virtual void l12(); virtual void l13(); virtual void l14(); virtual void l15(); virtual void l16(); virtual void l17(); virtual void l18(); virtual void l19(); virtual void l20(); virtual void l21(); virtual void l22(); virtual void l23(); virtual void l24(); virtual void l25(); virtual void l26(); virtual void l27(); virtual void l28(); virtual void l29(); virtual void l30(); virtual void l31(); virtual void l32(); virtual void l33(); virtual void l34(); virtual void l35(); virtual void l36(); virtual void l37(); virtual void l38(); virtual void l39(); virtual void l40(); virtual void l41(); virtual void l42(); virtual void l43(); virtual void l44(); virtual void l45(); virtual void l46(); virtual void l47(); virtual void l48(); virtual void l49(); virtual void notify(Scr *, int); };
struct LNode { Lis *obj; int on; LNode *next; };
extern "C" {
extern f32 lbl_80365188;
extern f32 lbl_8036518C;
void fn_801D25A0(u8 *, void *, f32, f32);
static inline void setState(Scr *s, int st) {
    LNode *n;
    for (n = F(s,0x88,LNode*); n; n = n->next) n->obj->notify(s, st);
    F(s,0x148,u32) = F(s,0x144,u32);
    F(s,0x144,u32) = (F(s,0x144,u32) & 0xFFFF0000) | st;
}
void fn_801D1FBC(u8 *o) {
    Scr *s;
    if (F(o,0x164,int) == 0) return;
    F(o,0x344,u32) = 0;
    F(o,0x348,f32) = lbl_80365188;
    fn_801D25A0(o, F(o,0x2ec,void*), F(o,0x48,f32) + F(o,0x338,f32), F(o,0x4c,f32));
    s = F(o,0x2e0,Scr*);
    {
        s32 vis;
        u32 cnt;
        f32 r;
        f32 d;
        vis = (F(o,0x54,f32) - F(o,0x4c,f32)) / F(o,0x334,f32);
        cnt = F(o,0x344,u32);
        d = (s32)(cnt - vis);
        if (s) {
            if (d <= lbl_80365188) {
                setState(s, 1);
                F(o,0x2e0,Scr*)->setRange(lbl_80365188, d);
                F(o,0x2e0,Scr*)->setPos(lbl_80365188);
                F(F(o,0x2e0,Scr*),0x6c,u32) &= ~2;
                F(o,0x2e0,Scr*)->show(0);
            } else {
                if (cnt != 0.0) r = (f32)vis / (f32)(s32)cnt;
                else r = lbl_8036518C;
                setState(s, 2);
                F(o,0x2e0,Scr*)->setRange(lbl_80365188, d);
                F(o,0x2e0,Scr*)->setMax(vis);
                F(o,0x2e0,Scr*)->setStep(lbl_8036518C);
                if (F(o,0x328,int)) F(o,0x2e0,Scr*)->setPage(r);
                if (F(o,0x2e0,Scr*)->getPos() > d) F(o,0x2e0,Scr*)->setPos(d);
                F(F(o,0x2e0,Scr*),0x6c,u32) |= 2;
                F(o,0x2e0,Scr*)->show(1);
                F(o,0x2e0,Scr*)->update();
            }
        }
    }
    s = F(o,0x2dc,Scr*);
    if (s) {
        f32 r, d, w, h;
        h = F(o,0x348,f32);
        w = F(o,0x50,f32) - F(o,0x48,f32);
        d = h - w;
        if (d < (r = lbl_80365188)) {
            setState(s, 1);
            F(o,0x2dc,Scr*)->setRange(lbl_80365188, d);
            F(o,0x2dc,Scr*)->setPos(lbl_80365188);
            F(F(o,0x2dc,Scr*),0x6c,u32) &= ~2;
            F(o,0x2dc,Scr*)->show(0);
        } else {
            if (h != 0.0) r = w / h;
            setState(s, 2);
            F(o,0x2dc,Scr*)->setRange(lbl_80365188, d);
            F(o,0x2dc,Scr*)->setMax((s32)(F(o,0x50,f32) - F(o,0x48,f32)));
            if (F(o,0x328,int)) F(o,0x2dc,Scr*)->setPage(r);
            if (F(o,0x2dc,Scr*)->getPos() > d) F(o,0x2dc,Scr*)->setPos(d);
            F(F(o,0x2dc,Scr*),0x6c,u32) |= 2;
            F(o,0x2dc,Scr*)->show(1);
            F(o,0x2dc,Scr*)->update();
        }
    }
    F(o,0x164,int) = 0;
}

}

} /* namespace m801D1FBC */

namespace m801D2518 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct B { u8 pad[0x80]; virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79(); virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual f32 getF(); };
struct O { u8 p[732]; B *b1; B *b0; u8 q[820 - 740]; f32 k; u32 r; f32 o828; f32 o832; };
int fn_801D2518(O *o, B *b) {
    if (b == o->b0) o->o828 = -o->k * o->b0->getF();
    if (b == o->b1) o->o832 = -o->b1->getF();
    return 0;
}

} /* extern "C" */

} /* namespace m801D2518 */

namespace m801D25A0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
typedef struct N801D25A0 {
    struct N801D25A0 *parent;
    struct N801D25A0 *child;
    struct N801D25A0 *next;
    u8 pad[8];
    char *volatile label;
    s32 open;
} N801D25A0;
extern volatile f32 lbl_803651A8;
extern volatile f32 lbl_8035B038;
extern volatile f32 lbl_8035B03C;
void fn_801CCC7C(void *res, u8 **b, u8 **a, u32 x, u32 y);
void fn_8012D0A4(void *font, f32 *out, char *text, f32 *pos, u8 *col, s32 flags, f32 s, f32 t, f32 u);

void fn_801D25A0(u8 *self, N801D25A0 *node, f32 x, f32 y) {
    f32 out[3];
    f32 pt[2];
    u8 *a;
    u8 *b;
    void *font;
    f32 w;
    N801D25A0 *prev;
    N801D25A0 *c;
    a = 0;
    b = 0;
    font = 0;
    while (node != 0) {
        (*(s32 *)(self + 836))++;
        w = *(f32 *)(self + 844);
        w += *(f32 *)(self + 824);
        if (*(void **)(self + 768) != 0) {
            if (a == 0) {
                fn_801CCC7C(*(void **)(self + 768), &b, &a, *(u32 *)(self + 324), *(u32 *)(self + 104));
            }
            if (font == 0) {
                font = *(void **)(a + 36);
            }
            pt[0] = x;
            pt[1] = y;
            fn_8012D0A4(font, out, node->label, pt, a + 48, 17, lbl_803651A8, lbl_8035B038, lbl_8035B03C);
            w += out[2] - *(f32 *)(self + 72);
        }
        if (w > *(f32 *)(self + 840)) {
            *(f32 *)(self + 840) = w;
        }
        if (node->open != 0 && node->child != 0) {
            x += *(f32 *)(self + 824);
            y += *(f32 *)(self + 820);
            node = node->child;
        } else if (node->next != 0) {
            y += *(f32 *)(self + 820);
            node = node->next;
        } else {
            prev = node;
            node = node->parent;
            while (node != 0) {
                x -= *(f32 *)(self + 824);
                y -= *(f32 *)(self + 820);
                c = node->child;
                while (c != prev) {
                    c = c->next;
                    y -= *(f32 *)(self + 820);
                }
                if (node->next != 0) {
                    y += *(f32 *)(self + 820);
                    node = node->next;
                    break;
                }
                prev = node;
                node = node->parent;
            }
        }
    }
}

} /* extern "C" */

} /* namespace m801D25A0 */

namespace m801D2780 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct T278 { u8 pad[4]; T278 *f4; T278 *f8; u8 padc[4]; T278 *f10; u8 pad14[8]; s32 f1c; };
struct P278 { u8 pad[0x314]; T278 *f314; };

inline void fn_801D2984(P278 *p, T278 *x) {
    T278 *prev = 0;
    T278 *cur;
    if (!x->f1c) return;
    cur = p->f314;
    if (cur == x) {
        p->f314 = cur->f10;
        x->f10 = 0;
        x->f1c = 0;
        return;
    }
    while (cur != x && cur) {
        prev = cur;
        cur = cur->f10;
    }
    if (cur) {
        prev->f10 = x->f10;
        x->f10 = 0;
        x->f1c = 0;
    }
}

void fn_801D2780(P278 *p, T278 *n) {
    T278 *c;
    for (c = n->f4; c; c = c->f8) {
        if (c->f1c) fn_801D2984(p, c);
        if (c->f4) fn_801D2780(p, c);
    }
}

} /* extern "C" */

} /* namespace m801D2780 */

namespace m801D2984 {
extern "C" {
/* Functions from 0x801D2984 to 0x801D29F8, found by decomp-toolkit. */

typedef struct Node {
    u8 unk0[0x10];
    struct Node* next;
    u8 unk14[0x8];
    s32 unk1C;
} Node;

typedef struct {
    u8 unk0[0x314];
    Node* head;
} NodeOwner;

void fn_801D2984(NodeOwner* owner, Node* node) {
    Node* prev = 0;
    Node* cur;

    if (node->unk1C == 0) {
        return;
    }
    if (owner->head == node) {
        owner->head = owner->head->next;
        node->next = 0;
        node->unk1C = 0;
        return;
    }
    for (cur = owner->head; cur != node && cur != 0; cur = cur->next) {
        prev = cur;
    }
    if (cur != 0) {
        prev->next = node->next;
        node->next = 0;
        node->unk1C = 0;
    }
}

} /* extern "C" */
} /* namespace m801D2984 */

namespace m801D29F8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct T1D2 { T1D2 *f0; T1D2 *f4; T1D2 *f8; T1D2 *fc; T1D2 *f10; u8 pad14[4]; s32 f18; s32 f1c; };
struct C1D2 {
    virtual s32 has(s32);
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
    virtual void w20();
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
    virtual void sel(void *, T1D2 *);
};
struct N1D2 { C1D2 *obj; s32 on; N1D2 *next; };
struct P1D2 { u8 pad[0x88]; N1D2 *f88; u8 pad8c[0x314 - 0x8c]; T1D2 *f314; u8 pad318[0x32c - 0x318]; s32 f32c; };

static inline void Set1D2(P1D2 *p, T1D2 *x) {
    T1D2 *old;
    N1D2 *n;
    N1D2 *n2;
    old = p->f314;
    for (n = p->f88; n != NULL; n = n->next) {
        if (n->obj->has(0x13) != 0 && n->on != 0) n->obj->sel(p, x);
    }
    while (old != NULL) {
        T1D2 *t;
        old->f1c = 0;
        t = old;
        old = old->f10;
        t->f10 = 0;
    }
    if (x) {
        x->f1c = 1;
        x->f10 = 0;
    }
    p->f314 = x;
    {
        for (n2 = p->f88; n2 != NULL; n2 = n2->next) {
            if (n2->obj->has(0x13) != 0 && n2->on == 0) n2->obj->sel(p, x);
        }
    }
}

static inline T1D2 *Next1D2(T1D2 *n) {
    T1D2 *r = n->f4;
    if (r && n->f18) return r;
    r = n->f8;
    if (r) return r;
    for (r = n->f0; r != NULL; r = r->f0) {
        T1D2 *c = r->f8;
        if (c) { r = c; break; }
    }
    return r;
}
static inline T1D2 *Last1D2(T1D2 *x) {
    if (!x) return 0;
    while (x->f4 && x->f18) {
        x = x->f4;
        while (x->f8) x = x->f8;
    }
    return x;
}

static inline T1D2 *Prev1D2(T1D2 *n) {
    if (n->fc) return Last1D2(n->fc);
    return n->f0;
}

void fn_801D29F8(P1D2 *p, T1D2 *x) {
    T1D2 *prev;
    T1D2 *n;
    if (x == p->f314) return;
    if (p->f32c == 0) {
        Set1D2(p, x);
        return;
    }
    Set1D2(p, p->f314);
    for (n = p->f314; n != NULL;) {
        prev = n;
        n = Next1D2(n);
        if (n) {
            prev->f10 = n;
            n->f1c = 1;
        }
        if (n == x) break;
    }
    if (n != x) {
        Set1D2(p, p->f314);
        for (n = p->f314; n != NULL;) {
            prev = n;
            n = Prev1D2(n);
            if (n) {
                prev->f10 = n;
                n->f1c = 1;
            }
            if (n == x) break;
        }
    }
    if (n == x) return;
    Set1D2(p, p->f314);
}

} /* extern "C" */

} /* namespace m801D29F8 */

namespace m801D2F44 {
/* Functions from 0x801D2F44 to 0x801D3020, found by decomp-toolkit. */

extern "C" {

s32 fn_801D2F44(void *arg0, void **arg1) {
    if (arg1[3] == NULL && arg1[0] == NULL) {
        if (arg1[2] == NULL) {
            if (arg1[1] == NULL) {
                return 13;
            }
            return (s32)arg1[6] != 0 ? 11 : 12;
        }
        if (arg1[1] == NULL) {
            return 7;
        }
        return (s32)arg1[6] != 0 ? 5 : 6;
    }
    if (arg1[1] == NULL) {
        if (arg1[2] != NULL) {
            return 10;
        }
        return 4;
    }
    if ((s32)arg1[6] != 0) {
        if (arg1[2] != NULL) {
            return 8;
        }
        return 2;
    }
    if (arg1[2] != NULL) {
        return 9;
    }
    return 3;
}

} /* extern "C" */

} /* namespace m801D2F44 */

namespace m801D3020 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { Node *parent; Node *child; Node *next; Node *prev; Node *selNext; int pad14; int open; int sel; };
struct Scr { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void key(u32, int); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79(); virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void setPos(f32); };
struct Lis { virtual int is(int); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void onCursor(void *, Node *); };
struct LNode { Lis *obj; int on; LNode *next; };
struct Own { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void post(int, u32); };
extern f32 lbl_80365188;
extern f32 lbl_8036518C;
extern f32 lbl_803596E0[];
Scr *fn_801D9B10(void *, void *, u32);
static inline Node *nextVis(Node *n) {
    Node *r;
    if ((r = n->child) && n->open) return r;
    if ((r = n->next)) return r;
    for (r = n->parent; r; r = r->parent) {
        if (r->next) { r = r->next; break; }
    }
    return r;
}
static inline Node *lastVis(Node *p) {
    if (!p) return 0;
    while (p->child && p->open) {
        p = p->child;
        while (p->next) p = p->next;
    }
    return p;
}
static inline Node *prevVis(Node *n) {
    Node *p = n->prev;
    if (p) return lastVis(p);
    return n->parent;
}
static inline void unsel(u8 *t, Node *n) {
    Node *prev = 0;
    Node *q;
    if (!n->sel) return;
    q = F(t,0x314,Node*);
    if (q == n) { F(t,0x314,Node*) = q->selNext; n->selNext = 0; n->sel = 0; return; }
    while (q != n && q) { prev = q; q = q->selNext; }
    if (q) { prev->selNext = n->selNext; n->selNext = 0; n->sel = 0; }
}
static inline f32 rowPos(u8 *t, Node *n) {
    Node *q = F(t,0x2ec,Node*);
    f32 y = lbl_80365188;
    for (; q; ) {
        if (q == n) return y;
        q = nextVis(q);
        y += F(t,0x334,f32);
    }
    return -lbl_803596E0[0];
}
static inline void scrollTo(u8 *t, Node *n) {
    f32 y;
    if (!n) return;
    y = rowPos(t, n);
    if (y != -lbl_803596E0[0]) {
        f32 top;
        f32 row;
        f32 vis;
        f32 bot;
        vis = (F(t,0x54,f32) - F(t,0x4c,f32)) / F(t,0x334,f32);
        top = -F(t,0x33c,f32) / F(t,0x334,f32);
        row = y / F(t,0x334,f32);
        F(t,0x310,Node*) = n;
        bot = top + vis;
        if (row < top) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(row);
        }
        if (row >= bot - lbl_8036518C) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(lbl_8036518C + (row - vis));
        }
    }
}
static inline void scrollTo2(u8 *t, Node *n) {
    f32 y;
    if (!n) return;
    y = rowPos(t, n);
    if (y != -lbl_803596E0[0]) {
        f32 top;
        f32 bot;
        f32 row;
        f32 vis;
        vis = (F(t,0x54,f32) - F(t,0x4c,f32)) / F(t,0x334,f32);
        top = -F(t,0x33c,f32) / F(t,0x334,f32);
        row = y / F(t,0x334,f32);
        F(t,0x310,Node*) = n;
        bot = top + vis;
        if (row < top) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(row);
        }
        if (row >= bot - lbl_8036518C) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(lbl_8036518C + (row - vis));
        }
    }
}
void fn_801D3020(u8 *t, Node *node) {
    Node *c;
    if (node->sel) unsel(t, node);
    if (node == F(t,0x308,Node*)) F(t,0x308,Node*) = 0;
    if (node == F(t,0x310,Node*)) {
        Node *n = nextVis(node);
        scrollTo(t, n);
        if (!F(t,0x310,Node*)) {
            n = prevVis(node);
            scrollTo2(t, n);
        }
    }
    c = node->child;
    while (c) {
        Node *x = c;
        c = c->next;
        fn_801D3020(t, x);
    }
    {
        Node *p = node->parent;
        Node *pv = node->prev;
        Node *nx = node->next;
        if (p && p->child == node) p->child = nx;
        if (nx) nx->prev = pv;
        if (pv) pv->next = nx;
        if (F(t,0x2ec,Node*) == node) F(t,0x2ec,Node*) = nx;
    }
    node->parent = 0;
    node->prev = 0;
    node->next = F(t,0x16c,Node*);
    F(t,0x16c,Node*) = node;
    F(t,0x164,int) = 1;
}

} /* extern "C" */

} /* namespace m801D3020 */

namespace m801D34C0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801D34C0 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63(); virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67(); virtual void m(void *); };
extern "C" void fn_801D7680(void *);

s32 fn_801D34C0(u8 *p) {
    fn_801D7680(p);
    switch (*(s32 *)(p + 324)) {
    case 16:
        *(s32 *)(p + 324) = 2;
        break;
    case 8:
    case 32:
        if (*(V_801D34C0 **)(p + 284) != NULL) {
            (*(V_801D34C0 **)(p + 284))->m(p);
        }
        *(s32 *)(p + 324) = 2;
        break;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D34C0 */

namespace m801D354C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_801D791C(void);

u32 fn_801D354C(s32 param_1) {

    fn_801D791C();
    if (*(u32 *)(param_1 + 0x310) == 0) {
        *(u32 *)(param_1 + 0x310) = *(u32 *)(param_1 + 0x2ec);
    }
    switch (*(u32 *)(param_1 + 0x144)) {
    case 2:
    case 0x100:
        *(u32 *)(param_1 + 0x144) = 0x10;
        break;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D354C */

namespace m801D35B4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct O;
struct P {
    u8 pad[0x80];
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void f(O *);
};
struct O { u8 pad[0x11C]; P *p; u8 pad2[0x144 - 0x120]; u32 st; };
int fn_801D35B4(O *o) {
    if (o->st == 32) { o->st = 16; if (o->p) o->p->f(o); }
    return 0;
}

} /* extern "C" */

} /* namespace m801D35B4 */

namespace m801D3608 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801D3608_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void m(); };

void fn_801D3608(s32 param_1) {
    ((VCall_fn_801D3608_0 *)(param_1))->m();
}
}

} /* namespace m801D3608 */

namespace m801D3634 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { Node *parent; Node *child; Node *next; Node *prev; Node *selNext; int pad14; int open; int sel; };
struct Scr { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void key(u32, int); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79(); virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void setPos(f32); };
struct Own { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void post(int, u32); };
extern f32 lbl_80365188;
extern f32 lbl_8036518C;
extern f32 lbl_803596E0[];
Scr *fn_801D9744(void *, void *, u32);
static inline Node *nextVis(Node *n) {
    Node *r;
    if ((r = n->child) && n->open) return r;
    if ((r = n->next)) return r;
    for (r = n->parent; r; r = r->parent) {
        if (r->next) { r = r->next; break; }
    }
    return r;
}
static inline f32 rowPos(u8 *t, Node *n) {
    Node *q = F(t,0x2ec,Node*);
    f32 y = lbl_80365188;
    for (; q; ) {
        if (q == n) return y;
        q = nextVis(q);
        y += F(t,0x334,f32);
    }
    return -lbl_803596E0[0];
}
static inline void scrollTo(u8 *t, Node *n) {
    f32 y;
    if (!n) return;
    y = rowPos(t, n);
    if (y != -lbl_803596E0[0]) {
        f32 top;
        f32 row;
        f32 vis;
        f32 bot;
        vis = (F(t,0x54,f32) - F(t,0x4c,f32)) / F(t,0x334,f32);
        top = -F(t,0x33c,f32) / F(t,0x334,f32);
        row = y / F(t,0x334,f32);
        F(t,0x310,Node*) = n;
        bot = top + vis;
        if (row < top) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(row);
        }
        if (row >= bot - lbl_8036518C) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(lbl_8036518C + (row - vis));
        }
    }
}
static inline void scrollTo2(u8 *t, Node *n) {
    f32 y;
    if (!n) return;
    y = rowPos(t, n);
    if (y != -lbl_803596E0[0]) {
        f32 top;
        f32 bot;
        f32 row;
        f32 vis;
        vis = (F(t,0x54,f32) - F(t,0x4c,f32)) / F(t,0x334,f32);
        top = -F(t,0x33c,f32) / F(t,0x334,f32);
        row = y / F(t,0x334,f32);
        F(t,0x310,Node*) = n;
        bot = top + vis;
        if (row < top) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(row);
        }
        if (row >= bot - lbl_8036518C) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(lbl_8036518C + (row - vis));
        }
    }
}
struct Own2 { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void notify(u8 *); };
void fn_801D2780(u8 *t, Node *n);
static inline int isAnc(Node *q, Node *n) {
    int r;
    for (; q; q = q->parent) {
        if (q == n) { r = 1; goto done; }
    }
    r = 0;
done:
    return r;
}
static inline void ens(u8 *t, Node *n) { if (isAnc(F(t,0x310,Node*), n)) scrollTo(t, n); }
int fn_801D3634(u8 *t, u32 key, int a) {
    if (F(t,0x144,u32) == 32) {
        Node *c = F(t,0x310,Node*);
        if (c && c->child) {
            Node *n;
            c->open = (u32)__cntlzw(c->open) >> 5;
            if (!F(t,0x310,Node*)->open) fn_801D2780(t, F(t,0x310,Node*));
            ens(t, F(t,0x30c,Node*));
            F(t,0x164,int) = 1;
        }
    }
    if (F(t,0x144,u32) == 16) {
        F(t,0x144,u32) = 32;
        if (F(t,0x11c,Own2*)) F(t,0x11c,Own2*)->notify(t);
    }
    if (a && F(t,0x70,Own*)) F(t,0x70,Own*)->post(16, F(t,0x68,u32));
    return 0;
}

} /* extern "C" */

} /* namespace m801D3634 */

namespace m801D38B4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801D38B4 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void m(void *, s32); };
struct W_801D38B4 { u8 pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(s32, void *); };
extern "C" V_801D38B4 *fn_801D8FAC(void *, void *, void *);

s32 fn_801D38B4(u8 *p, void *a, s32 c) {
    V_801D38B4 *o = fn_801D8FAC(p, p, a);
    if (o != NULL) {
        o->m(a, c);
        *(s32 *)(p + 324) = 2;
    }
    if (c != 0 && *(W_801D38B4 **)(p + 112) != NULL) {
        (*(W_801D38B4 **)(p + 112))->m(8, *(void **)(p + 104));
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D38B4 */

namespace m801D3958 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801D3958 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void m(void *, s32); };
struct W_801D3958 { u8 pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(s32, void *); };
extern "C" V_801D3958 *fn_801D9378(void *, void *, void *);

s32 fn_801D3958(u8 *p, void *a, s32 c) {
    V_801D3958 *o = fn_801D9378(p, p, a);
    if (o != NULL) {
        o->m(a, c);
        *(s32 *)(p + 324) = 2;
    }
    if (c != 0 && *(W_801D3958 **)(p + 112) != NULL) {
        (*(W_801D3958 **)(p + 112))->m(4, *(void **)(p + 104));
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D3958 */

namespace m801D39FC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { Node *parent; Node *child; Node *next; Node *prev; Node *selNext; int pad14; int open; int sel; };
struct Scr { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void key(u32, int); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79(); virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void setPos(f32); };
struct Lis { virtual int is(int); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void onCursor(void *, Node *); };
struct LNode { Lis *obj; int on; LNode *next; };
struct Own { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void post(int, u32); };
extern f32 lbl_80365188;
extern f32 lbl_8036518C;
extern f32 lbl_803596E0[];
Scr *fn_801D9744(void *, void *, u32);
static inline Node *nextVis(Node *n) {
    Node *r;
    if ((r = n->child) && n->open) return r;
    if ((r = n->next)) return r;
    for (r = n->parent; r; r = r->parent) {
        if (r->next) { r = r->next; break; }
    }
    return r;
}
static inline f32 rowPos(u8 *t, Node *n) {
    Node *q = F(t,0x2ec,Node*);
    f32 y = lbl_80365188;
    for (; q; ) {
        if (q == n) return y;
        q = nextVis(q);
        y += F(t,0x334,f32);
    }
    return -lbl_803596E0[0];
}
static inline void scrollTo(u8 *t, Node *n) {
    f32 y;
    if (!n) return;
    y = rowPos(t, n);
    if (y != -lbl_803596E0[0]) {
        f32 top;
        f32 row;
        f32 vis;
        f32 bot;
        vis = (F(t,0x54,f32) - F(t,0x4c,f32)) / F(t,0x334,f32);
        top = -F(t,0x33c,f32) / F(t,0x334,f32);
        row = y / F(t,0x334,f32);
        F(t,0x310,Node*) = n;
        bot = top + vis;
        if (row < top) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(row);
        }
        if (row >= bot - lbl_8036518C) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(lbl_8036518C + (row - vis));
        }
    }
}
static inline void scrollTo2(u8 *t, Node *n) {
    f32 y;
    if (!n) return;
    y = rowPos(t, n);
    if (y != -lbl_803596E0[0]) {
        f32 top;
        f32 bot;
        f32 row;
        f32 vis;
        vis = (F(t,0x54,f32) - F(t,0x4c,f32)) / F(t,0x334,f32);
        top = -F(t,0x33c,f32) / F(t,0x334,f32);
        row = y / F(t,0x334,f32);
        F(t,0x310,Node*) = n;
        bot = top + vis;
        if (row < top) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(row);
        }
        if (row >= bot - lbl_8036518C) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(lbl_8036518C + (row - vis));
        }
    }
}
int fn_801D39FC(u8 *t, u32 key, int a) {
    if (F(t,0x144,u32) == 32) {
        if (key & 0x30) {
            Node *c = F(t,0x310,Node*);
            Node *n;
            if (!c) goto end;
            n = nextVis(c);
            if (n) scrollTo(t, n);
        } else {
            Node *c = F(t,0x310,Node*);
            Node *n;
            LNode *l;
            Node *s;
            Node *cur;
            if (!c) goto end;
            n = nextVis(c);
            if (n) scrollTo2(t, n);
            cur = F(t,0x310,Node*);
            s = F(t,0x314,Node*);
            for (l = F(t,0x88,LNode*); l; l = l->next) {
                if (l->obj->is(19) && l->on) l->obj->onCursor(t, cur);
            }
            while (s) {
                Node *pv;
                s->sel = 0;
                pv = s;
                s = s->selNext;
                pv->selNext = 0;
            }
            if (cur) { cur->sel = 1; cur->selNext = 0; }
            F(t,0x314,Node*) = cur;
            for (l = F(t,0x88,LNode*); l; l = l->next) {
                if (l->obj->is(19) && !l->on) l->obj->onCursor(t, cur);
            }
        }
    } else {
        Scr *r = fn_801D9744(t, t, key);
        if (r) {
            r->key(key, a);
            F(t,0x144,u32) = 2;
        }
    }
end:
    if (a && F(t,0x70,Own*)) F(t,0x70,Own*)->post(2, F(t,0x68,u32));
    return 1;
}

} /* extern "C" */

} /* namespace m801D39FC */

namespace m801D3F08 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { Node *parent; Node *child; Node *next; Node *prev; Node *selNext; int pad14; int open; int sel; };
struct Scr { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void key(u32, int); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79(); virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void setPos(f32); };
struct Lis { virtual int is(int); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void onCursor(void *, Node *); };
struct LNode { Lis *obj; int on; LNode *next; };
struct Own { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void post(int, u32); };
extern f32 lbl_80365188;
extern f32 lbl_8036518C;
extern f32 lbl_803596E0[];
Scr *fn_801D9B10(void *, void *, u32);
static inline Node *nextVis(Node *n) {
    Node *r;
    if ((r = n->child) && n->open) return r;
    if ((r = n->next)) return r;
    for (r = n->parent; r; r = r->parent) {
        if (r->next) { r = r->next; break; }
    }
    return r;
}
static inline Node *lastVis(Node *p) {
    if (!p) return 0;
    while (p->child && p->open) {
        p = p->child;
        while (p->next) p = p->next;
    }
    return p;
}
static inline Node *prevVis(Node *n) {
    Node *p = n->prev;
    if (p) return lastVis(p);
    return n->parent;
}
static inline f32 rowPos(u8 *t, Node *n) {
    Node *q = F(t,0x2ec,Node*);
    f32 y = lbl_80365188;
    for (; q; ) {
        if (q == n) return y;
        q = nextVis(q);
        y += F(t,0x334,f32);
    }
    return -lbl_803596E0[0];
}
static inline void scrollTo(u8 *t, Node *n) {
    f32 y;
    if (!n) return;
    y = rowPos(t, n);
    if (y != -lbl_803596E0[0]) {
        f32 top;
        f32 row;
        f32 vis;
        f32 bot;
        vis = (F(t,0x54,f32) - F(t,0x4c,f32)) / F(t,0x334,f32);
        top = -F(t,0x33c,f32) / F(t,0x334,f32);
        row = y / F(t,0x334,f32);
        F(t,0x310,Node*) = n;
        bot = top + vis;
        if (row < top) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(row);
        }
        if (row >= bot - lbl_8036518C) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(lbl_8036518C + (row - vis));
        }
    }
}
static inline void scrollTo2(u8 *t, Node *n) {
    f32 y;
    if (!n) return;
    y = rowPos(t, n);
    if (y != -lbl_803596E0[0]) {
        f32 top;
        f32 bot;
        f32 row;
        f32 vis;
        vis = (F(t,0x54,f32) - F(t,0x4c,f32)) / F(t,0x334,f32);
        top = -F(t,0x33c,f32) / F(t,0x334,f32);
        row = y / F(t,0x334,f32);
        F(t,0x310,Node*) = n;
        bot = top + vis;
        if (row < top) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(row);
        }
        if (row >= bot - lbl_8036518C) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(lbl_8036518C + (row - vis));
        }
    }
}
int fn_801D3F08(u8 *t, u32 key, int a) {
    if (F(t,0x144,u32) == 32) {
        if (key & 0x30) {
            Node *c = F(t,0x310,Node*);
            Node *n;
            if (!c) goto end;
            n = prevVis(c);
            if (n) scrollTo(t, n);
        } else {
            Node *c = F(t,0x310,Node*);
            Node *n;
            LNode *l;
            Node *s;
            Node *cur;
            if (!c) goto end;
            n = prevVis(c);
            if (n) scrollTo2(t, n);
            cur = F(t,0x310,Node*);
            s = F(t,0x314,Node*);
            for (l = F(t,0x88,LNode*); l; l = l->next) {
                if (l->obj->is(19) && l->on) l->obj->onCursor(t, cur);
            }
            while (s) {
                Node *pv;
                s->sel = 0;
                pv = s;
                s = s->selNext;
                pv->selNext = 0;
            }
            if (cur) { cur->sel = 1; cur->selNext = 0; }
            F(t,0x314,Node*) = cur;
            for (l = F(t,0x88,LNode*); l; l = l->next) {
                if (l->obj->is(19) && !l->on) l->obj->onCursor(t, cur);
            }
        }
    } else {
        Scr *r = fn_801D9B10(t, t, key);
        if (r) {
            r->key(key, a);
            F(t,0x144,u32) = 2;
        }
    }
end:
    if (a && F(t,0x70,Own*)) F(t,0x70,Own*)->post(1, F(t,0x68,u32));
    return 1;
}

} /* extern "C" */

} /* namespace m801D3F08 */

namespace m801D4414 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_801D4414 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual s32 m(void *, void *); };
extern "C" void fn_801D3020(void *, void *);

s32 fn_801D4414(u8 *p, void *a) {
    u8 *n;
    s32 r = 0;
    for (n = *(u8 **)(p + 136); n != NULL; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(V_801D4414 **)n)->m(p, a) == 0) {
            r = 1;
        }
    }
    if (r != 0) {
        return 0;
    }
    if (*(s32 *)(p + 800) != 0 && *(void **)(p + 784) != NULL) {
        fn_801D3020(p, *(void **)(p + 784));
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D4414 */

namespace m801D44D8 {

extern "C" {
struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void v20(int); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void v79(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct It { u8 pad[20]; A *obj; };
int fn_801BDAD0(void *, f32, f32);
int fn_801DA5E8(A *, u32, f32, f32);
static inline void offs(u8 *q, f32 dx, f32 dy) {
    F(q,0x58,f32) += dx; F(q,0x5c,f32) += dy; F(q,0x60,f32) += dx; F(q,0x64,f32) += dy;
}
struct Vec { It *data; u8 pad[0x40]; u32 size; It *get(u32 idx) { if (!data || idx >= size) return 0; return &data[idx]; } };
static inline It *getItem(A *p) {
    u8 *s = F(p,0x308,u8*);
    if (!s) return 0;
    return F(p,0x31c,Vec).get(F(s,0x20,u32));
}
int fn_801D44D8(A *p, u32 key, f32 x, f32 y) {
    F(F(p,0x74,u8*),0x1c,int) = 0;
    F(F(p,0x74,u8*),0x20,int) = 0;
    F(p,0x318,int) = 0;
    if (fn_801BDAD0(p, x, y)) {
        u8 *s = F(p,0x308,u8*);
        if (s) {
            if (getItem(p)) {
                A *q = getItem(p)->obj;
                if (q) {
                    F(p,0x318,u8*) = s;
                    F(q,0x17c,A*) = p;
                    { f32 nx = -F(q,0x58,f32); f32 ny = -F(q,0x5c,f32); offs((u8 *)q, nx, ny); }
                    offs((u8 *)q, x, y);
                    q->v25();
                    q->v20(1);
                    F(q,0x6c,u32) |= 2;
                    q->v79();
                    return 1;
                }
            }
        } else {
            fn_801DA5E8(p, key, x, y);
            return 0;
        }
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D44D8 */

namespace m801D46D4 {
extern "C" {
/* Functions from 0x801D46D4 to 0x801D4734, found by decomp-toolkit. */
extern f32 lbl_803651AC;

s32 fn_801D46D4(void* arg0, f32 farg0, f32 farg1) {
    void* temp_r4 = *(void**)((char*)arg0 + 0x74);
    if (farg1 > *(f32*)((char*)temp_r4 + 0x11C) * lbl_803651AC) {
        *(s32*)((char*)temp_r4 + 0x1C) = 1;
    } else {
        *(s32*)((char*)temp_r4 + 0x1C) = 2;
    }
    temp_r4 = *(void**)((char*)arg0 + 0x74);
    if (farg0 > *(f32*)((char*)temp_r4 + 0x118) * lbl_803651AC) {
        *(s32*)((char*)temp_r4 + 0x20) = 1;
    } else {
        *(s32*)((char*)temp_r4 + 0x20) = 2;
    }
    return 1;
}

} /* extern "C" */
} /* namespace m801D46D4 */

namespace m801D4734 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { Node *parent; Node *child; Node *next; Node *prev; Node *selNext; int pad14; int open; int sel; };
struct Scr { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void key(u32, int); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79(); virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void setPos(f32); };
struct Lis { virtual int is(int); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void onCursor(void *, Node *); };
struct LNode { Lis *obj; int on; LNode *next; };
struct Own { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void post(int, u32); };
extern f32 lbl_80365188;
extern f32 lbl_8036518C;
extern f32 lbl_803596E0[];
static inline Node *nextVis(Node *n) {
    Node *r;
    if ((r = n->child) && n->open) return r;
    if ((r = n->next)) return r;
    for (r = n->parent; r; r = r->parent) {
        if (r->next) { r = r->next; break; }
    }
    return r;
}
static inline f32 rowPos(u8 *t, Node *n) {
    Node *q = F(t,0x2ec,Node*);
    f32 y = lbl_80365188;
    for (; q; ) {
        if (q == n) return y;
        q = nextVis(q);
        y += F(t,0x334,f32);
    }
    return -lbl_803596E0[0];
}
static inline void scrollTo(u8 *t, Node *n) {
    f32 y;
    if (!n) return;
    y = rowPos(t, n);
    if (y != -lbl_803596E0[0]) {
        f32 top;
        f32 row;
        f32 vis;
        f32 bot;
        vis = (F(t,0x54,f32) - F(t,0x4c,f32)) / F(t,0x334,f32);
        top = -F(t,0x33c,f32) / F(t,0x334,f32);
        row = y / F(t,0x334,f32);
        F(t,0x310,Node*) = n;
        bot = top + vis;
        if (row < top) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(row);
        }
        if (row >= bot - lbl_8036518C) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(lbl_8036518C + (row - vis));
        }
    }
}
static inline void scrollTo2(u8 *t, Node *n) {
    f32 y;
    if (!n) return;
    y = rowPos(t, n);
    if (y != -lbl_803596E0[0]) {
        f32 bot;
        f32 top;
        f32 row;
        f32 vis;
        vis = (F(t,0x54,f32) - F(t,0x4c,f32)) / F(t,0x334,f32);
        top = -F(t,0x33c,f32) / F(t,0x334,f32);
        row = y / F(t,0x334,f32);
        F(t,0x310,Node*) = n;
        bot = top + vis;
        if (row < top) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(row);
        }
        if (row >= bot - lbl_8036518C) {
            if (F(t,0x2e0,Scr*)) F(t,0x2e0,Scr*)->setPos(lbl_8036518C + (row - vis));
        }
    }
}
struct Own3 { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void lose(u8 *); };
u32 fn_801DAD34(u8 *, f32, f32);
int fn_801BDAD0(u8 *, f32, f32);
void fn_801D2780(u8 *t, Node *n);
void fn_801D29F8(u8 *t, Node *n);
static inline int isAnc(Node *q, Node *n) {
    int r;
    for (; q; q = q->parent) {
        if (q == n) { r = 1; goto done; }
    }
    r = 0;
done:
    return r;
}
static inline void ens(u8 *t, Node *n) { if (isAnc(F(t,0x310,Node*), n)) scrollTo2(t, n); }
static inline void unselR(u8 *t, Node *&s, Node *n) {
    Node *pv = 0;
    if (n->sel == 0) return;
    if (s == n) {
        F(t,0x314,Node*) = s->selNext;
        n->selNext = 0;
        n->sel = 0;
        return;
    }
    for (; s != n && s; s = s->selNext) pv = s;
    if (s) {
        pv->selNext = n->selNext;
        n->selNext = 0;
        n->sel = 0;
    }
}
int fn_801D4734(u8 *t, u32 key, f32 x, f32 y) {
    Node *pv2;
    Node *s3;
    LNode *la;
    LNode *lb;
    LNode *lc;
    Node *pv3;
    Node *s2;
    Node *cur2;
    LNode *ld;
    LNode *le;
    LNode *lf;
    LNode *lg;
    Node *s;
    if (fn_801DAD34(t, x, y) == 1) return 1;
    if (!(F(t,0x6c,u32) & 2)) return 0;
    if (fn_801BDAD0(t, x, y)) {
        if (F(t,0x144,u32) != 32 && F(t,0x11c,Own3*)) F(t,0x11c,Own3*)->lose(t);
        ((Scr *)t)->key(key, 1);
        F(t,0x144,u32) = 32;
        if (F(t,0x308,Node*) != 0) {
            scrollTo(t, F(t,0x308,Node*));
            if (key & 0x30) {
#define cur ((Node *)key)
                s = F(t,0x314,Node*);
                key = (u32)F(t,0x308,Node*);
                if (s == 0 || F(t,0x32c,int) == 0) {
                    for (lf = F(t,0x88,LNode*); lf; lf = lf->next) {
                        if (lf->obj->is(19) && lf->on) lf->obj->onCursor(t, cur);
                    }
                    while (s) {
                        Node *pv;
                        s->sel = 0;
                        pv = s;
                        s = s->selNext;
                        pv->selNext = 0;
                    }
                    if (cur) { cur->sel = 1; cur->selNext = 0; }
                    F(t,0x314,Node*) = cur;
                    for (lg = F(t,0x88,LNode*); lg; lg = lg->next) {
                        if (lg->obj->is(19) && !lg->on) lg->obj->onCursor(t, cur);
                    }
                } else if (cur->sel != 0) {
                    unselR(t, s, cur);
                } else {
                    for (la = F(t,0x88,LNode*); la; la = la->next) {
                        if (la->obj->is(19) && la->on) la->obj->onCursor(t, cur);
                    }
                    while (s->selNext) s = s->selNext;
                    s->selNext = cur;
                    cur->sel = 1;
                    for (la = F(t,0x88,LNode*); la; la = la->next) {
                        if (la->obj->is(19) && !la->on) la->obj->onCursor(t, cur);
                    }
                }
#undef cur
            } else if (key & 3) {
                fn_801D29F8(t, F(t,0x308,Node*));
            } else {
                cur2 = F(t,0x308,Node*);
                s2 = F(t,0x314,Node*);
                for (lb = F(t,0x88,LNode*); lb; lb = lb->next) {
                    if (lb->obj->is(19) && lb->on) lb->obj->onCursor(t, cur2);
                }
                while (s2) {
                    s2->sel = 0;
                    pv2 = s2;
                    s2 = s2->selNext;
                    pv2->selNext = 0;
                }
                if (cur2) { cur2->sel = 1; cur2->selNext = 0; }
                F(t,0x314,Node*) = cur2;
                for (lc = F(t,0x88,LNode*); lc; lc = lc->next) {
                    if (lc->obj->is(19) && !lc->on) lc->obj->onCursor(t, cur2);
                }
            }
            return 1;
        } else {
            Node *o = F(t,0x30c,Node*);
            if (o) {
                if (o->child) {
                    o->open = (u32)__cntlzw(o->open) >> 5;
                    { Node *n = F(t,0x30c,Node*); if (!n->open) fn_801D2780(t, n); }
                    ens(t, F(t,0x30c,Node*));
                    F(t,0x164,int) = 1;
                }
            } else {
                s3 = F(t,0x314,Node*);
                for (ld = F(t,0x88,LNode*); ld; ld = ld->next) {
                    if (ld->obj->is(19) && ld->on) ld->obj->onCursor(t, 0);
                }
                while (s3) {
                    s3->sel = 0;
                    pv3 = s3;
                    s3 = s3->selNext;
                    pv3->selNext = 0;
                }
                F(t,0x314,Node*) = 0;
                for (le = F(t,0x88,LNode*); le; le = le->next) {
                    if (le->obj->is(19) && !le->on) le->obj->onCursor(t, 0);
                }
            }
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D4734 */

namespace m801D4F88 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_801DAEE4(void *, f32, f32);
s32 fn_801BDAD0(void *, f32, f32);
void fn_801D5084(void *, void *, f32, f32, f32, f32);

s32 fn_801D4F88(u8 *p, f32 x, f32 y) {
    fn_801DAEE4(p, x, y);
    if (!(*(u32 *)(p + 0x6C) & 2)) {
        return 0;
    }
    if (fn_801BDAD0(p, x, y) != 0) {
        *(s32 *)(p + 0x308) = 0;
        *(s32 *)(p + 0x30C) = 0;
        *(s32 *)(p + 0x2F0) = 0;
        *(s32 *)(p + 0x2F4) = 0;
        fn_801D5084(p, *(void **)(p + 0x2EC), x, y, *(f32 *)(p + 0x338) + (*(f32 *)(p + 0x48) + *(f32 *)(p + 0x340)), *(f32 *)(p + 0x4C) + *(f32 *)(p + 0x33C));
        *(s32 *)(p + 0x308) = *(s32 *)(p + 0x2F0);
        if (*(u32 *)(p + 0x308) == 0 && *(u32 *)(p + 0x2F4) != 0) {
            *(s32 *)(p + 0x30C) = *(s32 *)(p + 0x2F4);
        }
    } else {
        *(s32 *)(p + 0x308) = 0;
    }
    return 0;
}

} /* extern "C" */

} /* namespace m801D4F88 */

namespace m801D5084 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V5084 { f32 x; f32 y; f32 z; f32 w; };
struct T5084 { u8 pad[0x24]; void *f24; u8 pad28[8]; u8 f30[4]; };
struct N5084 { u8 pad[4]; N5084 *f4; N5084 *f8; u8 padc[8]; void *f14; s32 f18; };
struct P5084 { u8 pad[0x68]; void *f68; u8 pad6c[0x144 - 0x6c]; void *f144; u8 pad148[0x2f0 - 0x148]; N5084 *f2f0; N5084 *f2f4; s32 f2f8; u8 pad2fc[4]; void *f300; u8 pad304[0x334 - 0x304]; f32 f334; f32 f338; u8 pad33c[0x34c - 0x33c]; f32 f34c; };
void fn_801CCC7C(void *, s32 *, T5084 **, void *, void *);
void fn_8012D0A4(void *, V5084 *, void *, f32 *, void *, s32, f32, f32, f32);
extern f32 lbl_80365188;
extern f32 lbl_803651B0;
extern f32 lbl_803651AC;
extern f32 lbl_8035B038;
extern f32 lbl_8035B03C;

f32 fn_801D5084(P5084 *p, N5084 *n, f32 mx, f32 my, f32 x, f32 y) {
    T5084 *t;
    s32 c;
    V5084 r;
    f32 h;
    f32 v10[2];
    c = 0;
    if (!n) return lbl_80365188;
    h = p->f334;
    f32 bot = y;
    bot += h;
    if (my >= y && my <= bot) {
        fn_801CCC7C(p->f300, &c, &t, p->f144, p->f68);
        void *a0 = t->f24; void *a4 = t->f30;
        *(volatile f32 *)&v10[0] = x + p->f34c;
        *(volatile f32 *)&v10[1] = y;
        fn_8012D0A4(a0, &r, *(void * volatile *)&n->f14, v10, a4, 0x11, *(volatile f32 *)&lbl_803651B0, *(volatile f32 *)&lbl_8035B038, *(volatile f32 *)&lbl_8035B03C);
        *(volatile f32 *)&r.x -= p->f34c;
        if (my - y < *(volatile f32 *)&lbl_803651AC * p->f334) {
            p->f2f8 = 1;
        } else {
            p->f2f8 = 0;
        }
        if (mx >= r.x && mx < r.z) {
            p->f2f0 = n;
            p->f2f4 = 0;
        } else {
            r.x = x - p->f338;
            r.z = x;
            if (mx >= r.x && mx < r.z) {
                p->f2f0 = 0;
                p->f2f4 = n;
            } else {
                p->f2f0 = 0;
                p->f2f4 = 0;
            }
        }
    }
    if (n->f18) h += fn_801D5084(p, n->f4, mx, my, x + p->f338, y + h);
    h += fn_801D5084(p, n->f8, mx, my, x, y + h);
    return h;
}

} /* extern "C" */

} /* namespace m801D5084 */

namespace m801D52A0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct Nd { Nd *parent; Nd *child; Nd *next; Nd *prev; u32 f16; u32 a; u32 f24; u32 f28; u32 c; u32 e; u32 d; };
struct Blk { Nd *nodes; Blk *next; };
struct P { u8 pad[356]; s32 dirty; Blk *blks; Nd *free; u8 pad368[4]; u32 grow; u8 pad376[372]; Nd *root; u8 pad752[100]; s32 cnt; };
extern void *lbl_8035AFCC;
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
static inline void Link(Blk *b, u32 n) {
    u32 i;
    for (i = 0; i < n - 1; i++) b->nodes[i].next = &b->nodes[i + 1];
}
Nd *fn_801D52A0(P *p, u32 a, Nd *parent, u32 c, u32 d, u32 e) {
    Nd *n;
    p->cnt++;
    if (p->free == 0) {
        u32 cnt = p->grow;
        Blk *b;
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        b = new Blk;
        fn_800F7E98();
        if (!b) fn_800604C4(-4, 0, 0, 0);
        b->next = p->blks;
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        b->nodes = new Nd[cnt];
        fn_800F7E98();
        if (!b->nodes) fn_800604C4(-4, 0, 0, 0);
        p->blks = b;
        Link(b, cnt);
        b->nodes[cnt - 1].next = p->free;
        p->free = b->nodes;
    }
    n = p->free;
    p->free = n->next;
    n->next = 0;
    n->a = a;
    n->f24 = 0;
    n->f28 = 0;
    n->child = 0;
    n->next = 0;
    n->prev = 0;
    n->f16 = 0;
    n->parent = parent;
    n->e = e;
    n->d = d;
    n->c = c;
    if (!parent) {
        if (!p->root) p->root = n;
        else {
            Nd *t = p->root;
            while (t->next) t = t->next;
            n->prev = t;
            t->next = n;
        }
    } else {
        Nd *t = parent->child;
        if (!t) parent->child = n;
        else {
            while (t->next) t = t->next;
            n->prev = t;
            t->next = n;
        }
    }
    p->dirty = 1;
    return n;
}

} /* extern "C" */

} /* namespace m801D52A0 */

namespace m801D55C0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

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

} /* namespace m801D55C0 */
