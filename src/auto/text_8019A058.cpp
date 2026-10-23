// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void v4(int); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Nd { void *a; int kind; void *obj; Nd *next; };
struct V3 { f32 x, y, z; };
extern void *lbl_8035A9F4;
void fn_800FB064(R *, char *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
void *fn_8019565C(void *);
void fn_80101A90(V3 *, R *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
static inline void *findA(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 144, n); return fn_800F9788(m + 168, g, n); }
static inline void *findB(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 204, n); return fn_800F9788(m + 228, g, n); }
static inline void push(u8 *p, void *a, int kind, void *obj) {
    Nd *n;
    if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    n = new Nd;
    fn_800F7E98();
    if (!n) fn_800604C4(-4, 0, 0, 0);
    n->a = a;
    n->kind = kind;
    n->obj = obj;
    n->next = F(p,4,Nd*);
    F(p,4,Nd*) = n;
}
void fn_8019A058(u8 *p, u8 *lib, void *a, R *r, int tok) {
    V3 v;
    char b16[8];
    char b8[8];
    void *x;
    switch (tok) {
    case 66:
        fn_800FB064(r, b16);
        fn_800FB064(r, b8);
        x = findA(lib, b8, b16);
        x = x ? fn_8019565C(x) : x;
        if (!x) r->v4(37);
        push(p, a, 2, x);
        break;
    case 74:
        fn_800FB064(r, b16);
        fn_800FB064(r, b8);
        x = findA(lib, b8, b16);
        if (!x) r->v4(37);
        push(p, a, 3, x);
        break;
    case 71:
        fn_80101A90(&v, r);
        break;
    case 68:
        fn_800FB064(r, b16);
        fn_800FB064(r, b8);
        F(p,0,void*) = findB(lib, b8, b16);
        if (!F(p,0,void*)) r->v4(37);
        break;
    default:
        r->v4(30);
        break;
    }
}

} /* extern "C" */
