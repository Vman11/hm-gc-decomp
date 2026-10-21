#include "common.h"
extern "C" {
void fn_801C2368(u32, u32, s32);
void fn_801C2800(u32, u32, s32);
struct VCall_fn_801AEE60_0 { virtual s32 m(s32); };
struct VCall_fn_801AEE60_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void m(u8 *, u32); };
struct VCall_fn_801AEE60_2 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(s32); };
struct VCall_fn_801AEE60_3 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void m(s32, s32); };
struct VCall_fn_801AEE60_4 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void m(s32, s32); };

struct L801AEE60 { VCall_fn_801AEE60_0 *obj; s32 enabled; L801AEE60 *next; };

void fn_801AEE60(u8 *param_1, u32 param_2) {
    L801AEE60 *l;
    u8 *q;

    for (l = *(L801AEE60 **)(param_1 + 0x88); l != 0; l = l->next) {
        if (l->obj->m(4) != 0 && l->enabled != 0) {
            ((VCall_fn_801AEE60_1 *)l->obj)->m(param_1, param_2);
        }
    }
    ((VCall_fn_801AEE60_2 *)param_1)->m(0);
    *(u32 *)(param_1 + 0x6c) &= ~2;
    if (*(u32 *)(param_1 + 0xe0) != 0) {
        fn_801C2368(*(u32 *)(param_1 + 0x7c), *(u32 *)(param_1 + 0xe0), 1);
        ((VCall_fn_801AEE60_3 *)param_1)->m(0, 1);
        ((VCall_fn_801AEE60_4 *)*(u32 *)(param_1 + 0xe0))->m(0, 1);
    }
    q = *(u8 **)(param_1 + 0x7c);
    if (*(u8 **)(q + 0x10) == param_1) {
        fn_801C2800((u32)q, *(u32 *)(q + 4), 1);
    }
}

} /* extern "C" */
