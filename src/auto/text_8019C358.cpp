// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C80195268 { public: u32 x0; u32 pad4[4]; C80195268 *next; u32 pad18[2]; C80195268(); };
class C80195238 { public: u32 pad0[4]; C80195238 *next; u32 pad14[3]; C80195238(); };
class C80198880 { public: u8 d[0x24]; C80198880(); ~C80198880(); };
class C8019F8B8 { public: u8 d[0x18]; C8019F8B8(); ~C8019F8B8(); };
class C801A002C { public: u8 d[0x18]; C801A002C(); ~C801A002C(); };
class C801A07A0 { public: u8 d[0x18]; C801A07A0(); ~C801A07A0(); };
class C801897A8 { public: u8 d[0x2C]; C801897A8(); ~C801897A8(); };
struct Heap { u8 pad[0x18]; u32 a; u32 b; };
struct P { u32 na; C80195268 *a; C80195268 *afree; u32 nb; C80195238 *b; C80195238 *bfree; u32 nc; C80198880 *c; u32 nd; C8019F8B8 *d; u32 ne; C801A002C *e; u32 nf; C801A07A0 *f; u32 ng; C801897A8 *g; };
extern "C" { void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern Heap *lbl_8035AE88; }

#define ALLOC(dst, T, n) \
    if (!lbl_8035AE88) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(lbl_8035AE88); \
    dst = new T[n]; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);

#define GROW() \
    if (lbl_8035AE88->a >= 5) { \
        lbl_8035AE88->b = lbl_8035AE88->a; \
    } else { \
        lbl_8035AE88->b = 5; \
    }

extern "C" void fn_8019C358(P *p) {
    C80195268 *la;
    C80195268 *ea;
    C80195238 *lb;
    C80195238 *eb;
    if (p->na == 0) {
        p->na = 1000;
    }
    if (p->nb <= p->na) {
        p->nb = p->na * 3;
    }
    GROW();
    ALLOC(p->a, C80195268, p->na);
    ALLOC(p->b, C80195238, p->nb);
    lbl_8035AE88->b = lbl_8035AE88->a;
    p->afree = p->a;
    for (ea = p->a, la = ea + p->na - 1; ea < la; ea++) {
        ea->x0 = 0;
        ea->next = ea + 1;
    }
    ea->next = 0;
    p->bfree = p->b;
    for (eb = p->b, lb = eb + p->nb - 1; eb < lb; eb++) {
        eb->next = eb + 1;
    }
    eb->next = 0;
    if (p->nc != 0) {
        GROW();
        ALLOC(p->c, C80198880, p->nc);
        lbl_8035AE88->b = lbl_8035AE88->a;
    }
    if (p->nd != 0) {
        ALLOC(p->d, C8019F8B8, p->nd);
    }
    if (p->ne != 0) {
        ALLOC(p->e, C801A002C, p->ne);
    }
    if (p->nf != 0) {
        ALLOC(p->f, C801A07A0, p->nf);
    }
    if (p->ng != 0) {
        GROW();
        ALLOC(p->g, C801897A8, p->ng);
        lbl_8035AE88->b = lbl_8035AE88->a;
    }
}

} /* extern "C" */
