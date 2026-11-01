// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct G80131E80_B { s32 d[5]; };
struct G80131E80 : G80131E80_B {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(s32, s32, s32, s32);
};
void fn_80131E80(G80131E80 *o, s32 a, s32 b, s32 c) { o->v17(a, b, 0, c); }

} /* extern "C" */
