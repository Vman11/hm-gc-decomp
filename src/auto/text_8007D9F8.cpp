// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B { u32 a, b; };
struct CB { void *p; u32 a, b, c, d; };
extern const CB lbl_8029877C;
extern char lbl_802987B4[];
extern char lbl_8035F940[4], lbl_8035F944[8], lbl_8035F964[8];
extern void *lbl_8035B65C;
extern void *lbl_8035B79C;
struct V72 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void say(const char *, void *, int, int, void *); };
struct G308 { u8 pad[72]; V72 *f72; };
extern G308 *lbl_8035B308;
struct L0 { u8 pad[16]; u32 n; };
struct L { L0 *f0; u8 pad4[8]; u8 *f12; };
struct T { u8 pad[224]; void *f224; u8 pad228[60]; B *f288; u8 pad292[44]; L *f336; u8 pad340[8]; B *f348; int *f352; u8 pad356[16]; int f372; int f376; u8 pad380[28]; void **f408; };
void __ct__9C80253F24Fiiii(void *, const char *, int, int, int);
int fn_800F6CD0(void *, const void *);
void fn_800F6E88(B *, const void *);
void fn_80240B50(T *, B *, int);
void fn_8023F764(T *, void **, CB);
void fn_8023FA2C(T *, void **, CB);
void fn_8007D140(T *, int, int);
void fn_8026820C(void *, int);
void *fn_80242144(T *, int);
void fn_80242BC0(void *, const char *, int, int, int, int);
void fn_802494A4(T *, int);
static inline CB mk(const CB &tpl, void *b) { CB t = tpl; t.p = b; return t; }
static inline void loop(T *t, u32 i) {
    for (; i < t->f336->f0->n; i++) {
        B nm;
        fn_800F6E88(&nm, t->f336->f12 + i * 8);
        if (fn_800F6CD0(&nm, lbl_8035F940) == 0) {
            CB cb = mk(lbl_8029877C, &nm);
            if (t->f408[i]) {
                fn_8023F764(t, &t->f408[i], cb);
                t->f408[i] = 0;
            }
            fn_8023FA2C(t, &t->f408[i], cb);
        }
    }
}
void fn_8007D9F8(T *t) {
    __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_802987B4, 0, 0, 0);
    B *n = t->f288;
    if (fn_800F6CD0(n, lbl_8035F940) == 0) fn_80240B50(t, n, 0);
    loop(t, 0);
    fn_8007D140(t, 0, -1);
    if (fn_800F6CD0(t->f348, lbl_8035F940) == 0) lbl_8035B308->f72->say(lbl_8035F964, t->f224, 0, 0, t->f348);
    if (*t->f352) fn_8026820C(lbl_8035B79C, 3);
    if (!t->f376) fn_80242BC0(fn_80242144(t, 0), lbl_8035F944, 0, 0, 0, 0);
    t->f376 = 1;
    t->f372 = 1;
    fn_802494A4(t, 3);
}

} /* extern "C" */
