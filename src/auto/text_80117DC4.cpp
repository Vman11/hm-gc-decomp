// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C800FB424 { public: u8 d[292]; ~C800FB424(); };
class C800F5578 : public C800FB424 { public: C800F5578(); virtual void vfx(); u8 rest[1396]; ~C800F5578() {} };
class C8011C224 { public: u8 d[0x70]; C8011C224(); ~C8011C224(); };
struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, void *); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct P { u8 pad[0x10]; virtual void p0(); virtual void clr(); C8011C224 *arr; void *v; };
struct Nm { u8 d[8]; };
extern "C" { u32 fn_800FADA8(R *); void fn_800FB064(R *, void *); void fn_800FB000(R *, s32); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_800F8E38(P *, u32); void fn_8011C28C(void *, P *, void *); void fn_800F87F0(P *, void *, void *); void fn_8011BDB0(C8011C224 *, void *, R *); void fn_800F5F40(void *, void *, void *, s32); extern void *lbl_8035AB18; extern u8 lbl_802E3128[]; extern u8 lbl_802E31F0[]; extern void *lbl_80359718; }

extern "C" void fn_80117DC4(P *p, void *x, R *r) {
    Nm nm;
    Nm key;
    C800F5578 obj;
    Nm *name;
    u32 n;
    u32 k;
    u32 i;
    name = 0;
    p->clr();
    p->v = x;
    fn_800F5F40(&obj, lbl_802E31F0, lbl_80359718, 0);
    r->setup(lbl_802E3128, 23, &obj);
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
    if (!lbl_8035AB18) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AB18);
    p->arr = new C8011C224[n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    fn_800F8E38(p, n);
    fn_8011C28C(x, p, name);
    for (i = 0; i < n; i++) {
        fn_800FB000(r, 58);
        fn_800FB064(r, &key);
        fn_8011BDB0(&p->arr[i], p->v, r);
        fn_800F87F0(p, &key, &p->arr[i]);
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
