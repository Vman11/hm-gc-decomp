// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { u8 pad[0x10]; virtual void p0(); virtual void m(); };
struct D { u8 pad[0x10]; virtual void d(s32); };
extern "C" { extern u8 *lbl_8035AAB4; void fn_800F8DD0(void *); void __dla__FPv(void *); void fn_800E1E88(void *, void *); void __dt__9C80112EB8Fv(void); void __dt__9C8010C958Fv(void); }

void fn_8010C09C(u8 *p) {
    u32 i;
    fn_800F8DD0(p);
    ((V *)(p + 32))->m();
    if (lbl_8035AAB4 != 0) {
        if (p != lbl_8035AAB4) {
            u8 *t = lbl_8035AAB4;
            u8 *prev = lbl_8035AAB4;
            while (t != p && t != 0) {
                prev = t;
                if (t != 0) {
                    t = *(u8 **)(t + 68);
                }
            }
            *(u8 **)(prev + 68) = *(u8 **)(p + 68);
        } else {
            if (*(u8 **)(p + 68) == 0) {
                lbl_8035AAB4 = 0;
            } else {
                lbl_8035AAB4 = *(u8 **)(p + 68);
            }
        }
    }
    for (i = 0; i < *(u32 *)(p + 60); i++) {
        if (*(D ***)(p + 28) != 0 && (*(D ***)(p + 28))[i] != 0) {
            D *o = (*(D ***)(p + 28))[i];
            if (o != 0) {
                o->d(1);
            }
        }
    }
    if (*(void **)(p + 28) != 0) {
        __dla__FPv(*(void **)(p + 28));
    }
    if (*(void **)(p + 24) != 0) {
        fn_800E1E88(*(void **)(p + 24), (void *)__dt__9C80112EB8Fv);
    }
    if (*(void **)(p + 20) != 0) {
        fn_800E1E88(*(void **)(p + 20), (void *)__dt__9C8010C958Fv);
    }
    if (*(void **)(p + 76) != 0) {
        __dla__FPv(*(void **)(p + 76));
    }
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 72) = 0;
    lbl_8035AAB4 = 0;
    *(s32 *)(p + 68) = 0;
    *(s32 *)(p + 76) = 0;
    *(s32 *)(p + 64) = 1;
}

} /* extern "C" */
