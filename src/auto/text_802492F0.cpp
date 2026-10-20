// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_802492F0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual s32 m6(void *); virtual void m7(void *); };
extern "C" u32 *fn_800F8274(void *, void *);

void fn_802492F0(u8 *p, u8 *x) {
    s32 i4 = *(s32 *)(x + 8) * 4;
    s32 c = *(s32 *)(*(u8 **)(p + 116) + i4);
    u32 *e;
    if (c == 0) {
        *(s32 *)(*(u8 **)(p + 112) + i4) = 0;
    } else if (c > 0) {
        *(s32 *)(*(u8 **)(p + 116) + i4) = c - 1;
    }
    e = fn_800F8274(p + 20, x);
    if (e != NULL) {
        void **a;
        u32 n;
        n = e[1];
        a = (void **)(*(u8 **)(p + 48) + e[0] * 4);
        while (n != 0) {
            if (((V_802492F0 *)p)->m6(*a) != 0) {
                ((V_802492F0 *)p)->m7(*a);
                return;
            }
            n--;
            a++;
        }
    }
}

} /* extern "C" */
