// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8017EEFC(void *);
void fn_8017B9D8(void *);
void __dla__FPv(void *);
typedef struct { s32 a; s32 b[3]; } E_80226894;
typedef struct { s32 n; E_80226894 e[662]; u8 c[20]; void *d; void *f; u8 g[4]; } T_80226894;

static inline void clr_80226894(T_80226894 *p) {
    u32 i;
    p->n = 0;
    for (i = 0; i < 662; i++) {
        p->e[i].a = 0;
    }
    p->d = 0;
    p->f = 0;
}

void fn_80226894(T_80226894 *p) {
    fn_8017EEFC(p->c);
    fn_8017B9D8(p->g);
    if (p->d != 0) {
        __dla__FPv(p->d);
    }
    if (p->f != 0) {
        __dla__FPv(p->f);
    }
    clr_80226894(p);
}

} /* extern "C" */
