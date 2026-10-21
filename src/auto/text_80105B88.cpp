// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C80105818 { public: u8 d[0x28]; C80105818(); ~C80105818(); };
class C80108120 { public: u8 d[0x34]; C80108120(); ~C80108120(); };
struct B { virtual void p0(); virtual void reserve(u32); virtual void p2(); virtual void p3(); virtual void *get(u32); };
struct Src { virtual void p0(); virtual B *buf(); };
struct P { void *h; u8 pad4[0xC]; virtual void p0(); virtual void clr(); Src *src; B *b; u32 na; u32 nb; C80105818 *a; C80108120 *bb; u32 pad2C; u32 nc; u32 k; };
extern "C" { void fn_800F8E38(P *, u32); void fn_80104F78(void *, void *, void *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AA40; }

extern "C" void fn_80105B88(P *p, Src *src, u32 na, u32 nb, u32 nc) {
    u32 i;
    u32 j;
    if (p->h != 0) {
        p->clr();
    }
    p->src = src;
    p->na = na;
    p->nb = nb;
    fn_800F8E38(p, p->nb + p->na);
    p->b = src->buf();
    p->nc = nc;
    p->b->reserve((p->nb + p->na + p->nc) * 2);
    p->k = 0;
    if (p->na != 0) {
        if (!lbl_8035AA40) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AA40);
        p->a = new C80105818[p->na];
        fn_800F7E98();
        if (!p->a) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->na; i++) {
            fn_80104F78(&p->a[i], p->b->get(p->k), p->b->get(p->k + 1));
            p->k += 2;
        }
    }
    if (p->nb != 0) {
        if (!lbl_8035AA40) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AA40);
        p->bb = new C80108120[p->nb];
        fn_800F7E98();
        if (!p->bb) fn_800604C4(-4, 0, 0, 0);
        for (j = 0; j < p->nb; j++) {
            fn_80104F78(&p->bb[j], p->b->get(p->k), p->b->get(p->k + 1));
            p->k += 2;
        }
    }
}

} /* extern "C" */
