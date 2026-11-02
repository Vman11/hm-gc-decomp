// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P { u8 pad[108]; u32 fl; u8 q[128 - 112]; virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void set(int); };
struct O { u8 p[360]; P *a360; P *a364; P *a368; P *a372; P *a376; P **arr; u8 q[496 - 384]; u32 n; };
void fn_801DBE0C(O *, void *);
P *fn_801C05EC(O *, void *, P *);
int fn_801CA588(O *o, void *b) {
    u32 i;
    fn_801DBE0C(o, b);
    if (o->a368) o->a368 = fn_801C05EC(o, b, o->a368);
    if (o->a372) o->a372 = fn_801C05EC(o, b, o->a372);
    if (o->a364) {
        o->a364 = fn_801C05EC(o, b, o->a364);
        o->a364->set(0);
        o->a364->fl &= ~2;
    }
    if (o->a360) o->a360 = fn_801C05EC(o, b, o->a360);
    if (o->a376) o->a376 = fn_801C05EC(o, b, o->a376);
    for (i = 0; i < o->n; i++) if (o->arr[i]) o->arr[i] = fn_801C05EC(o, b, o->arr[i]);
    return 0;
}

} /* extern "C" */
