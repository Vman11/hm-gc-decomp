// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80366568;
s32 fn_800FBB9C(void);
}

struct Y80253304 {
    u8 pad0[12];
    s32 fC;
    u8 pad10[208 - 16];
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
    virtual void Play(s32 i, s32 n, f32 f);
    virtual void Stop(s32 i);
};

struct M80253304 {
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
    virtual Y80253304 **Get(s32 id);
};

struct G80253304 {
    u8 pad0[24];
    M80253304 *f18;
};

struct S80253304 {
    s32 f0;
    s32 f4;
    u8 pad8[28 - 8];
    s32 f1C;
    s32 f20;
    u8 pad24[44 - 36];
    G80253304 *f2C;
    s32 f30;
};

extern "C" {
void fn_80253304(S80253304 *p, s32 n, f32 f) {
    s32 cnt;
    s32 i;
    if (p->f0 == -1) return;
    p->f20 = n + (n != 0 ? fn_800FBB9C() : 0);
    p->f4 = 3;
    if (p->f0 != -1) {
        cnt = (*p->f2C->f18->Get(p->f0))->fC;
        for (i = 0; i < cnt; i++) {
            if (f > lbl_80366568 && p->f30 == 0) {
                (*p->f2C->f18->Get(p->f0))->Play(i, n, f);
            } else {
                (*p->f2C->f18->Get(p->f0))->Stop(i);
            }
        }
    }
    p->f1C = fn_800FBB9C();
}

} /* extern "C" */
