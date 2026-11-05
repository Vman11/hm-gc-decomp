#include "common.h"
extern "C" {
typedef struct D_709C { u8 f0; u8 f1; u16 f2; u8 *f4; } D_709C;
void fn_80217224(D_709C *, int, int, u32);
void fn_800D6B8C(u8, u8, u16);
void fn_8021709C(D_709C *d, int mode, int fmt, u32 n) {
    u32 cnt;
    int hasb;
    u32 stride;
    u32 i, j;
    u8 *src;
    if (n == d->f1) {
        fn_80217224(d, mode, fmt, n);
        return;
    }
    if (mode == 0) fn_800D6B8C(d->f4[0] & 0xF8, fmt, *(u16 *)(d->f4 + 1));
    else if (mode == 1) fn_800D6B8C(0xA8, fmt, *(u16 *)(d->f4 + 1));
    else fn_800D6B8C(0xB8, fmt, *(u16 *)(d->f4 + 1));
    src = d->f4 + 3;
    hasb = d->f0 & 2;
    stride = d->f1 * 2;
    cnt = d->f2;
    for (i = 0; i < cnt; i++) {
        if (hasb) {
            *(volatile u8 *)0xCC008000 = *src;
            src++;
        }
        for (j = 0; j < n; j++) *(volatile u16 *)0xCC008000 = *(u16 *)src;
        src += stride;
    }
}
}
