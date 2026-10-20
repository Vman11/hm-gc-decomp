// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80249C7C { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual s32 m6(void *); virtual void m7(void *); };
extern "C" { void fn_8023E914(void *, void *); extern void *lbl_8035B488; s32 *fn_800F8274(void *, char *); extern char lbl_803662E4[8]; extern char lbl_803662EC[8]; }

static inline void fire_80249C7C(V_80249C7C *v, char *name) {
    s32 *p = (s32 *)v;
    s32 *e = fn_800F8274(p + 5, name);
    if (e != 0) {
        u32 n = e[1];
        void **q = (void **)p[12] + e[0];
        for (; n != 0; n--, q++) {
            if (v->m6(*q) != 0) {
                v->m7(*q);
                break;
            }
        }
    }
}

static inline void set_80249C7C(V_80249C7C *v, s32 s) {
    s32 *p = (s32 *)v;
    if (p[24] != -1) {
        fire_80249C7C(v, lbl_803662E4);
    }
    p[25] = -1;
    p[24] = s;
    fire_80249C7C(v, lbl_803662EC);
}

void fn_80249C7C(V_80249C7C *v) {
    s32 *p = (s32 *)v;
    s32 i;
    for (i = 0; i < p[23]; i++) {
        if (((void **)p[28])[i] != 0) {
            fn_8023E914(lbl_8035B488, ((void **)p[28])[i]);
            ((void **)p[28])[i] = 0;
        }
    }
    set_80249C7C(v, 0);
}

} /* extern "C" */
