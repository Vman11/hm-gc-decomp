// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct N { u8 p[8]; struct N *next; } N;
void *fn_800F8274(N *, void *);
void *fn_800F9398(N *__restrict t, void *__restrict k) {
    N *n;
    for (n = t->next; n; n = n->next) {
        void *r = fn_800F8274(n, k);
        if (r) return r;
    }
    return 0;
}

}
