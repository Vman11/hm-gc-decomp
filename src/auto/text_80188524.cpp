// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80188524 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void a(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void b(void *, void *, s32); };
extern u32 lbl_8035AE8C;
f32 fn_8010155C(void *, void *);

void fn_80188524(u8 *p, void *a, f32 *s) {
    u8 *q;
    for (q = *(u8 **)(p + 0x20); q != NULL; q = *(u8 **)(q + 0x18)) {
        u8 *r = *(u8 **)(q + 0xC);
        u32 fl = *(u32 *)r;
        if ((fl & 0x200) && *(u32 *)(r + 0x64) != lbl_8035AE8C) {
            f32 d;
            if (fl & 4) {
                ((V_80188524 *)r)->a();
            }
            d = *(f32 *)(r + 0x24) + s[3];
            d = d * d;
            if (fn_8010155C(s, r + 0x18) <= d) {
                ((V_80188524 *)r)->b(a, s, 0);
            }
            *(u32 *)(r + 0x64) = lbl_8035AE8C;
        }
    }
}

} /* extern "C" */
