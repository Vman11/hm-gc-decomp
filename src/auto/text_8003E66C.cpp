// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V0_8003E66C { u8 pad[0x2F0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void b(void *); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void a(); };
struct V1_8003E66C { u8 pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(void *, s32, s32); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void n(); };
struct V2_8003E66C { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void k(s32); };
extern V0_8003E66C *lbl_8035B65C;
extern void *lbl_8035A00C;
extern f32 lbl_8035C1E0;
void fn_801C28C0(void *, f32);
void fn_801C3050(void *, void *);
void fn_80039258(void *, void *);

void fn_8003E66C(u8 *p) {
    if (lbl_8035B65C != NULL && (*(u32 *)((u8 *)lbl_8035B65C + 0x8C) & 0x80)) {
        lbl_8035B65C->a();
        lbl_8035B65C->b(*(void **)(p + 0x2A4));
    }
    fn_801C28C0(*(void **)(p + 0x29C), lbl_8035C1E0);
    if (lbl_8035B65C == NULL) {
        (*(V1_8003E66C **)(p + 0x2A4))->m(*(void **)(p + 0x2A0), 7, 0);
    } else {
        (*(V1_8003E66C **)(p + 0x2A4))->m(*(void **)(p + 0x2A0), 0, 0);
    }
    fn_801C3050(*(void **)(p + 0x29C), *(void **)(p + 0x2A4));
    (*(V1_8003E66C **)(p + 0x2A4))->n();
    fn_80039258(lbl_8035A00C, *(void **)(p + 0x2A4));
    (**(V2_8003E66C ***)(p + 0x2A4))->k(1);
}

} /* extern "C" */
