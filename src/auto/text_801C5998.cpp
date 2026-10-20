// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801C5998 { virtual s32 m0(s32); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual s32 m46(void *, void *); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void m53(void *); virtual void m54(void *); };
extern "C" { void fn_801D1120(f32, void *); void fn_801D104C(f32, void *); extern f32 lbl_80364FFC; }

s32 fn_801C5998(u8 *p, u8 *a) {
    u8 *n;
    s32 r;
    u8 *o;
    u8 *n2;
    r = 0;
    for (n = *(u8 **)(p + 136); n != NULL; n = *(u8 **)(n + 8)) {
        if (*(s32 *)(n + 4) != 0 && (*(V_801C5998 **)n)->m46(p, a) == 0) {
            r = 1;
        }
    }
    if (r != 0) {
        return 0;
    }
    if ((*(u32 *)(p + 108) & 2) == 0) {
        return 0;
    }
    if (*(f32 *)(p + 368) > *(f32 *)(p + 372)) {
        *(f32 *)(p + 368) = lbl_80364FFC;
        if (a == *(u8 **)(p + 360)) {
            o = *(u8 **)(p + 364);
            for (n2 = *(u8 **)(o + 136); n2 != NULL; n2 = *(u8 **)(n2 + 8)) {
                if ((*(V_801C5998 **)n2)->m0(18) != 0 && *(s32 *)(n2 + 4) != 0) {
                    (*(V_801C5998 **)n2)->m53(o);
                }
            }
            if (*(s32 *)(o + 360) != 0) {
                fn_801D1120(-*(f32 *)(o + 456), o);
            }
            if (*(s32 *)(o + 384) != 0) {
                fn_801D104C(-*(f32 *)(o + 456), o);
            }
        }
        if (a == *(u8 **)(p + 356)) {
            o = *(u8 **)(p + 364);
            for (n2 = *(u8 **)(o + 136); n2 != NULL; n2 = *(u8 **)(n2 + 8)) {
                if ((*(V_801C5998 **)n2)->m0(18) != 0 && *(s32 *)(n2 + 4) != 0) {
                    (*(V_801C5998 **)n2)->m54(o);
                }
            }
            if (*(s32 *)(o + 360) != 0) {
                fn_801D1120(*(f32 *)(o + 456), o);
            }
            if (*(s32 *)(o + 384) != 0) {
                fn_801D104C(*(f32 *)(o + 456), o);
            }
        }
    }
    return 0;
}

} /* extern "C" */
