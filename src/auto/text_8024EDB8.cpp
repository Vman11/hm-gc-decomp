// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S1_8024EDB8 { u8 pad[0x24]; virtual void p0(); virtual void m(); };
struct S2_8024EDB8 { u8 pad[0x74]; virtual void p0(); virtual void m(); };
struct S3_8024EDB8 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
struct V4_8024EDB8 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void a(void *); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void y(void *); };
extern u8 *lbl_8035B460;
void fn_8023C754(void *);
void __dt__9C8023C7CCFv(void *, s32);
void __dla__FPv(void *);

void fn_8024EDB8(u8 *p) {
    u8 *g;
    V4_8024EDB8 *h;
    if (*(void **)(p + 0x94) != NULL) {
        fn_8023C754(*(void **)(p + 0x94));
        __dt__9C8023C7CCFv(*(void **)(p + 0x94), 1);
    }
    if (*(void **)(p + 0x34C) != NULL) {
        __dla__FPv(*(void **)(p + 0x34C));
    }
    g = *(u8 **)(lbl_8035B460 + 0xC);
    h = *(V4_8024EDB8 **)(g + 0x2F44);
    if (*(void **)(p + 0x148) != NULL) {
        (*(V4_8024EDB8 **)(g + 0x2C44))->y(*(void **)(p + 0x148));
    }
    ((S1_8024EDB8 *)(p + 0x1C4))->m();
    ((S2_8024EDB8 *)(p + 0x14C))->m();
    ((S2_8024EDB8 *)(p + 0x1F0))->m();
    if (*(void **)(p + 0x1EC) != NULL) {
        h->a(*(void **)(p + 0x1EC));
    }
    *(s32 *)(p + 0x94) = 0;
    *(s32 *)(p + 0x98) = 0;
    *(s32 *)(p + 0x348) = 0;
    *(s32 *)(p + 0x34C) = 0;
    *(s32 *)(p + 0x148) = 0;
    *(s32 *)(p + 0x1EC) = 0;
    ((S3_8024EDB8 *)(p + 0x4C))->m();
}

} /* extern "C" */
