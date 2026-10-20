// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad[0xA4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void d(s32); virtual void m(); };
struct B { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(void *); };
struct C { u8 pad[16]; virtual void p0(); virtual void m(); };
extern "C" { void fn_800E1E88(void *, void *); void fn_80140834(void); void fn_8013E720(void); void fn_8013F024(void); void fn_801086E8(void); void dtor_80105E74(void); void fn_80106A44(void); void __dla__FPv(void *); void fn_80129B88(void *); }

void fn_80129C48(u32 *p) {
    if (p[40] != 0) {
        ((A *)p[40])->m();
        if ((A *)p[40] != 0) {
            ((A *)p[40])->d(1);
        }
        p[40] = 0;
    }
    if (p[7] != 0) {
        fn_800E1E88((void *)p[7], (void *)fn_80140834);
    }
    if (p[6] != 0) {
        fn_800E1E88((void *)p[6], (void *)fn_8013E720);
    }
    if (p[5] != 0) {
        fn_800E1E88((void *)p[5], (void *)fn_8013F024);
    }
    if (p[4] != 0) {
        u32 i;
        for (i = 0; i < *(u16 *)((u8 *)p + 136); i++) {
            (*(B **)(*(u8 **)p + 56))->m(((void **)p[4])[i]);
        }
        __dla__FPv((void *)p[4]);
    }
    if (p[3] != 0) {
        fn_800E1E88((void *)p[3], (void *)fn_801086E8);
    }
    if (p[1] != 0) {
        fn_800E1E88((void *)p[1], (void *)dtor_80105E74);
    }
    if (p[2] != 0) {
        fn_800E1E88((void *)p[2], (void *)fn_80106A44);
    }
    ((C *)(p + 25))->m();
    ((C *)(p + 20))->m();
    ((C *)(p + 10))->m();
    ((C *)(p + 15))->m();
    fn_80129B88(p);
}

} /* extern "C" */
