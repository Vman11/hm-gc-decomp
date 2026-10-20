// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801DB4B0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual s32 c(void *); };
struct W_801DB4B0 { u8 pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(s32, void *); };
struct U_801DB4B0 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63(); virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67(); virtual void u(void *); };
struct S_801DB4B0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void m(void *, s32); };

static inline void set_801DB4B0(u8 *o, s32 s) {
    u8 *n;
    for (n = *(u8 **)(o + 136); n != 0; n = *(u8 **)(n + 8)) {
        (*(S_801DB4B0 **)n)->m(o, s);
    }
    *(u32 *)(o + 328) = *(u32 *)(o + 324);
    *(u32 *)(o + 324) = (*(u32 *)(o + 324) & 0xFFFF0000) | s;
}

void fn_801DB4B0(u8 *p, s32 c) {
    u8 *n;
    s32 r;
    r = 0;
    for (n = *(u8 **)(p + 136); n != NULL; n = *(u8 **)(n + 8)) {
        if ((*(V_801DB4B0 **)n)->c(p) == 0) {
            r = 1;
        }
    }
    if (r != 0) {
        return;
    }
    switch ((u16)*(u32 *)(p + 324)) {
    case 8:
        set_801DB4B0(p, 2);
        break;
    case 4:
        set_801DB4B0(p, 1);
        break;
    case 32:
        set_801DB4B0(p, 16);
        break;
    case 128:
        set_801DB4B0(p, 64);
        break;
    case 512:
        set_801DB4B0(p, 256);
        break;
    }
    if (c != 0 && *(W_801DB4B0 **)(p + 112) != NULL) {
        (*(W_801DB4B0 **)(p + 112))->m(16, *(void **)(p + 104));
    }
    if (*(U_801DB4B0 **)(p + 284) != NULL) {
        (*(U_801DB4B0 **)(p + 284))->u(p);
    }
}

} /* extern "C" */
