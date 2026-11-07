// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct T12 { s32 x, y, z; } T12;
typedef struct E { u8 p[12]; } E;
typedef struct O { u8 p[20]; E *e; } O;
E *fn_800F8274(void *, void *);
void fn_80108EFC(E **, void *, T12, void *, s32);
void fn_801090D4(O *o, void *a, T12 t, void *d, void *k) { E *b = o->e; s32 n = fn_800F8274(o, k) - b; fn_80108EFC(&o->e, a, t, d, n); }

}
