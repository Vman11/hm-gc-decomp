// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

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
