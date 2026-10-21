// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
typedef struct {
    u32 v[3];
} T12;

struct S801DF270 {
    u8 pad[292];
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4();
    virtual u32 state();
};

struct V801DF270 {
    virtual void p0();
    virtual void m1(S801DF270 *, u32);
    virtual void p2(); virtual void p3();
    virtual void m4(void *, S801DF270 *);
};

extern T12 lbl_802ED4F0;
extern T12 lbl_802ED4FC;
extern const u32 lbl_8036527C;
void fn_800FAEF8(S801DF270 *);
void fn_80108B94(void *, V801DF270 *, T12 *, s32);

void fn_801DF270(V801DF270 *p, void *a, S801DF270 *s) {
    u32 st;
    T12 t1;
    T12 t2;
    p->m4(a, s);
    F(p, void *, 8) = a;
    fn_800FAEF8(s);
    while ((st = s->state()) != 6) {
        p->m1(s, st);
    }
    if (!(F(p, u32, 36) & 4)) {
        F(p, u32, 36) |= lbl_8036527C;
    }
    F(p, void *, 56) = F(F(p, void *, 40), void *, 28);
    F(p, void *, 60) = F(F(p, void *, 44), void *, 28);
    t1 = lbl_802ED4F0;
    fn_80108B94(F(p, void *, 56), p, &t1, -1);
    t2 = lbl_802ED4FC;
    fn_80108B94(F(p, void *, 60), p, &t2, -1);
}

} /* extern "C" */
