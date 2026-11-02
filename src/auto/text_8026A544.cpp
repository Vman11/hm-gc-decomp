// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N { virtual int v0(); virtual int test(); u8 p[464]; N *next; };
struct P { u8 p[176]; N *head; };
struct S { P *p; u32 key; };
struct O { u8 p[72]; S s[1]; };
int fn_8026A544(O *o, u32 key, s32 *idx) {
    s32 i = *idx;
    N *n;
    if (o->s[i].key != key) return 0;
    for (n = o->s[i].p->head; n; n = n->next) if (n->test()) return 1;
    return 0;
}

} /* extern "C" */
