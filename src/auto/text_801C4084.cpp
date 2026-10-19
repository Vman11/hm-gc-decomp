// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801C4084 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void a(s32, s32); virtual void b(s32, s32); };
void fn_801D7548(void *, f32);
void fn_801C2368(void *, void *, s32);

void fn_801C4084(V_801C4084 *p, f32 f) {
    u8 *q = (u8 *)p;
    fn_801D7548(p, f);
    *(f32 *)(q + 0x1AC) += f;
    if (*(V_801C4084 **)(q + 0xE0) != NULL && *(f32 *)(q + 0x1AC) >= *(f32 *)(q + 0x168)) {
        (*(V_801C4084 **)(q + 0xE0))->a(0, 1);
        fn_801C2368(*(void **)(q + 0x7C), *(void **)(q + 0xE0), 1);
        p->b(0, 1);
    }
}

} /* extern "C" */
