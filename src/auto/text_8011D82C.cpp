// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8011D82C { u8 pad[0xD0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void *m(u32); };
extern "C" { extern f32 lbl_80363DB0; f32 fn_80118ACC(void *); }

f32 fn_8011D82C(V_8011D82C *q, u32 i) {
    u8 *p = (u8 *)q;
    if (i >= *(u32 *)(p + 172)) {
        return lbl_80363DB0;
    }
    if (i < *(u32 *)(p + 4)) {
        return fn_80118ACC(q->m(i));
    }
    i -= *(u32 *)(p + 4);
    if (i < *(u32 *)(p + 8)) {
        return (*(f32 **)(p + 160))[i];
    }
    return lbl_80363DB0;
}

} /* extern "C" */
