// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O { void *s; u32 f4; u32 f8; u32 f12; };
void fn_800FBB6C(u32, char *);
void fn_800F9FE0(void *, int);
static inline void put(O *o, char *p, char *e) { for (; p < e && *p; p++) fn_800F9FE0(o->s, *p); }
void fn_800F5EC0(O *o, u32 a) {
    char buf[32];
    char *p;
    o->f12 = a;
    o->f8 = 4;
    fn_800FBB6C(a, buf);
    put(o, buf, buf + 31);
}

} /* extern "C" */
