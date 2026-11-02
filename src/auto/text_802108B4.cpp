// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T802108B4 { virtual void v0(); virtual void v1(); virtual s32 v2(); };
struct P802108B4 { u8 pad[0x10]; };
struct O802108B4 : P802108B4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual s32 v5(s32 a, s32 b, s32 c, T802108B4 **t); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(T802108B4 *t); };
struct S802108B4 { u8 pad[4]; O802108B4 *o; };
static inline s32 fin(S802108B4 *p, T802108B4 **t) { s32 k = (*t)->v2(); p->o->v9(*t); return k; }
s32 fn_802108B4(S802108B4 *p, s32 a, s32 b, s32 c) {
    T802108B4 *t;
    s32 r = p->o->v5(a, b, c, &t);
    if (r == 7) return fin(p, &t);
    return r;
}

} /* extern "C" */
