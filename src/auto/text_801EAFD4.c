// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u32 lbl_80365370;
typedef struct { u8 pad[0x90]; void *f90; u8 pad94[4]; volatile u32 f98; } O801EAFD4;
typedef struct { u8 pad[0x24]; u32 f24; void *a; void *b; void *f30; } S801EAFD4;
O801EAFD4 *fn_8019547C(void *k);
void fn_801EAFD4(S801EAFD4 *p) {
    O801EAFD4 *o;
    if (p->f24 & 2) {
        o = fn_8019547C(p->b != 0 ? p->b : p->a);
        if (p->f30 != 0) o->f90 = p->f30;
        if (o->f98 & 8) o->f98 &= ~8;
        else o->f98 |= lbl_80365370;
    }
}
