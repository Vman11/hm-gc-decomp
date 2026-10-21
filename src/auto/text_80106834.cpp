// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
class C801063F0 { public: u8 d[80]; C801063F0(); ~C801063F0(); };
struct P { void *h; u8 pad4[0xC]; virtual void p0(); virtual void clr(); u8 sub[0x10]; u32 n; C801063F0 *arr; };
struct Nm { u8 d[8]; };
extern "C" { u32 fn_800FADA8(R *); void fn_800FB064(R *, void *); void fn_800FB000(R *, s32); void fn_800FAEF8(R *); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_800F8E38(P *, u32); void fn_800FF930(void *, R *); void fn_800F87F0(P *, void *, void *); void fn_80106220(C801063F0 *, P *, R *, u32); void fn_801061A4(C801063F0 *); extern void *lbl_8035AA48; extern u8 lbl_802E2480[]; }

extern "C" void fn_80106834(P *p, R *r) {
    Nm key;
    u32 i;
    if (p->h != 0) {
        p->clr();
    }
    r->setup(lbl_802E2480, 5, 0);
    fn_800FB000(r, 57);
    fn_800FAEF8(r);
    fn_800FB000(r, 58);
    fn_800FF930(p->sub, r);
    fn_800FB000(r, 59);
    p->n = fn_800FADA8(r);
    if (p->n < 1) {
        r->err(35);
    }
    fn_800F8E38(p, p->n);
    if (!lbl_8035AA48) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AA48);
    p->arr = new C801063F0[p->n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    for (i = 0; i < p->n; i++) {
        fn_800FB000(r, 59);
        fn_800FB064(r, &key);
        fn_800F87F0(p, &key, &p->arr[i]);
        fn_80106220(&p->arr[i], p, r, i);
    }
    for (i = 0; i < p->n; i++) {
        fn_801061A4(&p->arr[i]);
    }
    fn_800FAEA0(r);
    fn_800FAEA0(r);
}

} /* extern "C" */
