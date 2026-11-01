// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 pad[3]; u32 v[2]; u32 a, b, p, c, d; } U;
typedef struct { u32 pad[46]; int on; u32 pad2[10]; u32 a, b, c, d; } T;
extern void fn_80249A18(T *o, void *p);
void fn_80241D80(T *o, U *u) {
#if 3==1
    u32 a = u->a, b = u->b, c = u->c, d = u->d;
#elif 3==2
    u32 d = u->d, c = u->c, b = u->b, a = u->a;
#else
    u32 a, b, c, d;
    d = u->d; c = u->c; b = u->b; a = u->a;
#endif
    if (o->on) {
        o->a = a; o->b = b; o->c = c; o->d = d;
        fn_80249A18(o, &u->v);
    }
}
