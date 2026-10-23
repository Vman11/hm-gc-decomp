// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
#pragma opt_propagation off
extern char lbl_803618E0[4];
extern char lbl_80361954[7];
extern char lbl_8036195C[6];
extern char lbl_80361964[8];
extern char lbl_8029A530[];
u32 fn_8023F52C(void *, char *, char *, char *, s32, s32);
void fn_8023F214(void *);

void fn_8009EDE4(u8 *p) {
    char *s = lbl_8029A530;
    *(u32 *)(p + 0x118) = fn_8023F52C(p, lbl_803618E0, lbl_803618E0, lbl_80361954, 1, 0);
    *(u32 *)(p + 0x11c) = fn_8023F52C(p, lbl_803618E0, lbl_803618E0, s + 208, 1, 0);
    *(u32 *)(p + 0x120) = fn_8023F52C(p, lbl_803618E0, lbl_803618E0, s + 224, 1, 0);
    *(u32 *)(p + 0x124) = fn_8023F52C(p, lbl_803618E0, lbl_803618E0, s + 240, 1, 0);
    *(u32 *)(p + 0x128) = fn_8023F52C(p, lbl_803618E0, lbl_803618E0, s + 256, 1, 0);
    *(u32 *)(p + 0x12c) = fn_8023F52C(p, lbl_803618E0, lbl_803618E0, lbl_8036195C, 1, 0);
    *(u32 *)(p + 0x130) = fn_8023F52C(p, lbl_803618E0, lbl_803618E0, lbl_80361964, 1, 0);
    *(u32 *)(p + 0x134) = fn_8023F52C(p, lbl_803618E0, lbl_803618E0, s + 272, 1, 0);
    *(u32 *)(p + 0x138) = fn_8023F52C(p, lbl_803618E0, lbl_803618E0, s + 288, 1, 0);
    *(u32 *)(p + 0x13c) = fn_8023F52C(p, lbl_803618E0, lbl_803618E0, s + 300, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
