// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R;
class C801178EC { public: u8 pad[0xD0]; C801178EC(); virtual ~C801178EC(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void load(u32, R *); u8 padD4[0x120 - 0xD4]; };
struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct P { u8 pad[0x10]; virtual void p0(); virtual void clr(); C801178EC *arr; u32 v; };
struct Nm { u8 d[8]; };
extern "C" { u32 fn_800FADA8(R *); void fn_800FB064(R *, void *); void fn_800FB000(R *, s32); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_800F8E38(P *, u32); void fn_8011C2D0(void *, P *, void *); void fn_800F87F0(P *, void *, void *); extern void *lbl_8035AB10; extern u8 lbl_802E30D8[]; }

extern "C" void fn_80117A10(P *p, void *x, R *r) {
    Nm nm;
    Nm key;
    Nm *name;
    u32 n;
    u32 k;
    u32 i;
    name = 0;
    p->clr();
    r->setup(lbl_802E30D8, 8, 0);
    k = r->next();
    if (k == 57) {
        fn_800FB064(r, &nm);
        name = &nm;
        k = r->next();
    }
    if (k != 58) {
        r->err(30);
    }
    n = fn_800FADA8(r);
    if (!lbl_8035AB10) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AB10);
    p->arr = new C801178EC[n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    fn_800F8E38(p, n);
    fn_8011C2D0(x, p, name);
    for (i = 0; i < n; i++) {
        fn_800FB000(r, 58);
        fn_800FB064(r, &key);
        p->arr[i].load(p->v, r);
        fn_800F87F0(p, &key, &p->arr[i]);
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
