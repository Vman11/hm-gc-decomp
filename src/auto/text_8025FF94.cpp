// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct C25G { u8 pad[8]; s32 f8; };
struct B25G { C25G *f0; };
struct N25G { B25G *f0; void *f4; u8 pad8[4]; N25G *fc; N25G *f10; };
struct Key25G { u8 d[8]; };
struct E25G { u8 pad[0xa0]; virtual void v0(); virtual void add(const N25G *); };
struct P25G { u8 pad[0x1c]; E25G *f1c; };
inline s32 fn_8025FF8C(C25G *y) { return y->f8; }
inline s32 fn_8025FF80(B25G *x) { return fn_8025FF8C(x->f0); }
inline s32 fn_80229770(const N25G *n) { return fn_8025FF80(n->f0); }
inline N25G *fn_8010F1B8(const N25G *n) { return n->f10; }
inline N25G *fn_8010F1B0(const N25G *n) { return n->fc; }
inline void *fn_8010CA74(const N25G *n) { return n->f4; }
void fn_800F6FBC(void *, Key25G *);
void fn_800F7044(Key25G *);
void fn_800F87F0(P25G *, Key25G *, E25G *);

void fn_8025FF94(P25G *p, const N25G *n, u32 *idx) {
    if (!n) return;
    if (fn_80229770(n) == 0) {
        Key25G k;
        fn_800F6FBC(fn_8010CA74(n), &k);
        fn_800F7044(&k);
        fn_800F87F0(p, &k, &p->f1c[*idx]);
        p->f1c[*idx].add(n);
        (*idx)++;
    }
    if (fn_8010F1B8(n)) fn_8025FF94(p, fn_8010F1B8(n), idx);
    if (fn_8010F1B0(n)) fn_8025FF94(p, fn_8010F1B0(n), idx);
}

}

} /* extern "C" */
