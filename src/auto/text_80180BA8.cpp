// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct It { u8 b[240]; };
struct Nd { u32 a; It *items; u8 p1[36]; Nd *ch; u8 p2[88 - 48]; u16 ni; u8 p3[108 - 90]; u16 nc; u8 p4[120 - 110]; };
void fn_8019282C(It *, void *);
void fn_80180BA8(Nd *n, void *a) {
    u32 i;
    for (i = 0; i < n->ni; i++) fn_8019282C(&n->items[i], a);
    for (i = 0; i < n->nc; i++) fn_80180BA8(&n->ch[i], a);
}

} /* extern "C" */
