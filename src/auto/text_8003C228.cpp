// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A_8003C228 { u8 pad[16]; virtual ~A_8003C228(); };
struct B_8003C228 { u8 pad[36]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); };
struct C_8003C228 { u8 pad[116]; virtual ~C_8003C228(); virtual void f1(); };
struct D_8003C228 {
    u8 pad[164];
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
    virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7();
    virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11();
    virtual void f12();
};
struct M_8003C228 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(B_8003C228 *);
    virtual void m27(); virtual void m28(D_8003C228 *);
};
extern u8 *lbl_8035A1DC;
void __dl__FPv(void *);

struct C8003C388 {
    u32 x0;
    B_8003C228 *x4;
    D_8003C228 *x8;
    C_8003C228 *x12;
    u8 pad16[20];
    u32 x36;
    u8 pad40[8];
    u32 x48;
    u8 pad52[4];
    u32 x56;
    u32 x60;
    u32 x64;
    u8 pad68[12];
    u32 x80;
    u8 pad84[16];
    u32 x100;
    u8 pad104[4];
    u32 x108;
    u8 pad112[4];
    u32 x116;
    A_8003C228 *x120;
};

C8003C388 *__dt__9C8003C388Fv(C8003C388 *p, s16 f)
{
    if (p) {
        if (p->x120) {
            delete p->x120;
        }
        if (p->x4) {
            p->x4->f3();
            (*(M_8003C228 **)(lbl_8035A1DC + 11332))->m26(p->x4);
        }
        if (p->x12) {
            p->x12->f1();
            delete p->x12;
            p->x12 = 0;
        }
        if (p->x8) {
            p->x8->f12();
            (*(M_8003C228 **)(lbl_8035A1DC + 11332))->m28(p->x8);
        }
        p->x60 = 0;
        p->x56 = 0;
        p->x64 = 0;
        p->x80 = 0;
        p->x116 = 0;
        p->x4 = 0;
        p->x8 = 0;
        p->x12 = 0;
        p->x36 = 0;
        p->x48 = 0;
        p->x100 = 0;
        p->x108 = 18;
        p->x120 = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
