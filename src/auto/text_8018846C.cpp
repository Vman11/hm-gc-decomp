// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
typedef struct {
    u32 count;
    void **vals;
} Arg8018846C;

s32 fn_801956E0(void *);
u32 *fn_80195320(void *);
void fn_801904C0(void *, void *, void *, s32);

void fn_8018846C(void *p, void *q, Arg8018846C *r) {
    void *a;
    void *b;
    void *n;
    void *o;
    s32 flag;
    void *t;
    if (r->count == 1) {
        t = r->vals[0];
        a = t;
        b = t;
    } else {
        a = r->vals[0];
        b = r->vals[1];
    }
    for (n = F(p, void *, 20); n != 0; n = F(n, void *, 24)) {
        o = F(n, void *, 12);
        if (fn_801956E0(o) != 0) {
            flag = (*fn_80195320(o) >> 11) & 1;
        } else {
            flag = 0;
        }
        fn_801904C0(o, F(q, void *, 8), flag != 0 ? a : b, 0);
    }
}

} /* extern "C" */
