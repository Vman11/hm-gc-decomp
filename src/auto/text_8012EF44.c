// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 p[0x20]; void *f20; void *f24; } O;
void fn_80207A54(void *a, void *b);
void fn_8012EF44(O *o) {
    if (o->f20 == NULL || o->f24 == NULL) return;
    fn_80207A54(o->f20, o->f24);
}
