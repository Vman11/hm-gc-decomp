/* Functions from 0x801E9660 to 0x801E96A0, found by decomp-toolkit. */
#include "common.h"

typedef struct { u8 pad[0x44]; u32 *a; u32 *b; } S801E9660;
static inline u32 *get801E9660(S801E9660 *s) { return s->b ? s->b : s->a; }
void fn_801E9660(S801E9660 *s) {
    if (get801E9660(s) == 0) return;
    *get801E9660(s) &= ~0x400;
}
