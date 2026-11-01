// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct O { u8 pad[0x20]; void *a; void *b; } O;
void fn_802079F0(void *, int);
void fn_8012D5F0(O *o) { if (o->a == 0 || o->b == 0) return; fn_802079F0(o->a, 0); }

} /* extern "C" */
