#include "common.h"

extern "C" {

struct E35 { u8 pad[0x30]; u8 f30; u8 pad31[3]; u8 f34; };
struct I35 { u32 f0; E35 **f4; };
struct C35 { u8 pad[0x6c]; I35 *f6c; u8 pad70[0x90 - 0x70]; u8 *f90;
    I35 *Info() {
        I35 *n = f6c;
        if (n == 0) n = (I35 *)(f90 + 0x1c);
        return n;
    }
};
struct B35 { C35 *f0; };
struct C8013ECE4 {
    C8013ECE4();
    ~C8013ECE4();
    u32 f0;
    void **f4;
};
struct V35 {
    u8 pad[0x10];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void Setup(void *, u32, u32, u32, s32);
    virtual void v7();
    virtual void *Get(u32);
};
struct G35 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8();
    virtual V35 *Make();
};
struct H35 { u8 pad[0x2c44]; G35 *f2c44; u8 pad2c48[4]; void *f2c4c; };
struct W35 { u8 pad[0xc]; H35 *fc; };
struct P35 {
    u8 pad[4];
    u32 f4[30];
    u32 f7c;
    B35 ***f80;
    u32 f84;
    C8013ECE4 *f88;
    V35 *f8c;
};
extern W35 *lbl_8035B460;
extern void *lbl_8035B398;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8013EBAC(C8013ECE4 *, void *, u32);
void fn_8012FE8C(void *, void *, V35 *, E35 *);

void fn_80235BBC(P35 *p) {
    u32 total = 0;
    u32 slots = 0;
    u32 i;
    for (i = 0; i < p->f7c; i++) {
        if (p->f80[i]) {
            total += p->f4[i];
            slots += p->f4[i] * (*p->f80[i])->f0->Info()->f0;
        }
    }
    if (total == 0) return;
    void *ctx = lbl_8035B460->fc->f2c4c;
    if (lbl_8035B398 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B398);
    p->f88 = new C8013ECE4[total];
    fn_800F7E98();
    if (p->f88 == 0) fn_800604C4(-4, 0, 0, 0);
    p->f8c = lbl_8035B460->fc->f2c44->Make();
    u32 sa = 0;
    u32 sb = 0;
    for (i = 0; i < p->f7c; i++) {
        if (p->f80[i]) {
            I35 *n = (*p->f80[i])->f0->Info();
            u32 a = 0;
            u32 b = 0;
            for (u32 j = 0; j < n->f0; j++) {
                a += n->f4[j]->f30;
                b += n->f4[j]->f34;
            }
            sa += a * p->f4[i];
            sb += b * p->f4[i];
        }
    }
    p->f8c->Setup(ctx, sb, sa, slots, 0);
    u32 k = 0;
    u32 idx = 0;
    for (i = 0; i < p->f7c; i++) {
        I35 *n = (*p->f80[i])->f0->Info();
        for (u32 j = 0; j < p->f4[i]; j++) {
            fn_8013EBAC(&p->f88[k], ctx, n->f0);
            for (u32 m = 0; m < n->f0; m++) {
                void *x = p->f8c->Get(idx++);
                fn_8012FE8C(x, ctx, p->f8c, n->f4[m]);
                p->f88[k].f4[m] = x;
            }
            p->f80[i][j]->f0->f6c = (I35 *)&p->f88[k];
            k++;
        }
    }
}

}
