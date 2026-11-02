// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { f32 x, y, z, w; } Q;
typedef struct N { u8 p[8]; struct N *parent; struct N *next; struct N *child; u8 q[0x20 - 0x14]; Q world; Q local; } N;
void fn_801003A8(Q *, Q *, Q *);
void fn_80105F88(N *);
void fn_80106120(N *n) {
    if (n->parent == 0) {
        n->world.x = n->local.x;
        n->world.y = n->local.y;
        n->world.z = n->local.z;
        n->world.w = n->local.w;
    } else {
        fn_801003A8(&n->world, &n->local, &n->parent->world);
    }
    for (n = n->child; n != 0; n = n->next) {
        fn_80105F88(n);
    }
}
