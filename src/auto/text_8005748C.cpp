// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a; u32 b; } T8;
typedef struct { u8 pad[16]; u32 n; } C0;
typedef struct { C0 *f0; u8 pad[8]; T8 *arr; } S14C;
typedef struct { u8 pad[12]; s32 *arr; } S1D4;
typedef struct { void *p; s32 a; s32 b; s32 c; s32 d; } T20;
struct VM {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5();
    virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17();
    virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29();
    virtual void p30(); virtual void p31(); virtual void p32();
    virtual void msg(char *, void *, s32, f32 *, s32);
};
extern T20 lbl_80296874, lbl_80296888;
extern char lbl_8035E060[4];
extern char lbl_8035E164[8];
extern u8 *lbl_8035B460;
s32 fn_800F6CD0(void *, char *);
void fn_800F6E88(void *, void *);
void fn_8023F764(void *, void **, T20);
void fn_8023FA2C(void *, void **, T20);
void fn_800572DC(void *, u32);
void fn_80056FE0(void *, u32);
void *fn_800F9398(void *, void *);
void fn_8022BE28(void *, void *);
void fn_80226F20(void *);
void fn_80226FC8(void *);
void fn_80056B4C(void *, s32);
void fn_802490E0(void *, s32, f32);

static inline T20 mk(const T20 &tpl, void *b) { T20 t = tpl; t.p = b; return t; }
#define F(T, o) (*(T *)(p + (o)))
static inline void rst(u8 *p) {
    if (F(s32, 564) == 0 && F(s32, 532) == 0) {
        VM *o = F(VM *, 528);
        if (o != 0 && o != F(VM *, 224)) o->msg(lbl_8035E164, F(void *, 224), 0, 0, 0);
        F(void *, 528) = 0;
        F(s32, 564) = 1;
    }
}
static inline void fin(u8 *p) {
    s32 b = *F(s32 *, 344);
    if (!b && (b || F(s32, 556))) return;
    if (F(s32, 532) == 1 && F(void *, 528) == F(void *, 224)) {
        F(s32, 532) = 0;
        F(void *, 528) = 0;
    }
    fn_80056B4C(p, 0);
}
static inline void clr(u8 *p) {
    u32 i;
    for (i = 0; i < F(u32, 496); i++) {
        if (F(void **, 500)[i] != 0) {
            u8 buf[8];
            fn_800F6E88(buf, &F(S14C *, 492)->arr[i]);
            fn_8023F764(p, &F(void **, 500)[i], mk(lbl_80296874, buf));
            F(void **, 500)[i] = 0;
        }
    }
}
static inline void snd(u8 *p, u32 idx) {
    {
        S14C *q = F(S14C *, 488);
        if (q->f0->n > idx) {
            u8 buf[8];
            fn_800F6E88(buf, &q->arr[idx]);
            if (fn_800F6CD0(buf, lbl_8035E060) == 0) {
                void *r = fn_800F9398(*(u8 **)(*(u8 **)(lbl_8035B460 + 8) + 4) + 360, buf);
                if (r != 0) fn_8022BE28(F(void *, 224), r);
            } else {
                fn_8022BE28(F(void *, 224), 0);
            }
        }
    }
}
void fn_8005748C(u8 *p, s32 a) {
    u32 idx;
    clr(p);
    idx = a;
    if (F(u32, 496) > (u32)a) {
        u8 buf[8];
        fn_800F6E88(buf, &F(S14C *, 492)->arr[a]);
        if (fn_800F6CD0(buf, lbl_8035E060) == 0) {
            F(void **, 500)[a] = 0;
            fn_8023FA2C(p, &F(void **, 500)[a], mk(lbl_80296888, buf));
        }
    }
    fn_800572DC(p, idx);
    fn_80056FE0(p, idx);
    snd(p, idx);
    switch (a) {
    case 0:
        rst(p);
        if (*F(s32 *, 340) != 0) fn_80226F20(F(void *, 224));
        fin(p);
        break;
    case 2:
        rst(p);
        if (*F(s32 *, 340) != 0) fn_80226FC8(F(void *, 224));
        if (*F(s32 *, 368) != 0) fn_802490E0(p, 0, *F(f32 *, 372));
        fin(p);
        break;
    case 1:
    case 3:
        if (F(S1D4 *, 468)->arr[idx] != 0) {
            F(s32, 568) = 0;
            fn_802490E0(p, 1, a == 1 ? *F(f32 *, 404) : *F(f32 *, 408));
        } else {
            F(s32, 568) = 1;
        }
        if (*F(s32 *, 340) != 0) fn_80226FC8(F(void *, 224));
        break;
    }
    F(s32, 560) = 0;
    F(s32, 556) = 0;
}

} /* extern "C" */
