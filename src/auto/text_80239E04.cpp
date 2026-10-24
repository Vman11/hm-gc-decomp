// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
struct Item { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual s32 inUse(); };
struct TI { u8 pad[28]; u32 size; };
struct Tmp { u32 a, b; };
struct Heap;
extern "C" {
extern Heap *lbl_8035B3B0;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(Heap *);
void fn_800F7E98(void);
u8 *fn_8023B7DC(void *, s32, u32);
TI *fn_800F85F0(void *, s32);
void fn_8023B770(void *, s32, Tmp *);
void fn_800F80DC(void *, Tmp *, s32 *);
}
struct C8023A51C {
    u32 cnt; u32 grow; s32 f8; u8 pad[4]; u32 f16; u8 *items; C8023A51C *next; void *f28;
    C8023A51C() { f8 = -1; f28 = 0; items = 0; cnt = 0; grow = 4; f16 = 0; next = 0; }
};
extern "C" {
inline void fn_80239DB4(C8023A51C *p) {
    if (p->cnt == 0) p->cnt = 4;
    p->items = fn_8023B7DC(p->f28, p->f8, p->cnt);
}
inline BOOL fn_8023A138(C8023A51C *p) { return p->items != 0; }
inline u32 fn_8023A14C(TI *t) { return t->size; }
inline Item *fn_8023A490(C8023A51C *p, u32 i) { TI *t = fn_800F85F0(p->f28, p->f8); u8 *r = p->items; r += i * fn_8023A14C(t); return (Item *)r; }
inline void fn_8023A444(C8023A51C *np, u32 n, Tmp *t, void *x) {
    s32 v;
    np->f28 = x;
    np->cnt = n;
    fn_800F80DC(x, t, &v);
    np->f8 = v;
}
inline void fn_8023A548(C8023A51C *p) {
    Tmp t;
    if (lbl_8035B3B0 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B3B0);
    p->next = new C8023A51C;
    fn_800F7E98();
    if (p->next == 0) fn_800604C4(-4, 0, 0, 0);
    fn_8023B770(p->f28, p->f8, &t);
    fn_8023A444(p->next, p->grow, &t, p->f28);
}

Item *fn_80239E04(C8023A51C *p) {
    u32 i;
    if (!fn_8023A138(p)) fn_80239DB4(p);
    for (i = 0; i < p->cnt; i++) {
        Item *it = fn_8023A490(p, i);
        if (!it->inUse()) return it;
    }
    if (p->next == 0) fn_8023A548(p);
    return fn_80239E04(p->next);
}
}

} /* extern "C" */
