// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct X801A0B20 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Set(void *a);
};
struct G801A0B20 {
    u8 pad[48];
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
    virtual X801A0B20 *Get();
};
struct H801A0B20 {
    u8 pad[4];
    G801A0B20 *m4;
};
struct R801A0B20 {
    u8 pad[16];
    void *m16;
    void *m20;
    u8 pad24[12];
    virtual void v0();
    virtual void v1();
    virtual void Release(s32 a);
};
struct S801A0B20 {
    u32 flags;
    u8 pad4[40];
    H801A0B20 *m44;
    u8 pad48[72];
    R801A0B20 *m120;
};
extern "C" {

void fn_801A0B20(S801A0B20 *s) {
    if (s->m120 && (s->flags & 0x1000)) {
        X801A0B20 *x = s->m44->m4->Get();
        x->Set(s->m120->m16);
        x->Set(s->m120->m20);
        if (s->m120) {
            s->m120->Release(1);
        }
        s->flags &= ~0x1000;
    }
    s->m120 = 0;
}

} /* extern "C" */
