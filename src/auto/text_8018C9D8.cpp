// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct R { u8 pad[4]; s32 f4; u8 pad2[0x11C]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Key { u8 d[8]; };
struct X { u8 pad[144]; u8 a144[24]; u8 b168[24]; };
struct F { u8 pad[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void attach(void *);
  u8 pad2[28]; void *f136; };
struct P { u8 pad[148]; u32 cap; u32 cnt; F **objs; f32 *dist; };
extern void *lbl_8035AEA8;
void fn_800FAFA8(R *);
u32 fn_800FB33C(R *);
void fn_800FAF50(R *);
u32 fn_800FADA8(R *);
void fn_800FB064(R *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
F *fn_8019565C(void *);
f32 fn_800FB2E0(R *);
void fn_800FAEA0(R *);
void fn_801A17B8(P *, X *, R *, u32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

static inline void *findC(X *x, char *grp, Key *key) {
    if (grp == 0 || grp[0] == 0) {
        return fn_800F9398(x->a144, key);
    }
    return fn_800F9788(x->b168, grp, key);
}

static inline u32 slot(P *p, f32 d) {
    u32 i;
    for (i = 0; i < p->cnt; i++) {
        if (d <= p->dist[i]) break;
    }
    return i;
}
void fn_8018C9D8(P *p, X *x, R *r, u32 k) {
    Key key;
    char grp[8];
    u32 i;
    u32 n;
    if (k == 92) {
    if (p->objs == 0) {
        fn_800FAFA8(r);
        p->cap = fn_800FB33C(r);
        fn_800FAF50(r);
        if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        p->objs = new F *[p->cap];
        fn_800F7E98();
        if (!p->objs) fn_800604C4(-4, 0, 0, 0);
        if (!lbl_8035AEA8) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        p->dist = new f32[p->cap];
        fn_800F7E98();
        if (!p->dist) fn_800604C4(-4, 0, 0, 0);
        if (r->next() == 5) {
            n = p->cap;
        } else {
            r->f4 = 1;
            n = 0;
        }
    } else {
        n = fn_800FADA8(r);
        if (n > p->cap) r->err(35);
    }
    if (n == 0) return;
    for (i = 0; i < n; i++) {
        F *f;
        f32 d;
        u32 j, m;
        fn_800FB064(r, &key);
        fn_800FB064(r, grp);
        f = fn_8019565C(findC(x, grp, &key));
        if (f == 0) r->err(37);
        if (f->f136) r->err(35);
        d = fn_800FB2E0(r);
        d = d * d;
        j = slot(p, d);
        for (m = p->cnt; m > j; m--) {
            p->objs[m] = p->objs[m - 1];
            p->dist[m] = p->dist[m - 1];
        }
        p->objs[j] = f;
        p->dist[j] = d;
        f->attach(p);
        p->cnt++;
    }
    fn_800FAEA0(r);
    } else {
        fn_801A17B8(p, x, r, k);
    }
}
}

} /* extern "C" */
