// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8017C324(void *a, void *b, void *c, void *d, void *e);
typedef struct { u8 pad[0x38]; void *p; } S80190C48;
void fn_80190C48(S80190C48 *a, S80190C48 *b, void *c) { if (a->p == 0 || b->p == 0) return; fn_8017C324(a->p, a, b->p, b, c); }
