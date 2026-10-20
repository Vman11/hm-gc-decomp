// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8011F990 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual u32 n(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual u8 **g(u32); };

u8 **fn_8011F990(V_8011F990 *q, u32 k) {
    u32 n = q->n();
    u32 i;
    for (i = 0; i < n; i++) {
        u8 **o = q->g(i);
        u8 *x = *o;
        if (*(s32 *)(x + 188) != 0 && *(s32 *)(x + 192) != 0) {
            if (k-- == 0) {
                return o;
            }
        }
    }
    return 0;
}

} /* extern "C" */
