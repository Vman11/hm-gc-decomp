// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct S { u32 a; u16 b[2]; u32 d[2]; } S;
typedef struct O { u32 f0; S s; u32 f14; u8 p[108 - 24]; } O;
extern S lbl_80297350;
void *memset(void *, int, u32);
void fn_80061358(void *__restrict unused, O *__restrict o) {
    memset(o, 0, 108);
    o->f0 = 0;
    { S *s = &o->s; S *t = &lbl_80297350; s->a = t->a; s->b[0] = t->b[0]; s->b[1] = t->b[1]; s->d[0] = t->d[0]; s->d[1] = t->d[1]; }
    o->f14 = 0;
}
