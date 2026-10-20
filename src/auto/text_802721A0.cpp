// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct X_802721A0 { u8 pad[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void m6(s32); virtual void v7(); virtual void v8(); virtual void v9(); virtual void m10(); };
struct T_802721A0 { s32 n; X_802721A0 *a[60]; u32 k[60]; void *mgr; s32 x; };
extern "C" { void fn_8019B6B8(void *, void *); void fn_8019BB1C(void *); void __dt__9C8019CF04Fv(void *, s32); }

static inline void clr_802721A0(T_802721A0 *t) {
    u32 i;
    for (i = 0; i < 60; i++) {
        t->a[i] = 0;
        t->k[i] = 0;
    }
    t->x = 0;
    t->n = 0;
    t->mgr = 0;
}

void fn_802721A0(T_802721A0 *t) {
    u32 i;
    for (i = 0; i < 60; i++) {
        if (t->a[i] != 0) {
            fn_8019B6B8(t->mgr, t->a[i]);
            t->a[i]->m10();
            if (t->a[i] != 0) {
                t->a[i]->m6(1);
            }
        }
    }
    if (t->mgr != 0) {
        fn_8019BB1C(t->mgr);
        __dt__9C8019CF04Fv(t->mgr, 1);
    }
    clr_802721A0(t);
}

} /* extern "C" */
