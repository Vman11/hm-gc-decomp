#include "common.h"
extern "C" {
typedef enum { VF0 } VFmt;
typedef struct Fmt { u32 fl; u32 x4; u8 b8; u8 b9, b10, b11; u32 n; u8 tc[8]; } Fmt;
typedef struct Slot { u8 pad[28]; } Slot;
extern u32 lbl_802E6AA0[];
extern u32 lbl_802E6B24[];
void fn_800D590C(u32, u32, u32, u32, u8);
int fn_8014C4B4(Slot *, const Fmt *);
void fn_8014C734(Slot *);
void fn_8014C784(void *, const Fmt *);
static inline void Fmt1(u32 v, u32 a, u32 c, u32 t) {
    fn_800D590C(v, a, c, lbl_802E6AA0[t], lbl_802E6B24[t]);
}
static inline void AttrFmts(VFmt v, const Fmt *f) {
    u32 c8 = f->b8;
    u32 c11 = f->b11;
    u32 i;
    u32 n;
    fn_800D590C(v, 9, 1, lbl_802E6AA0[c8], lbl_802E6B24[c8]);
    fn_800D590C(v, 10, 0, lbl_802E6AA0[c11], lbl_802E6B24[c11]);
    if (f->fl & 0x1000) fn_800D590C(v, 25, 1, lbl_802E6AA0[c11], lbl_802E6B24[c11]);
    n = f->n;
    for (i = 0; i < n; i++) Fmt1(v, i + 13, 1, f->tc[i]);
}
static inline Slot *Sel(Slot *c, u32 vf) { return &c[(vf >> 1) & 1]; }
u32 fn_801578A4(Slot *c, const Fmt *l, int on) {
    Slot *sl;
    u32 vf;
    u32 fl = l->fl;
    vf = (((fl >> 7) & 1) ^ 1) | (((fl >> 12) & 1) ? 2 : 0);
    if (on) {
        vf |= 4;
        sl = Sel(c, vf);
        if (!fn_8014C4B4(sl, l)) {
            AttrFmts((VFmt)vf, l);
            fn_8014C734(sl);
            fn_8014C784(sl, l);
        }
    }
    return vf;
}
}
