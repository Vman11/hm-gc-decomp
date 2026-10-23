// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct S800FA69C {
    u32 cap;
    u32 start;
    u32 end;
    virtual s32 Get(u32 i) const;
    virtual void Set(u32 i, s32 c);
};
extern "C" {

void fn_800FA69C(S800FA69C *p, const S800FA69C *o) {
    u32 len = o->end - o->start;
    u32 i;
    u32 n = len >= p->cap ? p->cap : len;
    for (i = 0; i < n; i++) {
        p->Set(i, o->Get(i));
    }
    p->Set(n, 0);
    p->end = n;
    p->start = 0;
}

} /* extern "C" */
