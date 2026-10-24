// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B { u32 a, b; };
struct L0 { u8 pad[16]; u32 n; };
struct L { L0 *f0; u8 pad4[8]; u8 *f12; };
struct T { u8 pad[236]; int f236; u8 pad240[56]; char *f296; u8 pad300[20]; L *f320; u8 pad324[72]; u32 f396; u32 *f400; u32 f404; };
extern void *lbl_8035A0A4;
struct K { u8 pad[192]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void get(B *, int); };
extern K *lbl_8035B684;
extern void *lbl_8035B65C;
extern char lbl_8035F920[8], lbl_8035F928[8], lbl_8035F930[7], lbl_8035F938[7], lbl_8035F940[4];
void *fn_80240004(T *, int);
int fn_80245F48(void *, int);
int fn_8024548C(void *, int, int, int, B *, int, int);
void fn_800F6E88(B *, const void *);
int fn_800F6CD0(B *, const void *);
void fn_8003CAD8(void *, int);
int fn_8003CDA4(void *);
void *fn_80242144(T *, int);
void fn_80242BC0(void *, const char *, int, int, int, int);
void __ct__9C80253F24Fiiii(void *, B *, int, int, int);
typedef void (*VF)(void *, B *, int);
static inline int has(L *l, B *n, B &t) {
    u32 i;
    for (i = 0; i < l->f0->n; i++) {
        fn_800F6E88(&t, l->f12 + i * 8);
        if (fn_800F6CD0(n, &t)) return 1;
    }
    return 0;
}
static inline int chk(T *t, int idx) {
    L *l = t->f320;
    B n;
    B tt;
    u32 i;
    if (!fn_8024548C(fn_80240004(t, 0), idx, -1, 1, &n, 0, 0)) fn_800F6E88(&n, t->f296);
    for (i = 0; i < l->f0->n; i++) {
        fn_800F6E88(&tt, l->f12 + i * 8);
        if (fn_800F6CD0(&n, &tt)) return 1;
    }
    return 0;
}
void fn_8007CE4C(T *t) {
    int idx;
    B s;
    B r;
    idx = fn_80245F48(fn_80240004(t, 0), t->f236);
    if (*t->f400 & (t->f404 & (1 << idx))) return;
    *t->f400 |= 1 << idx;
    if (!chk(t, idx)) return;
    fn_8003CAD8(lbl_8035A0A4, 1);
    t->f396--;
    if (t->f396 == 0) fn_80242BC0(fn_80242144(t, 0), lbl_8035F920, 0, 0, 0, 0);
    lbl_8035B684->get(&r, -1);
    if (!fn_800F6CD0(&r, lbl_8035F928)) return;
    switch (fn_8003CDA4(lbl_8035A0A4)) {
    case 4: fn_800F6E88(&s, lbl_8035F930); break;
    case 15: fn_800F6E88(&s, lbl_8035F938); break;
    case 1: break;
    default: fn_800F6E88(&s, lbl_8035F940); break;
    }
    __ct__9C80253F24Fiiii(lbl_8035B65C, &s, 0, 0, 0);
}

} /* extern "C" */
