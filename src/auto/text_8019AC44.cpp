// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Q_8019AC44 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void m(); };
extern f32 lbl_80364CC4;

void fn_8019AC44(u8 *p, u32 *q, u8 *n, u8 *k) {
    if (*q & 4) {
        ((Q_8019AC44 *)q)->m();
    }
    {
        f32 x;
        f32 y;
        f32 z;
        x = *(f32 *)((u8 *)q + 24);
        y = *(f32 *)((u8 *)q + 28);
        z = *(f32 *)((u8 *)q + 32);
        *(u8 **)n = p;
        *(f32 *)(n + 4) = x;
        *(f32 *)(n + 8) = y;
        *(f32 *)(n + 12) = z;
    }
    *(f32 *)(n + 16) = lbl_80364CC4;
    *(u8 **)(n + 20) = ((u8 **)(q + 16))[*(s32 *)(p + 76)];
    ((u8 **)(q + 16))[*(s32 *)(p + 76)] = n;
    *(u8 **)(n + 24) = k;
    *(u8 **)(n + 28) = 0;
    *(u32 **)(k + 12) = q;
    *(u8 **)(k + 16) = 0;
    *(u8 **)(k + 20) = 0;
}

} /* extern "C" */
