// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct X_80271BB8 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m6(s32); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m10(); };
struct T_80271BB8 { u32 n; X_80271BB8 *a[60]; u32 k[60]; void *mgr; };
extern "C" void fn_8019B6B8(void *, void *);

void fn_80271BB8(T_80271BB8 *t, u8 *o) {
    if (t->n != 0 && *(u32 *)(o + 156) != 0) {
        u32 i;
        for (i = 0; i < t->n; i++) {
            if (t->k[i] == *(u32 *)(o + 156)) {
                fn_8019B6B8(t->mgr, (void *)t->k[i]);
                fn_8019B6B8(t->mgr, t->a[i]);
                t->a[i]->m10();
                if (t->a[i] != 0) {
                    t->a[i]->m6(1);
                }
                break;
            }
        }
        for (; i < t->n - 1; i++) {
            t->a[i] = t->a[i + 1];
            t->k[i] = t->k[i + 1];
        }
        if (t->n != 0) {
            t->n = t->n - 1;
        }
        t->a[t->n] = 0;
    }
}

} /* extern "C" */
