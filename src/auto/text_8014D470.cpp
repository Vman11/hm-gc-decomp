// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B_8014D470 {
    u8 pad[40];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void *v5();
};

struct A_8014D470 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual B_8014D470 *v4();
};

struct C_8014D470 {
    u8 pad[48];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual s32 v5(void *, void *);
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual u32 v13();
};

typedef struct {
    u8 b[36];
} Sub_8014D470;

typedef struct {
    u32 a;
    u32 b;
    Sub_8014D470 sub;
    void *c;
    u32 d;
    u32 e;
    u32 f;
} L_8014D470;

typedef struct {
    u8 pad0[8];
    u32 f8;
    u32 *fC;
    u8 pad10[4];
    A_8014D470 *f14;
    C_8014D470 *f18;
    u32 f1C;
    u8 pad20[20];
    u8 m34[36];
    u8 m58[20];
    u32 f6C;
    B_8014D470 *f70;
    void *f74;
} P_8014D470;

extern u32 lbl_803644F8;
void fn_8014CB5C(Sub_8014D470 *);
void fn_8014CAA0(void *, void *);
void fn_80148118(void *);
void fn_801482DC(void *, void *);

s32 fn_8014D470(P_8014D470 *p, void *a2, u32 a3, B_8014D470 *a4, void *a5, void *a6, u32 a7, u32 a8) {
    L_8014D470 l;
    s32 r;
    fn_8014CB5C(&l.sub);
    l.a = 0;
    l.b = 0;
    l.c = 0;
    l.d = 0;
    l.e = 0;
    fn_8014CAA0(p->m34, a2);
    p->f6C = a3;
    p->f70 = a4;
    p->f74 = a5;
    if (a6 == 0) {
        fn_80148118(p->m58);
    } else {
        fn_801482DC(p->m58, a6);
    }
    fn_8014CAA0(&l.sub, a2);
    l.a = a3;
    l.c = a6;
    l.d = a7;
    l.e = a8;
    l.f = *p->fC;
    if (a4 == 0) {
        a4 = p->f14->v4();
    }
    if (a5 == 0) {
        a5 = a4->v5();
    }
    r = p->f18->v5(a5, &l);
    if (r != 0) {
        return r;
    }
    p->f1C = p->f18->v13();
    p->f8 |= lbl_803644F8;
    return 0;
}

} /* extern "C" */
