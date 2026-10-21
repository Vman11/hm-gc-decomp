// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(void *);
void __dl__FPv(void *);
typedef struct {
    void *data;
    u8 pad[24];
} Entry;
typedef struct {
    Entry *arr0;
    Entry *arr1;
    u32 n0;
    u32 n1;
    u32 f16;
} C;

static inline void Clear(C *p) {
    u32 i;
    if (p->arr0) {
        for (i = 0; i < p->n0; i++) {
            if (p->arr0[i].data) __dla__FPv(p->arr0[i].data);
        }
        if (p->arr0) __dla__FPv((u8 *)p->arr0 - 16);
    }
    if (p->arr1) {
        for (i = 0; i < p->n1; i++) {
            if (p->arr1[i].data) __dla__FPv(p->arr1[i].data);
        }
        if (p->arr1) __dla__FPv((u8 *)p->arr1 - 16);
    }
    p->arr0 = 0;
    p->arr1 = 0;
    p->n0 = 0;
    p->n1 = 0;
    p->f16 = 0;
}

C *__dt__9C8020F398Fv(C *p, s16 f) {
    if (p) {
        Clear(p);
        if (f > 0) __dl__FPv(p);
    }
    return p;
}

} /* extern "C" */
