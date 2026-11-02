// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O { u8 p[8]; u8 *s; u8 q[44 - 12]; void *h; u8 k[8]; char name[16]; };
int fn_801EF6AC(O *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
static inline void *open(void *s, char *name, void *k) {
    if (!name || !*name) return fn_800F9398(s, k);
    return fn_800F9788((u8 *)s + 24, name, k);
}
int fn_801EFC78(O *o) {
    if (!fn_801EF6AC(o)) return 0;
    if (!o->h) o->h = open(o->s, o->name, o->k);
    return 1;
}

} /* extern "C" */
