// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct A;
inline int fn_801C27F8(A *p) { return F(p,120,int); }
inline u32 fn_801C27F0(A *p) { return F(p,144,u32); }
inline u32 fn_801C27E8(A *p) { return F(p,164,u32); }
inline u32 fn_801C27E0(A *p) { return F(p,184,u32); }
inline u32 fn_801C27D8(A *p) { return F(p,204,u32); }
inline u32 fn_801C27D0(A *p) { return F(p,244,u32); }
inline u32 fn_801C27C8(A *p) { return F(p,264,u32); }
inline A *fn_801C1758(A *p) { return F(p,312,A*); }
inline A *fn_801C176C(A *p) { return F(p,308,A*); }
A *fn_801C2544(void *ctx, A *n, A **out) {
    A *c;
    if (!n) return 0;
    if (fn_801C27F8(n)) return n;
    if (!*out) {
        if (fn_801C27F0(n)) *out = n;
        if (fn_801C27E8(n)) *out = n;
        if (fn_801C27E0(n)) *out = n;
        if (fn_801C27D8(n)) *out = n;
        if (fn_801C27D0(n)) *out = n;
        if (fn_801C27C8(n)) *out = n;
    }
    for (n = fn_801C1758(n); n; n = fn_801C176C(n)) {
        A *r = fn_801C2544(ctx, n, out);
        if (r) return r;
    }
    return 0;
}

} /* extern "C" */
