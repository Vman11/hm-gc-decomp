// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct X { u8 pad[4]; u8 *f4; u32 f8; };
struct M { X *p; virtual void s0(); virtual void s1(); virtual int a(int); virtual int b(); virtual int c(); virtual int d(); };
struct T { u8 pad[8]; u32 f8; u8 pad12[12]; M m; };
extern u32 lbl_8036580C;
void fn_8020866C(X *);
void fn_8021144C(T *, X *);
static inline bool chk(u32 fl) { bool r = false; if ((fl & 4) || (fl & 8)) r = true; return r; }
int fn_8020CA04(T *t) {
    int r;
    u32 fl = t->f8;
    if (fl & 0x10000) {
    if (chk(fl)) {
        if ((r = t->m.c())) { t->f8 = 0; return r; }
        if ((r = t->m.b())) { t->f8 = 0; return r; }
        r = t->m.a(0);
        if (r == 7) r = t->m.c();
        if (r) { t->f8 = 0; return r; }
        *(u32 *)(t->m.p->f4 + 64) &= ~1;
        t->m.p->f8 |= lbl_8036580C;
        if ((r = t->m.b())) { t->f8 = 0; return r; }
    }
    r = 0;
    if (t->m.p) {
        r = t->m.b();
        if (!r) {
            r = t->m.d();
            if (r == 7) r = t->m.c();
        }
        if (t->m.p) {
            t->m.c();
            fn_8020866C(t->m.p);
        }
        fn_8021144C(t, t->m.p);
    }
    t->f8 = 0;
    return r;
    }
    t->f8 = 0;
    return 0;
}

} /* extern "C" */
