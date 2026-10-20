// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O_801297D0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(void *); };
struct Q_801297D0 { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual O_801297D0 *o(); };
extern "C" { extern f32 lbl_80363E64, lbl_80363E68, lbl_80363E6C, lbl_80363E70, lbl_80363E74, lbl_80363E78, lbl_80363E60; extern volatile f32 lbl_80363E7C; void fn_80104ED0(void *); double fn_800F03E4(double); }

void fn_801297D0(u8 *p) {
    f32 b, a, f;
    if (*(Q_801297D0 **)(p + 40) != 0) {
        O_801297D0 *o = (*(Q_801297D0 **)(p + 40))->o();
        if (*(void **)(p + 20) != 0) {
            o->m(*(void **)(p + 20));
        }
        if (*(void **)(p + 16) != 0) {
            o->m(*(void **)(p + 16));
        }
        if (*(void **)(p + 48) != 0) {
            o->m(*(void **)(p + 48));
        }
        if (*(void **)(p + 44) != 0) {
            o->m(*(void **)(p + 44));
        }
    }
    fn_80104ED0(p);
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(f32 *)(p + 52) = lbl_80363E64;
    *(f32 *)(p + 56) = lbl_80363E68;
    *(f32 *)(p + 76) = lbl_80363E6C;
    *(f32 *)(p + 80) = lbl_80363E70;
    *(f32 *)(p + 84) = lbl_80363E74;
    *(f32 *)(p + 88) = lbl_80363E78;
    *(f32 *)(p + 92) = lbl_80363E7C;
    *(f32 *)(p + 96) = lbl_80363E7C;
    *(s32 *)(p + 104) = 0;
    *(s32 *)(p + 100) = 0;
    f = fn_800F03E4(lbl_80363E60 * *(f32 *)(p + 52));
    a = f * *(f32 *)(p + 76);
    b = *(f32 *)(p + 56) * a;
    *(f32 *)(p + 60) = -b;
    *(f32 *)(p + 68) = b;
    *(f32 *)(p + 64) = -a;
    *(f32 *)(p + 72) = a;
}

} /* extern "C" */
