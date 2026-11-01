// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { s32 v[3]; } V8010904C;
typedef struct { u8 pad[0x14]; V8010904C *arr; } S8010904C;
V8010904C *fn_800F8274(S8010904C *p, s32 name);
void fn_80108EB4(V8010904C **o, s32 a, V8010904C v, s32 b, s32 j);
void fn_8010904C(S8010904C *p, s32 a, V8010904C v, s32 b, s32 name) {
    V8010904C *arr = p->arr;
    s32 j = fn_800F8274(p, name) - arr;
    fn_80108EB4(&p->arr, a, v, b, j);
}

} /* extern "C" */
