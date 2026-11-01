// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct O { u8 pad[0x20]; void *a; void *b; } O;
void fn_80207A54(void *, void *);
void fn_8012D634(O *o) { if (o->a == 0 || o->b == 0) return; fn_80207A54(o->a, o->b); }

} /* extern "C" */
