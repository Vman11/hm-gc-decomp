#include "common.h"

extern "C" {

typedef struct { u32 flags; u32 pad4[2]; u32 n; u8 ch[8]; u8 a; u8 b; } S8014C830;
void fn_801019A4(S8014C830 *, u32, u32, u8, u8, u8, u8);
void *memcpy(void *, const void *, unsigned long);
extern u32 lbl_803644D8;

void fn_8014C830(S8014C830 *p, u32 f, u32 g, u32 n, u8 c3, u8 c4, u8 c5, u8 c6, u32 a, u32 b, const u8 *src) {
    if (n < 1) {
        f &= 0x40007FFF;
    } else {
        if (n > 8) {
            n = 8;
        }
        f |= lbl_803644D8;
    }
    fn_801019A4(p, f, g, c3, c4, c5, c6);
    p->n = n;
    p->a = a;
    p->b = b;
    memcpy(p->ch, src, 8);
}

} /* extern "C" */
