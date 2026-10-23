// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
#pragma opt_propagation off
extern char lbl_803626D0[4];
extern char lbl_80362990[5];
extern char lbl_80362998[7];
extern char lbl_8029B3E0[];
u32 fn_8023F52C(void *, char *, char *, char *, s32, s32);
void fn_8023F214(void *);

void fn_800AE5F4(u8 *p) {
    char *s = lbl_8029B3E0;
    *(u32 *)(p + 0x11c) = fn_8023F52C(p, lbl_803626D0, lbl_803626D0, s + 768, 1, 0);
    *(u32 *)(p + 0x120) = fn_8023F52C(p, lbl_803626D0, lbl_803626D0, s + 784, 1, 0);
    *(u32 *)(p + 0x124) = fn_8023F52C(p, lbl_803626D0, lbl_803626D0, s + 796, 1, 0);
    *(u32 *)(p + 0x128) = fn_8023F52C(p, lbl_803626D0, lbl_803626D0, s + 812, 1, 0);
    *(u32 *)(p + 0x12c) = fn_8023F52C(p, lbl_803626D0, lbl_803626D0, s + 828, 1, 0);
    *(u32 *)(p + 0x130) = fn_8023F52C(p, lbl_803626D0, lbl_803626D0, s + 840, 1, 0);
    *(u32 *)(p + 0x134) = fn_8023F52C(p, lbl_803626D0, lbl_80362990, s + 856, 1, 0);
    *(u32 *)(p + 0x138) = fn_8023F52C(p, lbl_803626D0, lbl_80362990, s + 872, 1, 0);
    *(u32 *)(p + 0x13c) = fn_8023F52C(p, lbl_803626D0, lbl_803626D0, s + 888, 1, 0);
    *(u32 *)(p + 0x140) = fn_8023F52C(p, lbl_803626D0, lbl_803626D0, lbl_80362998, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
