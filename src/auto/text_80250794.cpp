// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u32 pad0; u32 eof; u8 pad8[0x11C]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u32 next(); };
struct Mgr { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void *get(); };
struct P { u8 pad[0x14]; u8 key[8]; u32 b; u32 a; u8 pad24[8]; u32 v; u8 pad30[4]; void *snd; void *h; u8 pad3C[4]; void *res; };
extern "C" { extern char lbl_803664CC[4]; extern u8 *lbl_8035B460; extern void *lbl_8035B7BC; extern Mgr *lbl_8035B7C0; void *fn_800F9398(void *, void *); void *fn_800F9788(void *, char *, void *); s32 fn_800FB33C(R *); void fn_800FB064(R *, void *); void *fn_8026D254(void *, void *); void fn_800F6E88(void *, void *); void fn_8023D1BC(P *); }

static inline void *find(u8 *t, char *grp, void *key) {
    if (grp == 0 || grp[0] == 0) {
        return fn_800F9398(t, key);
    }
    return fn_800F9788(t + 24, grp, key);
}

extern "C" void fn_80250794(P *p, void *key, R *r, u32 v) {
    u8 nm[8];
    p->res = find(*(u8 **)(lbl_8035B460 + 12) + 0x32B4, lbl_803664CC, key);
    p->a = 1;
    if (fn_800FB33C(r) == 0) {
        p->a = 0;
    }
    if (fn_800FB33C(r) == 1) {
        p->b = 1;
    }
    if (r->next() == 60) {
        fn_800FB064(r, nm);
        p->snd = fn_8026D254(lbl_8035B7BC, nm);
        if (p->snd != 0) {
            p->h = lbl_8035B7C0->get();
        }
    } else {
        r->eof = 1;
    }
    fn_800F6E88(p->key, key);
    p->v = v;
    fn_8023D1BC(p);
}

} /* extern "C" */
