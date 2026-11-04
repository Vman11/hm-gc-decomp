// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct N800F9324 { u8 pad[8]; struct N800F9324 *next; } N800F9324;
void fn_800F806C(N800F9324 *n, s32 a, char *s);
void fn_800F9324(N800F9324 * __restrict l, s32 a, char * __restrict s) { N800F9324 *n; for (n = l->next; n != 0; n = n->next) { fn_800F806C(n, a, s); if (*s != 0) return; } *s = 0; }

} /* extern "C" */
