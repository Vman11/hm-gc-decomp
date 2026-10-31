// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u32 f0; u32 f4; u8 pad_[284]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct Q { f32 a, b, c, d; };
struct E8 { u32 a, b; };
struct T {
    u32 flags;
    char buf[12];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void alloc(u32);
    u32 n;
    u32 pad24[5];
    E8 *p;
};
extern u32 lbl_80365994, lbl_80365968;
u32 fn_800FADA8(R *);
f32 fn_800FB2E0(R *);
void fn_800FB064(R *, void *);
void fn_800FAEA0(R *);
void fn_80100754(E8 *, Q *);
void fn_8021D988(T *t, R *r) {
    if (t->p) r->err(39);
    t->n = fn_800FADA8(r);
    if (r->next() == 75) {
        t->flags |= lbl_80365994;
        fn_800FB064(r, t->buf);
    } else {
        E8 *p;
        u32 i;
        r->f4 = 1;
        t->alloc(t->n);
        p = t->p;
        for (i = 0; i < t->n; p++, i++) {
            Q q;
            q.a = fn_800FB2E0(r);
            q.b = fn_800FB2E0(r);
            q.c = fn_800FB2E0(r);
            q.d = fn_800FB2E0(r);
            fn_80100754(p, &q);
        }
        t->flags |= lbl_80365968;
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
