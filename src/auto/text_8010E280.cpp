// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8010E280 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
extern "C" { void fn_8010A594(void *); void fn_800E1E88(void *, void *); void __dt__9C8010C41CFv(void); void __dt__9C8010D328Fv(void); void __dla__FPv(void *); }

void fn_8010E280(V_8010E280 *q) {
    u8 *p = (u8 *)q;
    u32 n;
    u32 off;
    u32 i;
    i = 0;
    off = 0;
    n = *(u32 *)(*(u8 **)(p + 48) + 32);
    for (; i < n; i++) {
        u8 *o = *(u8 **)(*(u8 **)(p + 52) + off);
        if (o != 0) {
            if (*(s32 *)(*(u8 **)o + 8) == 5) {
                u8 *e;
                u32 j;
                for (e = o, j = 0; j < *(u32 *)(p + 32); e += 60, j++) {
                    fn_8010A594(e);
                }
            }
            fn_800E1E88(*(void **)(*(u8 **)(p + 52) + off), (void *)__dt__9C8010C41CFv);
        }
        off += 4;
    }
    if (*(void **)(p + 52) != 0) {
        __dla__FPv(*(void **)(p + 52));
    }
    if (*(void **)(p + 40) != 0) {
        fn_800E1E88(*(void **)(p + 40), (void *)__dt__9C8010D328Fv);
    }
    if (*(void **)(p + 28) != 0) {
        __dla__FPv(*(void **)(p + 28));
    }
    if (*(void **)(p + 56) != 0) {
        __dla__FPv(*(void **)(p + 56));
    }
    q->m();
}

} /* extern "C" */
