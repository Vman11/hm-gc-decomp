// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80236BAC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void m18(); virtual void p19(); virtual void m20(); };
struct W_80236BAC { u8 pad[0x4]; virtual void p0(); virtual void m(void *); };
extern "C" { extern void *lbl_8035B388; extern u32 lbl_80365F00; void fn_8022BE28(void *, void *); void fn_802354B4(void *, void *); void fn_8022C4A0(void *); u32 *fn_8022D694(void *); void *fn_8022C3F4(void *); }

void fn_80236BAC(u8 *p) {
    if (*(s32 *)(p + 508) != 0) {
        fn_8022BE28(p, *(void **)(p + 496));
    }
    fn_802354B4(lbl_8035B388, p);
    ((V_80236BAC *)p)->m20();
    ((V_80236BAC *)p)->m18();
    fn_8022C4A0(p);
    if (*(s32 *)(p + 492) != 0) {
        if (fn_8022D694(p) != NULL) {
            u32 *e = fn_8022D694(p);
            if (e[12] & 1) {
                e[0] |= lbl_80365F00;
                if (e[3] != 0) {
                    ((W_80236BAC *)e[3])->m(e);
                }
            }
        }
        if (fn_8022C3F4(p) != NULL) {
            fn_8022BE28(p, 0);
        }
    *(s32 *)(p + 508) = 0;
    *(s32 *)(p + 512) = 0;
    *(s32 *)(p + 492) = 0;
    }
}

} /* extern "C" */
