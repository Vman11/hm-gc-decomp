// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
class C8013ECE4 { public: u8 d[8]; C8013ECE4(); ~C8013ECE4(); };
struct P { u8 pad[0x14]; u32 n; C8013ECE4 *arr; };
struct Nm { u8 d[8]; };
extern "C" { u32 fn_800FADA8(R *); void fn_800FB064(R *, void *); void fn_800FB000(R *, s32); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_800F8E38(P *, u32); void fn_80135EA0(void *, P *, void *); void fn_800F87F0(P *, void *, void *); void fn_8013EA54(C8013ECE4 *, void *, R *); void fn_8013E904(C8013ECE4 *, void *, R *, void *); extern void *lbl_8035AC88; }

extern "C" void fn_8013ED50(P *p, void *x, R *r) {
    Nm nm;
    Nm key;
    Nm *name;
    BOOL f;
    u32 k;
    u32 i;
    k = r->next();
    name = 0;
    if (k == 58) {
        fn_800FB064(r, &nm);
        name = &nm;
        k = r->next();
    }
    f = FALSE;
    if (k == 60) {
        f = TRUE;
    } else if (k != 59) {
        r->err(30);
    }
    p->n = fn_800FADA8(r);
    if (!lbl_8035AC88) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC88);
    p->arr = new C8013ECE4[p->n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    fn_800F8E38(p, p->n);
    fn_80135EA0(x, p, name);
    for (i = 0; i < p->n; i++) {
        fn_800FB000(r, 59);
        fn_800FB064(r, &key);
        fn_800F87F0(p, &key, &p->arr[i]);
        if (f) {
            fn_8013EA54(&p->arr[i], x, r);
        } else {
            fn_8013E904(&p->arr[i], x, r, name);
        }
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
