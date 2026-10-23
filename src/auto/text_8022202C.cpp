// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80278920(void *);
void fn_80278F54(void *);
void fn_802781F4(void *, void *, u32, u32, s32, s32, u32);
void DCFlushRange(void *, u32);
}

struct T8022202C {
    u8 pad0[28];
    u16 f1C;
    u16 f1E;
    u8 pad20[80 - 32];
    void *f50[4];
    s32 f60;
};

struct A8022202C {
    u8 pad0[48];
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
    virtual T8022202C *GetTex();
};

struct Q8022202C {
    u8 pad0[30];
    u16 f1E;
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void Lock(void **buf, u32 *w, s32 n);
    virtual void Unlock();
};

struct B8022202C {
    u8 pad0[20];
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
    virtual Q8022202C *Get(s32 i);
};

struct S8022202C {
    u8 pad0[4];
    A8022202C *f4;
    u8 pad8[24 - 8];
    B8022202C *f18;
    u8 pad1C[76 - 28];
    u32 f4C;
    u8 pad50[100 - 80];
    void *f64;
};

extern "C" {
void fn_8022202C(S8022202C *p) {
    fn_80278920(p->f64);
    if (!(p->f4C & 2)) {
        T8022202C *t;
        void *buf;
        u32 h;
        u32 w;
        t = p->f4->GetTex();
        fn_802781F4(p->f64, buf = t->f50[t->f60], w = t->f1C * 2, h = t->f1E, 0, 0, 0x8000000D);
        DCFlushRange(buf, h * w);
    } else {
        Q8022202C *q;
        void *a;
        u32 b;
        q = p->f18->Get(0);
        q->Lock(&a, &b, 2);
        fn_802781F4(p->f64, a, b, q->f1E, 0, 0, 0x80000003);
        q->Unlock();
    }
    fn_80278F54(p->f64);
}

} /* extern "C" */
