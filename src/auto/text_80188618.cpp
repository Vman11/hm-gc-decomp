// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80188618 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(void *, s32); };
extern "C" { extern u32 lbl_8035AE8C; }

void fn_80188618(u8 *p, u8 *q) {
    if (*(void **)(p + 32) != 0) {
        void *s1 = *(void **)(q + 28);
        void *s2 = *(void **)(q + 32);
        u8 *n;
        *(void **)(q + 28) = q + 4;
        *(void **)(q + 32) = q + 16;
        for (n = *(u8 **)(p + 32); n != 0; n = *(u8 **)(n + 24)) {
            u8 *o = *(u8 **)(n + 12);
            if ((*(u32 *)o & 0x200) && *(u32 *)(o + 100) != lbl_8035AE8C) {
                ((V_80188618 *)o)->m(q, 0);
                *(u32 *)(o + 100) = lbl_8035AE8C;
            }
        }
        *(void **)(q + 28) = s1;
        *(void **)(q + 32) = s2;
    }
}

} /* extern "C" */
