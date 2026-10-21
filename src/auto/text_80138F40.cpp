// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C8014AAC8 { public: u8 d[16]; C8014AAC8(); ~C8014AAC8(); };
struct Obj { u8 pad[0x1C]; u32 x; u8 pad20[4]; };
struct Desc { void *b; u32 one; u32 c3; u32 d; u32 e; };
struct Sh { virtual void p0(); virtual void set(u32); };
struct G { u32 cnt; u8 pad[0x80]; Sh *sh; };
struct Fac { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual Sh *make(); };
struct B { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual Fac *fac(); };
struct P { u8 pad[8]; void *h; u8 padC[0xAC]; Sh *sh; u8 padBC[0x24]; u32 n; u32 padE4; C8014AAC8 *arr; u8 padEC[8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void release(); };
extern "C" { void fn_8014CA08(Obj *); void fn_8014C8C8(Obj *, u32, u32, u32); void fn_8013F908(P *, Desc *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AC58; extern G *lbl_8035AC5C; }

extern "C" void fn_80138F40(P *p, B *b, u32 c, u32 d, s32 e) {
    Desc desc;
    Obj obj;
    Obj *o = &obj;
    fn_8014CA08(o);
    if (p->h != 0) {
        p->release();
    }
    if (lbl_8035AC5C->cnt < 1) {
        lbl_8035AC5C->sh = b->fac()->make();
        lbl_8035AC5C->sh->set(257);
    }
    lbl_8035AC5C->cnt++;
    p->sh = lbl_8035AC5C->sh;
    desc.b = b;
    desc.one = 1;
    desc.c3 = c * 3;
    if (d != 0) {
        desc.d = d;
    } else {
        desc.d = 1;
    }
    if (e != 0) {
        desc.e = 1;
    } else {
        desc.e = 2;
    }
    fn_8014C8C8(o, 0x8080, 0, 1);
    o->x = 0;
    fn_8013F908(p, &desc);
    p->n = d;
    if (p->n != 0) {
        if (!lbl_8035AC58) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AC58);
        p->arr = new C8014AAC8[p->n];
        fn_800F7E98();
        if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    }
}

} /* extern "C" */
