// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_801AF494 { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(s32); };
struct V2_801AF494 { u8 pad[0xC]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void n(); };
void fn_801B1D54(void *, s32);
void fn_801AD760(void *);
void fn_801D7680(void *, void *, void *);

s32 fn_801AF494(u8 *p, void *a, void *b) {
    switch (*(s32 *)(p + 0x144)) {
    case 16:
    case 32:
    case 128:
        *(s32 *)(p + 0x144) = 2;
        fn_801B1D54(p, 0);
        *(s32 *)(p + 0x174) = 0;
        if (*(V1_801AF494 **)(p + 0x194) != NULL) {
            (*(V1_801AF494 **)(p + 0x194))->m(0);
        }
        fn_801AD760(*(void **)(p + 0x188));
        (*(V2_801AF494 **)(p + 0x18C))->n();
        break;
    }
    fn_801D7680(p, a, b);
    return 0;
}

} /* extern "C" */
