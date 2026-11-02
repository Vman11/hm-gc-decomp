// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct E { u32 a; u8 r[56]; u32 pad; } E;
typedef struct O { u32 n; E *arr; } O;
void *memset(void *, int, u32);
static inline void clr(E *e) { e->a = 0; memset(e->r, 0, 56); }
void fn_8018EEFC(O *o) { u32 i; for (i = 0; i < o->n; i++) clr(&o->arr[i]); }

} /* extern "C" */
