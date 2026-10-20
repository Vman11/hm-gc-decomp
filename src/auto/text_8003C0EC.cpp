// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A_8003C0EC { u8 pad[0x10]; virtual void d(s32); };
struct B_8003C0EC { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct G_8003C0EC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void a(void *); virtual void p27(); virtual void b(void *); };
struct C_8003C0EC { u8 pad[0x74]; virtual void d(s32); virtual void m(); };
struct D_8003C0EC { u8 pad[0xA4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(); };
extern "C" { extern u8 *lbl_8035A1DC; }

void fn_8003C0EC(u8 *p) {
    if (*(A_8003C0EC **)(p + 120) != 0) {
        if (*(A_8003C0EC **)(p + 120) != 0) {
            (*(A_8003C0EC **)(p + 120))->d(1);
        }
    }
    if (*(B_8003C0EC **)(p + 4) != 0) {
        (*(B_8003C0EC **)(p + 4))->m();
        (*(G_8003C0EC **)(lbl_8035A1DC + 11332))->a(*(void **)(p + 4));
    }
    if (*(C_8003C0EC **)(p + 12) != 0) {
        (*(C_8003C0EC **)(p + 12))->m();
        if (*(C_8003C0EC **)(p + 12) != 0) {
            (*(C_8003C0EC **)(p + 12))->d(1);
        }
        *(s32 *)(p + 12) = 0;
    }
    if (*(D_8003C0EC **)(p + 8) != 0) {
        (*(D_8003C0EC **)(p + 8))->m();
        (*(G_8003C0EC **)(lbl_8035A1DC + 11332))->b(*(void **)(p + 8));
    }
    *(s32 *)(p + 60) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 64) = 0;
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 116) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 100) = 0;
    *(s32 *)(p + 108) = 18;
    *(s32 *)(p + 120) = 0;
}

} /* extern "C" */
