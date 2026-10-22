// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
struct S800FA82C {
    u32 cap;
    u32 start;
    u32 end;
    virtual s32 Get(u32 i) const;
    virtual void Set(u32 i, s32 c);
};

void fn_800FA82C(S800FA82C *p, const S800FA82C *src) {
    u32 len;
    u32 total;
    u32 n;
    u32 i;
    len = p->end - p->start;
    total = len + (src->end - src->start);
    if (p->start + total >= p->cap) {
        total = p->cap - p->start;
    }
    n = total - len;
    for (i = 0; i < n; i++) {
        p->Set(len + i, src->Get(i));
    }
    p->Set(total, 0);
    p->end = total;
}

} /* extern "C" */
