// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 p[0x30]; s32 f30; } R;
typedef struct { u8 p[0xa4]; R *fa4; u8 q[0xd8 - 0xa8]; void *fd8; } Q;
typedef struct { u8 p[0x18]; u8 base[4]; void *f1c; void *f20; } O;
void fn_801EB728(O *);
Q *fn_8019547C(void *);
void fn_801EAA74(O *o) {
    Q *q;
    void *c;
    void *b;
    fn_801EB728(o);
    q = fn_8019547C(o->f20 != 0 ? o->f20 : o->f1c);
    c = q->fd8;
    b = o;
    if (o != 0) b = o->base;
    if (c == b) {
        q->fd8 = 0;
        q->fa4->f30 = 0;
    }
}
