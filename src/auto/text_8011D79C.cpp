// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8011D79C { u8 pad[0xD0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void *m(u32); };
void fn_80118988(void *, f32);

void fn_8011D79C(V_8011D79C *p, u32 i, f32 f) {
    u8 *b = (u8 *)p;
    if (i < *(u32 *)(b + 0xAC)) {
        u32 n = *(u32 *)(b + 4);
        if (i < n) {
            fn_80118988(p->m(i), f);
        } else {
            i -= n;
            if (i < *(u32 *)(b + 8)) {
                (*(f32 **)(b + 0xA4))[i] = (*(f32 **)(b + 0xA0))[i];
                (*(f32 **)(b + 0xA0))[i] = f;
            }
        }
    }
}

} /* extern "C" */
