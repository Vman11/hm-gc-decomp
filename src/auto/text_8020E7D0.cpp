#include "common.h"
extern "C" {
struct V_8020E7D0 { u8 pad[0x60]; virtual void p0(); virtual void p1(); virtual void m(); };
extern u32 lbl_80365828;
s32 fn_800D0B94(s32, s32, s32);
void fn_8020BB10(void *e, void *a, void *b, s32 c, u32 i);
static inline void Upd(u8 *p) {
    u8 *q;
    u32 i;
    for (i = 0, q = p; i < 2; i++) {
        s32 r;
        do { r = fn_800D0B94(i, 0, 0); } while (r == -1);
        if (r == 0 || r == -2) *(u32 *)(q + 0xC) |= lbl_80365828;
        else *(u32 *)(q + 0xC) &= ~0x20;
        q += 0xA944;
    }
}
void fn_8020E7D0(u8 *p, void *a, void *b) {
    u8 *q;
    u32 i;
    if (*(s32 *)(p + 86668) != 0) {
        for (i = 0, q = p; i < 2; i++) {
            ((V_8020E7D0 *)(q + 4))->m();
            q += 0xA944;
        }
        *(s32 *)(p + 86668) = 0;
    }
    {
    u8 *w;
    u32 j;
    for (j = 0, w = p; j < 2; j++) {
        fn_8020BB10(w + 4, a, b, 0, j);
        w += 0xA944;
    }
    }
    Upd(p);
    *(s32 *)(p + 86668) = 1;
}
}
