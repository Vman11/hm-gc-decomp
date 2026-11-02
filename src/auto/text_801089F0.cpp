// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S;
struct Ev { struct EH *h; u32 mask; };
struct EH { u32 f0; u32 fl; };
typedef void (S::*PMF)(Ev *);
struct N { N *next; S *obj; PMF pmf; u32 mask; };
void fn_801089F0(N **o, Ev *e) {
    u32 m = e->mask;
    N *n = *o;
    if (!(e->h->fl & 2)) return;
    while (n) {
        if (!(m & n->mask)) { n = n->next; continue; }
        {
            S *obj = n->obj; PMF f = n->pmf; n = n->next;
            (obj->*f)(e);
        }
    }
}

} /* extern "C" */
