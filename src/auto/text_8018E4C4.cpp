// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Nm { u8 d[8]; };
struct Key { u8 d[8]; };
class C8018B484 { public: u8 d[0x34]; C8018B484(); ~C8018B484(); };
class C80179FE4 { public: u8 d[0x20]; C80179FE4(); ~C80179FE4(); };
class C80197BEC { public: u8 d[0x18]; C80197BEC(); ~C80197BEC(); };
class C801805A0 { public: u8 d[0x20]; C801805A0(); ~C801805A0(); };
class C80185E60 { public: u8 d[0x1C]; C80185E60(); ~C80185E60(); };
class C8017B8EC { public: u8 d[0x18]; C8017B8EC(); ~C8017B8EC(); };
struct P { void *h; u8 pad4[0xC]; virtual void p0(); virtual void clr(); u32 n5; u32 n6; u32 n7; u32 n8; u32 n9; u32 n10; C8018B484 *a5; C80179FE4 *a6; C80197BEC *a7; C801805A0 *a8; C80185E60 *a9; C8017B8EC *a10; };
extern "C" { u32 fn_800FADA8(R *); u32 fn_800FB33C(R *); void fn_800FB064(R *, void *); void fn_800FB000(R *, s32); void fn_800FAEA0(R *); void fn_800FAFA8(R *); void fn_800FAF50(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_800F8E38(P *, u32); void fn_8017F708(void *, P *, void *); void fn_800F87F0(P *, void *, void *); extern void *lbl_8035AE48; extern u8 lbl_802E8F98[];
    void fn_8018B2FC(C8018B484 *, void *, R *);
    void fn_80179F48(C80179FE4 *, R *);
    void fn_80197B58(C80197BEC *, R *);
    void fn_8018019C(C801805A0 *, R *);
    void fn_80185BFC(C80185E60 *, void *, R *);
    void fn_8017B784(C8017B8EC *, void *, R *);
}

extern "C" void fn_8018E4C4(P *p, void *x, R *r) {
    Key key;
    Nm nm;
    u32 n;
    Nm *name;
    u32 k;
    u32 i;
    if (p->h != 0) {
        p->clr();
    }
    r->setup(lbl_802E8F98, 57, 0);
    if (r->next() == 108) {
        fn_800FB064(r, &nm);
        name = &nm;
        r->next();
    } else {
        name = 0;
    }
    fn_800FAFA8(r);
    n = fn_800FB33C(r);
    fn_800FAF50(r);
    if (n < 1) {
        r->err(35);
    }
    fn_800F8E38(p, n);
    fn_8017F708(x, p, name);
    while ((k = r->next()) != 0) {
        switch ((s32)k) {
        case 58:
            if (p->n5 != 0) {
                r->err(39);
            }
            p->n5 = fn_800FADA8(r);
            if (!lbl_8035AE48) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AE48);
            p->a5 = new C8018B484[p->n5];
            fn_800F7E98();
            if (!p->a5) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n5; i++) {
                fn_800FB000(r, 58);
                fn_800FB064(r, &key);
                fn_800F87F0(p, &key, &p->a5[i]);
                fn_8018B2FC(&p->a5[i], *(void **)((u8 *)x + 4), r);
            }
            fn_800FAEA0(r);
            break;
        case 65:
            if (p->n6 != 0) {
                r->err(39);
            }
            p->n6 = fn_800FADA8(r);
            if (!lbl_8035AE48) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AE48);
            p->a6 = new C80179FE4[p->n6];
            fn_800F7E98();
            if (!p->a6) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n6; i++) {
                fn_800FB000(r, 65);
                fn_800FB064(r, &key);
                fn_800F87F0(p, &key, &p->a6[i]);
                fn_80179F48(&p->a6[i], r);
            }
            fn_800FAEA0(r);
            break;
        case 110:
            if (p->n7 != 0) {
                r->err(39);
            }
            p->n7 = fn_800FADA8(r);
            if (!lbl_8035AE48) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AE48);
            p->a7 = new C80197BEC[p->n7];
            fn_800F7E98();
            if (!p->a7) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n7; i++) {
                fn_800FB000(r, 110);
                fn_800FB064(r, &key);
                fn_800F87F0(p, &key, &p->a7[i]);
                fn_80197B58(&p->a7[i], r);
            }
            fn_800FAEA0(r);
            break;
        case 111:
            if (p->n8 != 0) {
                r->err(39);
            }
            p->n8 = fn_800FADA8(r);
            if (!lbl_8035AE48) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AE48);
            p->a8 = new C801805A0[p->n8];
            fn_800F7E98();
            if (!p->a8) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n8; i++) {
                fn_800FB000(r, 111);
                fn_800FB064(r, &key);
                fn_800F87F0(p, &key, &p->a8[i]);
                fn_8018019C(&p->a8[i], r);
            }
            fn_800FAEA0(r);
            break;
        case 102:
            if (p->n9 != 0) {
                r->err(39);
            }
            p->n9 = fn_800FADA8(r);
            if (!lbl_8035AE48) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AE48);
            p->a9 = new C80185E60[p->n9];
            fn_800F7E98();
            if (!p->a9) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n9; i++) {
                fn_800FB000(r, 102);
                fn_800FB064(r, &key);
                fn_800F87F0(p, &key, &p->a9[i]);
                fn_80185BFC(&p->a9[i], x, r);
            }
            fn_800FAEA0(r);
            break;
        case 105:
            if (p->n10 != 0) {
                r->err(39);
            }
            p->n10 = fn_800FADA8(r);
            if (!lbl_8035AE48) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AE48);
            p->a10 = new C8017B8EC[p->n10];
            fn_800F7E98();
            if (!p->a10) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n10; i++) {
                fn_800FB000(r, 105);
                fn_800FB064(r, &key);
                fn_800F87F0(p, &key, &p->a10[i]);
                fn_8017B784(&p->a10[i], x, r);
            }
            fn_800FAEA0(r);
            break;
        default:
            r->err(30);
            break;
        }
    }
}

} /* extern "C" */
