// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct H801D895C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21();
    virtual s32 v22(void *p, void *a);
};
struct N801D895C {
    H801D895C *h;
    s32 active;
    N801D895C *next;
};
struct T801D895C {
    u8 pad[128];
    virtual void w0();
};
struct W801D895C {
    u8 pad[128];
    virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3();
    virtual void w4(); virtual void w5(); virtual void w6(); virtual void w7();
    virtual void w8(); virtual void w9(); virtual void w10(); virtual void w11();
    virtual void w12(); virtual void w13(); virtual void w14(); virtual void w15();
    virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19();
    virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23();
    virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27();
    virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31();
    virtual void w32(); virtual void w33(); virtual void w34(); virtual void w35();
    virtual void w36(); virtual void w37(); virtual void w38(); virtual void w39();
    virtual void w40(); virtual void w41(); virtual void w42(); virtual void w43();
    virtual void w44(); virtual void w45();
    virtual void w46(void *a);
};

s32 fn_801D895C(u8 *p, void *a) {
    s32 blocked;
    N801D895C *n;
    W801D895C *w;
    s32 r;
    blocked = 0;
    for (n = M2C_FIELD(p, N801D895C **, 136); n != 0; n = n->next) {
        if (n->active != 0 && n->h->v22(p, a) == 0) blocked = 1;
    }
    if (blocked) return 0;
    w = M2C_FIELD(p, W801D895C **, 284);
    if (w != 0) w->w46(a);
    r = 0;
    blocked = 0;
    for (n = M2C_FIELD(p, N801D895C **, 136); n != 0; n = n->next) {
        if (n->active == 0 && n->h->v22(p, a) == 0) blocked = 1;
    }
    return blocked ? 0 : r;
}

} /* extern "C" */
