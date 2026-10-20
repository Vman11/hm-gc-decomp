// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_802494A4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual s32 m6(void *); virtual void m7(void *); };
extern "C" { s32 *fn_800F8274(void *, char *); extern char lbl_803662E4[8]; extern char lbl_803662EC[8]; }

static inline void fire_802494A4(V_802494A4 *v, char *name) {
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

void fn_802494A4(V_802494A4 *v, s32 s) {
    s32 *p = (s32 *)v;
    if (s != p[24]) {
        fire_802494A4(v, lbl_803662E4);
        p[25] = p[24];
        p[24] = s;
        fire_802494A4(v, lbl_803662EC);
    }
}

} /* extern "C" */
