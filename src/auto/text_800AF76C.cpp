#include "common.h"
extern "C" {
#pragma opt_propagation off
extern u8 lbl_802D55C8[];
extern void *lbl_8035B79C;
struct O800AF76C { u8 pad[0x60]; s32 f60; };
void fn_80241628(O800AF76C *, int, int);
void fn_802491DC(O800AF76C *, int);
void fn_8026820C(void *, s32);
void fn_80268178(void *, s32);
void fn_800AF76C(O800AF76C *o, s32 idx) {
    u8 *b = lbl_802D55C8;
    s32 *st = (s32 *)(b + 0x2ec);
    s32 *len = (s32 *)(b + 0x308);
    s32 n;
    s32 t;
    t = o->f60;
    n = st[idx];
    while (t > 0) {
        if (len[n] > t) break;
        t -= ((s32 *)(b + 0x308))[n++];
    }
    u32 *ty = (u32 *)(b + 0x324);
    switch (ty[n]) {
    case 0: fn_80241628(o, 0, 0); break;
    case 1: fn_802491DC(o, 0); break;
    case 2: fn_8026820C(lbl_8035B79C, 7); break;
    case 3: fn_802491DC(o, 1); fn_80268178(lbl_8035B79C, 7); break;
    case 4: fn_8026820C(lbl_8035B79C, 8); break;
    case 5: fn_802491DC(o, 2); fn_80268178(lbl_8035B79C, 8); break;
    case 6: fn_8026820C(lbl_8035B79C, 9); break;
    case 7: break;
    }
}
}
