// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct S28 { u8 pad[12]; char *fC; } S28;
struct C80215F50 {
    u8 pad0[36];
    void *f24;
    S28 *f28;
    void *f2C;
    u8 pad30[8];
    C80215F50();
    ~C80215F50();
};
extern const char lbl_803640B0[4];
extern const char lbl_803640B4[4];
extern const char lbl_803640B8[6];
s32 fn_80215C84(C80215F50 *, const char *, const char *, s32, s32);
void fn_80215BFC(C80215F50 *);
void fn_80060E30(s32, const char *, ...);
void fn_80207A54(void *, char *);
void fn_802079F0(void *, s32);
void fn_80131C58(void *);
struct X12 { u8 pad[12]; virtual void x0(); virtual void x1(); virtual void x2(); virtual void x3(); virtual void x4(); virtual void x5(); virtual void x6(); virtual void x7(); virtual void x8(); virtual void x9(); virtual void x10(); virtual void x11(); virtual void x12(); virtual void x13(); virtual void x14(); virtual void x15(); virtual void go(); };
struct X8 { u8 pad[8]; virtual void y0(); virtual void y1(); virtual void y2(); virtual void y3(); virtual void y4(); virtual void go(); };
struct T;
void fn_80133CBC(T *, void *, void *);
struct T { u8 pad[16]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual int v6(); virtual void v7(void *, const char *); virtual void v8(); virtual void *v9(u32); virtual X12 *v10(u32); virtual X8 *v11(u32);
    u32 f20; u8 pad24[4]; u32 f28; u32 f32; };
void fn_80133AB8(T *t, void *a, const char *b, int c) {
    C80215F50 f1;
    if (!fn_80215C84(&f1, b, lbl_803640B0, 2, 0)) c = 2;
    fn_80215BFC(&f1);
    if (c == 2 && t->v6()) {
        t->v7(a, b);
    } else {
        C80215F50 f2;
        s32 r;
        if ((r = fn_80215C84(&f2, b, lbl_803640B4, 2, 0)) != 0) fn_80060E30(r, lbl_803640B8, b, lbl_803640B4);
        void *g = *(void *volatile *)&f2.f24; void *d = *(void *volatile *)&f2.f2C;
        fn_80207A54(g, f2.f28->fC);
        fn_80133CBC(t, a, d);
        u32 i;
        for (i = 0; i < t->f28; i++) t->v10(i)->go();
        for (i = 0; i < t->f32; i++) t->v11(i)->go();
        for (i = 0; i < t->f20; i++) fn_80131C58(t->v9(i));
        fn_802079F0(f2.f24, 0);
        fn_80215BFC(&f2);
    }
}

} /* extern "C" */
