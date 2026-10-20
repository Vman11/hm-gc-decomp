// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801050B0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual u32 n(); virtual void *g(u32); };

void *fn_801050B0(u8 *p) {
    u32 c = (*(V_801050B0 **)(p + 24))->n();
    if (*(u32 *)(p + 52) >= c) {
        return NULL;
    }
    return (*(V_801050B0 **)(p + 24))->g((*(u32 *)(p + 52))++);
}

} /* extern "C" */
