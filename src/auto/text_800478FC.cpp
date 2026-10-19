// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800478FC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(f32 *, s32, s32, f32 *, s32); };
extern f32 lbl_8035D120;
void fn_8023F5E8(void *, s32);
void fn_80257A4C(void *, f32 *);
void fn_8023FE08(void *, f32);

void fn_800478FC(u8 *p, f32 f) {
    if (*(s32 *)(p + 308) != 0) {
        f32 a[3];
        f32 b[3];
        fn_8023F5E8(p, 0);
        (*(V_800478FC **)(p + 0xE0))->m(a, 0, 0, b, 0);
        b[0] = b[0] * lbl_8035D120;
        b[1] = b[1] * lbl_8035D120;
        b[2] = b[2] * lbl_8035D120;
        a[0] = a[0] + b[0];
        a[1] = a[1] + b[1];
        a[2] = a[2] + b[2];
        fn_80257A4C(*(void **)(*(u8 **)(p + 0xC0) + 4), a);
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
