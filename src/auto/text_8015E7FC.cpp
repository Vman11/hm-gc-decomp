#include "common.h"
extern "C" {
}
struct Ctx;
struct It;
typedef void (It::*PM)(Ctx *);
struct It { void *f0; u8 pad4[32]; u16 fl36; u16 k38; u8 pad40[44]; f32 *v84; PM pm; };
struct M { u8 pad[44]; u32 f44; u8 pad48[248]; u32 f296; };
struct L { u32 n; M **arr; };
struct A { u8 pad[28]; L l; u8 pad36[40]; It *items; };
struct R { u8 pad[12]; u32 f12; u8 pad16[276]; M *ovr; u8 pad296[6156]; Ctx *ctx; void *f6456; };
struct Ctx { u8 pad[0x279FC]; f32 c[4]; };
extern "C" {
void fn_8015C998(M *, void *, void *);
void fn_8016BFF0(Ctx *, It *, M *, R *);
void fn_8015D624(M *, R *, u32);
void fn_8015FD3C(It *, Ctx *);
void fn_8015C95C(M *, Ctx *, u32);
void *fn_80164310(R *, It *);
void fn_8015F4A0(It *, R *, void *);
void fn_8016BC04(Ctx *, R *);
void fn_8016BB80(Ctx *, void *, void *, R *);
void fn_8016BAF8(Ctx *, void *, void *, R *);

void fn_8015E7FC(A *a, void *rp, int start, int cnt, L *l, void *p8, void *p9) {
    Ctx *c;
    u32 k;
    u32 pass;
    R *r;
    It *it;
    It *end;
    It *first;
    M *m;
    int drew;
    int any;
    drew = 0;
    any = 0;
    r = (R *)rp;
    c = r->ctx;
    if (!l) l = &a->l;
    if (l->n < 1) return;
    it = a->items + start;
    end = it + cnt;
    while (it < end) {
        if (!(it->fl36 & 1)) { it++; continue; }
        k = it->k38;
        first = it;
        m = l->arr[k];
        if (!m) { it++; continue; }
        if (r->ovr) m = r->ovr;
        if ((m->f44 & 0x380) && ((r->f12 & 0x10) || ((r->f12 & 0x20) && (m->f44 & 0x300)))) {
            do {
                if (it->fl36 & 1) { fn_8016BFF0(c, it, m, r); any = 1; }
                it++;
            } while (it < end && k == it->k38);
            if (!(m->f44 & 0x300)) continue;
            it = first;
        }
        fn_8015C998(m, r->f6456, it->f0);
        pass = 0;
        do {
            it = first;
            fn_8015D624(m, r, pass);
            do {
                if (it->fl36 & 1) {
                    if ((m->f44 & 0x300) && pass == 0 && !(r->f12 & 0x10)) { fn_8016BFF0(c, it, m, r); drew = 1; }
                    fn_8015FD3C(it, c);
                    fn_8015C95C(m, c, pass);
                    void *z = fn_80164310(r, it);
                    if (z) {
                        f32 *v = it->v84;
                        if (v) { c->c[0] = v[0]; c->c[1] = v[1]; c->c[2] = v[2]; c->c[3] = v[3]; }
                        fn_8015F4A0(it, r, z);
                    } else {
                        (it->*it->pm)(c);
                    }
                }
                it++;
            } while (it < end && k == it->k38);
            pass++;
        } while (pass < m->f296);
    }
    if (drew) fn_8016BC04(r->ctx, r);
    if (p8) {
        if (any) fn_8016BB80(c, p8, p9, r);
        else fn_8016BAF8(c, p8, p9, r);
    }
}
}
extern "C" {
}
