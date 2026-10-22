// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035ADD0;

} /* extern "C" */
struct G80188F68 {
    u8 pad0[6448];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void f37(u32);
};
struct C80188F68 {
    u8 pad0[8];
    G80188F68 *f8;
    u8 padC[548];
    s32 f230;
    u8 pad234[12];
    s32 f240;
    s32 f244;
};
struct X80188F68 {
    u8 pad0[8];
    void *f8;
};
struct O80188F68 {
    u8 pad0[104];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual u32 f20(C80188F68 *, void *);
    u8 pad6C[20];
    u32 f80;
};
struct N80188F68 {
    u8 pad0[12];
    O80188F68 *fC;
    u8 pad10[4];
    X80188F68 *f14;
    N80188F68 *f18;
};
struct S80188F68 {
    u8 pad0[12];
    void *fC;
    u8 pad10[12];
    N80188F68 *f1C;
};
extern "C" {

s32 fn_8017DEA8(void *, C80188F68 *);
void fn_801886C4(void *, C80188F68 *, O80188F68 *);

void fn_80188F68(S80188F68 *p, void *a1, C80188F68 *c) {
    N80188F68 *n;
    X80188F68 *x;
    O80188F68 *o;
    u32 v;
    if (p->fC != 0) {
        s32 r = fn_8017DEA8(p->fC, c);
        c->f230 = 1;
        if (r == 0) return;
    } else {
        c->f230 = 1;
        c->f244 = c->f240;
    }
    for (n = p->f1C; n != 0; n = n->f18) {
        o = n->fC;
        if (lbl_8035ADD0 != o->f80) {
            x = n->f14;
            v = o->f20(c, x->f8);
            if (v != 64) {
                c->f8->f37(v);
                fn_801886C4(x->f8, c, o);
            }
            o->f80 = lbl_8035ADD0;
        }
    }
}

} /* extern "C" */
