// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct T8010EE60 { u8 pad[4]; s32 *arr; };
struct P8010EE60 { u8 pad[0x10]; };
struct O8010EE60 : P8010EE60 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual s32 v5(s32 i); u8 pad14[0xc]; u32 n; bool ok(u32 k) { return k < n; } };
static inline bool ok8010EE60(O8010EE60 *o, u32 k) { return k < o->n; }
struct S8010EE60 { u8 pad[4]; O8010EE60 *o; T8010EE60 *t; s32 base; };
s32 fn_8010EE60(S8010EE60 *p, s32 i) {
    s32 idx;
    if (p->t != 0 && p->t != 0) idx = p->t->arr[p->base + i];
    else idx = p->base + i;
    if (p->o->ok(p->base + i)) return p->o->v5(idx);
    return 0;
}
}
