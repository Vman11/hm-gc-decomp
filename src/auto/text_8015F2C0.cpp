#include "common.h"
extern "C" {
}
struct Q_F2C0 { u8 pad_[220]; u32 f220; u8 pad__[12]; u32 f236; u8 pad___[4];
    virtual void v8(void *, int, u16); virtual void v12(void *, int, u16); virtual void v2(); virtual void v20(void *, int, u16); virtual void v24(void *, int, u16);
};
struct P_F2C0 { void *f0; u8 pad[16]; int f20; u8 pad2[12]; u16 f36; u8 pad3[2]; u16 f40; u16 f42; u8 f44[16]; u8 f60[16]; u16 f76; };
extern "C" {
extern u8 *lbl_8035AC5C;
void fn_80138D8C(Q_F2C0 *);
void fn_80138D34(Q_F2C0 *, u8, u32);
void fn_80138CBC(Q_F2C0 *, void *);
void fn_801742D8(Q_F2C0 *, u16, u16, u8 *);
void fn_801743B8(Q_F2C0 *, u16, u16, u8 *);
void fn_80174158(Q_F2C0 *, u16, u16, u8 *);
void fn_80174238(Q_F2C0 *, u16, u16, u8 *);
void fn_8015F2C0(P_F2C0 *p, void *vq, int mode) {
    void *t = p->f0;
    Q_F2C0 *q = (Q_F2C0 *)vq;
    if (!t) return;
    if (p->f42 == 0) {
        fn_80138D8C(q);
    } else {
        u32 i;
        for (i = 0; i < p->f42; i++) {
            u8 b = p->f44[i];
            if (b && (q->f236 & 1)) return;
            fn_80138D34(q, b, i);
        }
        q->f220 = p->f42;
    }
    fn_80138CBC(q, t);
    if (mode) {
        if (p->f36 & 4) q->v20(lbl_8035AC5C + 16, p->f20, p->f40);
        else if (p->f36 & 8) q->v24(lbl_8035AC5C + 16, p->f20, p->f40);
        else if (p->f36 & 0x20) fn_801742D8(q, p->f76, p->f40, p->f60);
        else fn_801743B8(q, p->f76, p->f40, p->f60);
    } else {
        if (p->f36 & 4) q->v8(lbl_8035AC5C + 16, p->f20, p->f40);
        else if (p->f36 & 8) q->v12(lbl_8035AC5C + 16, p->f20, p->f40);
        else if (p->f36 & 0x20) fn_80174158(q, p->f76, p->f40, p->f60);
        else fn_80174238(q, p->f76, p->f40, p->f60);
    }
}
}
extern "C" {
}
