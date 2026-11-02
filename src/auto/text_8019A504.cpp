// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {

void fn_8018846C(int, int, int);


struct E { u8 p[44]; };
struct O { u8 p[0x38]; s32 n; E *e; };
static inline void each(E *b, E *end, int x, int y) { for (; b < end; b++) fn_8018846C((int)b, x, y); }
void fn_8019A504(O *o, int x, int y) { E *b; E *end; b = o->e; end = b + o->n; for (; b < end; b++) fn_8018846C((int)b, x, y); }

} /* extern "C" */

} /* extern "C" */
