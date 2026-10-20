// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8008975C { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m6(s32); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m10(); };
extern "C" { extern char lbl_8035FECC[8]; extern volatile f32 lbl_8035FEB8; void *fn_8023BC90(const char *); void fn_8023B7A0(void *, void *); void fn_8005F620(void *); }

struct S_8008975C { u8 pad[1000]; V_8008975C *a[6]; };

void fn_8008975C(u8 *p) {
    void *x = *(void **)(p + 888);
    u32 i;
    if (x != NULL) {
        fn_8023B7A0(fn_8023BC90(lbl_8035FECC), x);
    }
    for (i = 0; i < 6; i++) {
        if (((S_8008975C *)p)->a[i] != NULL) {
            ((S_8008975C *)p)->a[i]->m10();
            if (((S_8008975C *)p)->a[i] != NULL) {
                ((S_8008975C *)p)->a[i]->m6(1);
            }
        }
    }
    fn_8005F620(p);
    *(s32 *)(p + 896) = 0;
    *(f32 *)(p + 900) = lbl_8035FEB8;
    *(s32 *)(p + 908) = 0;
    *(s32 *)(p + 888) = 0;
    *(f32 *)(p + 912) = lbl_8035FEB8;
    *(f32 *)(p + 916) = lbl_8035FEB8;
    *(f32 *)(p + 920) = lbl_8035FEB8;
    *(s32 *)(p + 1000) = 0;
    *(s32 *)(p + 1024) = 0;
    *(s32 *)(p + 1004) = 0;
    *(s32 *)(p + 1028) = 0;
    *(s32 *)(p + 1008) = 0;
    *(s32 *)(p + 1032) = 0;
    *(s32 *)(p + 1012) = 0;
    *(s32 *)(p + 1036) = 0;
    *(s32 *)(p + 1016) = 0;
    *(s32 *)(p + 1040) = 0;
    *(s32 *)(p + 1020) = 0;
    *(s32 *)(p + 1044) = 0;
    *(s32 *)(p + 608) = 32;
    *(s32 *)(p + 948) = 0;
}

} /* extern "C" */
