// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class N { public: N *next; N *prev; u8 pad8[12]; void *owner; u32 pad18; private: u32 dummy[0]; };
struct L { N **data; u32 pad4; u32 count; u32 padC; };
struct V3 { u32 a[3]; };
struct P { u32 pad0; V3 v; void *h; u32 x14; N *arrA; N *arrB; N *head; N *tail; L la; L lb; u32 total; };
extern "C" { void fn_8011DE7C(void *, N *); void fn_8011DD10(void *, N *); void fn_80118F3C(L *, N *); void fn_80118FF8(L *); void fn_80119040(L *, u32); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *memset(void *, int, u32); extern void *lbl_8035AB50; extern V3 lbl_8029BF10; }

static inline void push(P *p, N *n) {
    if ((n->next = p->head) != 0) {
        p->head->prev = n;
    } else {
        p->tail = n;
    }
    p->head = n;
    n->prev = 0;
}

static inline void link(P *p, N *a, u32 cnt) {
    u32 i;
    for (i = 0; i < cnt; i++, a++) {
        push(p, a);
    }
}

extern "C" void fn_8011D1C4(P *p, void *h, u32 na, u32 nb) {
    N *n;
    u32 i;
    while (p->la.count != 0) {
        n = *p->la.data;
        fn_8011DE7C(n->owner, n);
        fn_80118F3C(&p->la, n);
        push(p, n);
    }
    while (p->lb.count != 0) {
        n = *p->lb.data;
        fn_8011DD10(n->owner, n);
        fn_80118F3C(&p->lb, n);
        push(p, n);
    }
    fn_80118FF8(&p->la);
    fn_80118FF8(&p->lb);
    if (p->arrA) delete[] p->arrA;
    if (p->arrB) delete[] p->arrB;
    p->h = 0;
    p->arrA = 0;
    p->arrB = 0;
    p->v = lbl_8029BF10;
    p->x14 = 0;
    p->h = h;
    p->total = na + nb;
    if (na != 0) {
        if (!lbl_8035AB50) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AB50);
        p->arrA = new N[na];
        fn_800F7E98();
        if (!p->arrA) fn_800604C4(-4, 0, 0, 0);
        memset(p->arrA, 0, na * sizeof(N));
        fn_80119040(&p->la, na);
        link(p, p->arrA, na);
    }
    if (nb != 0) {
        if (!lbl_8035AB50) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AB50);
        p->arrB = new N[nb];
        fn_800F7E98();
        if (!p->arrB) fn_800604C4(-4, 0, 0, 0);
        memset(p->arrB, 0, nb * sizeof(N));
        fn_80119040(&p->lb, nb);
        link(p, p->arrB, nb);
    }
}

} /* extern "C" */
