// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct E { u8 p[0x30]; u32 fl; u8 q[60 - 0x34]; } E;
typedef struct Y { u8 p[8]; E *arr; } Y;
typedef struct Z { u8 p[0x84]; Y *y; } Z;
typedef struct O { u8 p[0x24]; u32 fl; void *a; void *b; u32 p30; u32 idx; } O;
Z *fn_801955D8(void *);
static inline E *get(Y *y, u32 i) { if (y == 0) return 0; else return &y->arr[i]; }
void fn_801F0050(O *o) {
    if (o->fl & 2) {
        Z *z = fn_801955D8(o->b ? o->b : o->a);
        E *e = get(z->y, o->idx);
        e->fl &= ~1;
    }
}

} /* extern "C" */
