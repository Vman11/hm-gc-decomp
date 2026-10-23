// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct Key291 { char d[8]; };
struct C291 { u8 pad[8]; s32 f8; };
struct D291 { C291 *f0; u8 pad4[8]; char fc[8]; };
struct N291 { D291 *f0; void *f4; u8 pad8[4]; N291 *fc; N291 *f10; };
struct T291 { u8 pad[8]; u8 *f8; };
struct V291 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void go(void *, void *, void *, N291 *); };
struct P291 { u8 pad[0x54]; s32 f54; };
extern T291 *lbl_8035B460;
extern char lbl_80365CE4[8];
extern char lbl_80365CEC[8];
extern char lbl_802A8524[];
void fn_800F6E88(void *, void *);
s32 fn_800F6F00(void *, const char *);
void fn_800F6FBC(void *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
N291 *fn_8010FEDC(void *, N291 *, char *, s32);
V291 *fn_8023CA4C(P291 *, void *);

inline D291 *fn_8010F1D0(N291 *n) { return n->f0; }
inline void *fn_8010CA74(N291 *n) { return n->f4; }
inline N291 *fn_8010F1B8(N291 *n) { return n->f10; }
inline N291 *fn_8010F1B0(N291 *n) { return n->fc; }
inline s32 fn_80229770(N291 *n) { return n->f0->f0->f8; }
inline u8 *fn_80229734(T291 *t) { return t->f8; }
inline T291 *fn_8022973C(void) { return lbl_8035B460; }
inline void fn_80229744(D291 *d, Key291 *k) { fn_800F6E88(k, d->fc); }
inline void *fn_80076BAC(u8 *tb, Key291 *k, char *grp) {
    if (grp == 0 || grp[0] == 0) return fn_800F9398(tb + 0x90, k);
    return fn_800F9788(tb + 0xa8, grp, k);
}
inline s32 fn_80229780(P291 *p, N291 *n) {
    if (fn_8010F1D0(n) && fn_80229770(n) == 4) {
        Key291 k;
        fn_80229744(fn_8010F1D0(n), &k);
        if (fn_800F6F00(&k, lbl_80365CE4) == 0) return 1;
    }
    return 0;
}
inline void fn_802297E4(P291 *p, void *q, N291 *n, void *x) {
    N291 *r = fn_8010FEDC(q, n, lbl_80365CEC, 1);
    if (r) {
        if (x == 0) {
            Key291 k;
            N291 *e;
            fn_800F6FBC(fn_8010CA74(n), &k);
            e = fn_8010FEDC(q, n, lbl_802A8524, 1);
            if (!e) {
                x = fn_80076BAC(fn_80229734(fn_8022973C()), &k, 0);
            } else {
                Key291 k2;
                fn_80229744(fn_8010F1D0(e), &k2);
                x = fn_80076BAC(fn_80229734(fn_8022973C()), &k, k2.d);
            }
        }
        {
            Key291 k3;
            fn_80229744(fn_8010F1D0(r), &k3);
            fn_8023CA4C(p, &k3)->go(q, p, x, n);
        }
        p->f54++;
    }
}

void fn_80229108(P291 *p, void *q, N291 *n) {
    if (fn_80229780(p, n)) fn_802297E4(p, q, n, 0);
    if (fn_8010F1B8(n)) fn_80229108(p, q, fn_8010F1B8(n));
    if (fn_8010F1B0(n)) fn_80229108(p, q, fn_8010F1B0(n));
}

}

} /* extern "C" */
