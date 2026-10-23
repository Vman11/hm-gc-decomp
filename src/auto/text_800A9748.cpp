// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
/* The statics stand for lbl_802D1F48 (0x2D8 bytes, in jt_802D1F48; also used by text_800A99DC): fn_800A9748
   addresses it through the section base at offsets 632 (tabA), 648 (tabB) and 688 (tabC). d000 is filler (the
   real bytes 0..631 hold pointers); tabA/tabB/tabC hold the real values. */
static u8 d000_800A9748[632] = { 1 };
static s32 tabA_800A9748[4] = { 0, 3, 5, 8 };
static s32 tabB_800A9748[10] = { 1, 1, 1, 1, 2, 1, 1, 1, 2, 1 };
static s32 tabC_800A9748[10] = { 0, 1, 2, 3, 2, 4, 3, 4, 5, 3 };
typedef struct O800A9748 {
    u32 flags;
    u8 pad4[60];
    void *f64;
} O800A9748;
typedef struct H800A9748 {
    u8 pad0[4];
    u16 f4;
} H800A9748;
typedef struct C800A9748 {
    u8 pad0[156];
    H800A9748 *f156;
} C800A9748;
typedef struct G800A9748 {
    u8 pad0[484];
    void *f484;
} G800A9748;
typedef struct M800A9748 {
    u8 pad0[12];
    void *f12;
    u8 pad16[100];
    G800A9748 *f116;
} M800A9748;
typedef struct S800A9748 {
    u8 pad0[96];
    s32 f96;
    u8 pad100[124];
    C800A9748 *f224;
    u8 pad228[52];
    O800A9748 *f280;
} S800A9748;
extern M800A9748 *lbl_8035B65C;
extern u32 lbl_80362130;
void fn_8019AE40(void *, O800A9748 *);
void fn_802494A4(S800A9748 *, s32);

void fn_800A9748(S800A9748 *self, s32 n) {
    s32 *q;
    s32 idx;
    s32 t;
    H800A9748 *h;
    idx = tabA_800A9748[n];
    t = self->f96;
    for (q = tabB_800A9748 + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tabB_800A9748[idx++];
    }
    switch (tabC_800A9748[idx]) {
    case 0:
        h = self->f224->f156;
        if (h != 0 && h->f4 == 15) {
            self->f280 = (O800A9748 *)h;
        }
        if (self->f280 != 0 && self->f280->f64 == 0) {
            fn_8019AE40(lbl_8035B65C->f12, self->f280);
            fn_8019AE40(lbl_8035B65C->f116->f484, self->f280);
        }
        if (self->f280 != 0) {
            self->f280->flags &= ~0x800;
        }
        break;
    case 1:
        if (self->f280 != 0) {
            self->f280->flags |= lbl_80362130;
        }
        break;
    case 2:
        if (self->f280 != 0) {
            self->f280->flags &= ~0x800;
        }
        break;
    case 3:
        return;
    case 4:
        fn_802494A4(self, 1);
        break;
    case 5:
        fn_802494A4(self, 2);
        break;
    case 6:
        break;
    }
}

} /* extern "C" */
