#include "common.h"
extern "C" {
struct C8019CF04 { u8 d[96]; C8019CF04(); ~C8019CF04(); };
extern "C" {
struct X_80272028;
struct T_80272028 { s32 n; X_80272028 *a[60]; u32 k[60]; C8019CF04 *mgr; s32 x; };
struct P_80272028 { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; s32 f14; s32 f18; };
extern void *lbl_8035B808;
extern u8 *volatile lbl_8035B460;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8019A4CC(P_80272028 *);
void fn_8019C9CC(C8019CF04 *, void *, P_80272028 *);

static inline void clr_80272028(T_80272028 *t) {
    u32 i;
    for (i = 0; i < 60; i++) {
        t->a[i] = 0;
        t->k[i] = 0;
    }
    t->x = 0;
    t->n = 0;
    t->mgr = 0;
}

void fn_80272028(T_80272028 *t) {
    volatile P_80272028 p;
    clr_80272028(t);
    t->x = 1;
    if (lbl_8035B808 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B808);
    t->mgr = new C8019CF04;
    fn_800F7E98();
    if (t->mgr == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_8019A4CC((P_80272028 *)&p);
    p.f4 = 1000;
    p.f0 = 1000;
    p.f18 = 1;
    p.f8 = 0;
    p.fc = 0;
    p.f10 = 0;
    p.f14 = 0;
    fn_8019C9CC(t->mgr, *(u8 **)(lbl_8035B460 + 0xc) + 0x3040, (P_80272028 *)&p);
}
}
}
