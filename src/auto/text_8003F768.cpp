// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8003F768 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void m17(); virtual void m18(); virtual void p19(); virtual void m20(); };
extern "C" { extern char lbl_80294F04[]; void *fn_80242144(void *, s32); void fn_80242BC0(void *, const char *, s32, s32, s32, s32); void fn_8023FE08(void *, f32); void fn_8004058C(void *, f32); }

void fn_8003F768(u8 *p, f32 f) {
    if (*(s32 *)(p + 380) == 0) {
        *(s32 *)(p + 380) = 1;
        fn_80242BC0(fn_80242144(p, 2), lbl_80294F04, 0, 0, 0, 0);
    }
    if (*(s32 *)(p + 368) != 0) {
        (*(V_8003F768 **)(p + 224))->m20();
        (*(V_8003F768 **)(p + 224))->m18();
        if (*(u32 **)(p + 340) != NULL) {
            **(u32 **)(p + 340) &= ~0x800;
        }
        fn_8023FE08(p, f);
    } else {
        (*(V_8003F768 **)(p + 224))->m17();
        fn_8004058C(p, f);
    }
}

} /* extern "C" */
