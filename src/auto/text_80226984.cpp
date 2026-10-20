// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8017EEFC(void *);
void fn_8017B9D8(void *);
void __dla__FPv(void *);
void fn_8017BAF4(void *, s32);
void __dt__9C8017F180Fv(void *, s32);
void __dl__FPv(void *);
typedef struct { s32 a; s32 b[3]; } E_80226984;
typedef struct { s32 n; E_80226984 e[662]; u8 c[20]; void *d; void *f; u8 g[4]; } T_80226984;

static inline void clr_80226984(T_80226984 *p) {
    u32 i;
    p->n = 0;
    for (i = 0; i < 662; i++) {
        p->e[i].a = 0;
    }
    p->d = NULL;
    p->f = NULL;
}

T_80226984 *fn_80226984(T_80226984 *p, s16 fl) {
    if (p != NULL) {
        fn_8017EEFC(p->c);
        fn_8017B9D8(p->g);
        if (p->d != NULL) {
            __dla__FPv(p->d);
        }
        if (p->f != NULL) {
            __dla__FPv(p->f);
        }
        clr_80226984(p);
        fn_8017BAF4(p->g, -1);
        __dt__9C8017F180Fv(p->c, -1);
        if (fl > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
