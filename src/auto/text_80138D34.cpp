// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct V80138D34 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual s32 v6(); };
struct S80138D34 { u8 pad[0xb8]; V80138D34 *v; s32 fbc[4]; s32 fcc[4]; };
void fn_80138D34(S80138D34 *s, s32 x, s32 k) {
    s->fcc[k] = x;
    s->fbc[k] = s->v->v6();
}
}
