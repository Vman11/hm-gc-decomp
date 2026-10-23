// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Prm_801A2F64 {
    u32 v[7];
    u32 w[3];
    u32 x;
};

struct C801A2F64 {
    u32 *d;
    u32 d4;
    u8 pad[620];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(u32 *);
    virtual void *v4();
};

void fn_8017F1A4(Prm_801A2F64 *);
void fn_8017F990(void *, void *, u32, u8 *, u8 *, Prm_801A2F64 *);

void fn_801A2F64(C801A2F64 *p, u32 *q, u32 *d)
{
    Prm_801A2F64 prm;
    u8 *a;
    u8 *b;

    fn_8017F1A4(&prm);
    if (p->d != 0) {
        p->v2();
    }
    p->d = d;
    p->d4 = *d;
    p->v3(q);
    if (q[0] != 0) {
        prm.v[0] = q[0];
    }
    if (q[1] != 0) {
        prm.v[1] = q[1];
    }
    if (q[2] != 0) {
        prm.v[2] = q[2];
    }
    if (q[3] != 0) {
        prm.v[3] = q[3];
    }
    if (q[4] != 0) {
        prm.v[4] = q[4];
    }
    if (q[5] != 0) {
        prm.v[5] = q[5];
    }
    if (q[6] != 0) {
        prm.v[6] = q[6];
    }
    prm.x = *(u32 *)(p->d4 + 24);
    a = *(u8 **)(*(u8 **)(p->d4 + 8) + 128);
    b = *(u8 **)(*(u8 **)(*(u8 **)(a + 12) + 4) + 4);
    fn_8017F990(&p->pad, p->v4(), *(u32 *)(a + 24), **(u8 ***)(b + 124) + 8, b, &prm);
}

} /* extern "C" */
