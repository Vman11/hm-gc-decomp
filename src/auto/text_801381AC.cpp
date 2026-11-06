#include "common.h"
extern "C" {
struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
struct B { u8 pad[60]; u8 f60[24]; u8 f84[4]; };
struct T;
typedef char NM[8];
struct E { u8 pad[20]; virtual void v0(); virtual void v1(R *); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(B *, T *, char *); };
struct T {
    u32 f0;
    u8 pad[12];
    virtual void v0(); virtual void v1(); virtual void v2(B *); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual E *v11(u32); virtual E *v12(u32); virtual E *v13(u32);
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f32;
    u32 f36;
};
extern char lbl_802E5650[];
extern char lbl_8029F270[];
extern void *lbl_8035A9F4;
u32 fn_800FADA8(R *);
u32 fn_800FB33C(R *);
void fn_800FAEA0(R *);
void fn_800FAFA8(R *);
void fn_800FAF50(R *);
void fn_800FB000(R *, int);
void fn_800FB064(R *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
void fn_800F8E38(T *, u32);
void fn_80135FF4(B *, T *, char *);
void fn_800F87F0(T *, void *, E *);
void fn_80060568(char *, int, int, int);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
static inline void *look(B *b, char *nm, void *id) {
    if (nm == 0 || *nm == 0) return fn_800F9398(b->f60, id);
    return fn_800F9788(b->f84, nm, id);
}
#define LDN(F, VS, VE, TK, ARR) \
    if (t->F && cnt) r->v4(39); \
    t->F = fn_800FADA8(r); \
    if (!t->F) r->v4(35); \
    t->VS(); \
    ALLOC(lbl_8035A9F4, ARR, new NM[t->F]) \
    p = ARR; \
    for (tok = 0; tok < t->F; p++, tok++) { \
        fn_800FB000(r, TK); \
        fn_800FB064(r, *p); \
        e = t->VE(tok); \
        if (look(b, name, *p)) (*p)[0] = 0; \
        else fn_800F87F0(t, *p, e); \
        e->v1(r); \
    } \
    fn_800FAEA0(r);
#define FIN(F, VE, ARR) \
    p = ARR; \
    for (cnt = 0; cnt < t->F; p++, cnt++) if ((*p)[0]) t->VE(cnt)->v12(b, t, *p);
void fn_801381AC(T *t, B *b, R *r) {
    u32 cnt = 0;
    NM *n1 = 0;
    NM *n2 = 0;
    NM *n3 = 0;
    char *name;
    E *e;
    NM *p;
    u32 tok;
    if (t->f20 + t->f24) t->v1();
    r->s2(lbl_802E5650, 30, 0);
    tok = r->v5();
    name = 0;
    if (tok == 57) {
        char nb[8];
        fn_800FB064(r, nb);
        name = nb;
        tok = r->v5();
    }
    t->v2(b);
    while (tok != 0) {
        switch (tok) {
        case 58:
            if (t->f20) r->v4(39);
            fn_800FAFA8(r);
            t->f20 = fn_800FB33C(r);
            if (!t->f20) r->v4(35);
            fn_800FAF50(r);
            t->v3();
            break;
        case 59:
            if (t->f24) r->v4(39);
            fn_800FAFA8(r);
            t->f24 = fn_800FB33C(r);
            if (!t->f24) r->v4(35);
            fn_800FAF50(r);
            t->v4();
            break;
        case 60:
            if (t->f0) r->v4(39);
            fn_800FAFA8(r);
            cnt = fn_800FB33C(r);
            if (!cnt) r->v4(35);
            fn_800FAF50(r);
            fn_800F8E38(t, cnt);
            fn_80135FF4(b, t, name);
            break;
        case 61:
            LDN(f28, v5, v11, 61, n1)
            break;
        case 62:
            LDN(f32, v6, v12, 62, n2)
            break;
        case 63:
            fn_80060568(lbl_8029F270, 0, 0, 0);
            LDN(f36, v7, v13, 63, n3)
            break;
        default:
            r->v4(30);
            break;
        }
        tok = r->v5();
    }
    FIN(f28, v11, n1)
    FIN(f32, v12, n2)
    FIN(f36, v13, n3)
    if (n1) delete[] n1;
    if (n2) delete[] n2;
    if (n3) delete[] n3;
}
}
