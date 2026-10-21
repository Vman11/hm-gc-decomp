// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct H801CB3CC {
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
    virtual s32 v33(void *p, void *a);
};
struct N801CB3CC { H801CB3CC *h; s32 active; N801CB3CC *next; };
struct L801CB3CC {
    u8 pad[52];
    virtual void x0();
    virtual void x1();
    virtual void x2();
    virtual void x3();
    virtual void x4();
    virtual void x5();
    virtual void x6(s32 a, void *b);
};
struct P801CB3CC {
    u8 pad[104];
    void *f104;
    u8 pad108[4];
    L801CB3CC *f112;
    u8 pad116[12];
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void w7();
    virtual void w8();
    virtual void w9();
    virtual void w10();
    virtual void w11();
    virtual void w12();
    virtual void w13();
    virtual void w14();
    virtual void w15();
    virtual void w16();
    virtual void w17();
    virtual void w18();
    virtual void w19();
    virtual void w20();
    virtual void w21();
    virtual void w22();
    virtual void w23();
    virtual void w24();
    virtual void w25();
    virtual void w26();
    virtual void w27();
    virtual void w28();
    virtual void w29();
    virtual void w30();
    virtual void w31();
    virtual void w32();
    virtual void w33();
    virtual void w34();
    virtual void w35();
    virtual void w36();
    virtual void w37();
    virtual void w38();
    virtual void w39();
    virtual void w40();
    virtual void w41();
    virtual void w42();
    virtual void w43();
    virtual void w44();
    virtual s32 w45(void *a);
};
s32 fn_801CB3CC(P801CB3CC *p, void *a, s32 b) {
    s32 blocked;
    N801CB3CC *n;
    s32 r;
    blocked = 0;
    for (n = M2C_FIELD(p, N801CB3CC **, 136); n != 0; n = n->next) {
        if (n->active != 0 && n->h->v33(p, a) == 0) blocked = 1;
    }
    if (blocked) return 0;
    r = p->w45(a);
    if (b != 0 && p->f112 != 0) p->f112->x6(16, p->f104);
    b = 0;
    for (n = M2C_FIELD(p, N801CB3CC **, 136); n != 0; n = n->next) {
        if (n->active == 0 && n->h->v33(p, a) == 0) b = 1;
    }
    return b ? 0 : r;
}

} /* extern "C" */
