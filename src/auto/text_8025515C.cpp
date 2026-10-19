// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8025515C { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void *m(s32); };
extern u32 lbl_803665E8;
extern u32 lbl_803665F0;
extern u8 lbl_802A98B0[];
extern u8 lbl_802A98BC[];
V_8025515C *fn_80248F64(void *, void *, void *);

void fn_8025515C(u8 *p) {
    *(void **)(p + 0x2CC) = fn_80248F64(&lbl_803665E8, &lbl_803665F0, lbl_802A98B0)->m(0);
    *(void **)(p + 0x2D0) = fn_80248F64(&lbl_803665E8, &lbl_803665F0, lbl_802A98BC)->m(0);
}

} /* extern "C" */
