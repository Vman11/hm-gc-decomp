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
