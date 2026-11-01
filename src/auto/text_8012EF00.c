// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 p[0x20]; void *f20; void *f24; } O;
void fn_802079F0(void *a, s32 b);
void fn_8012EF00(O *o) {
    if (o->f20 == NULL || o->f24 == NULL) return;
    fn_802079F0(o->f20, 0);
}
