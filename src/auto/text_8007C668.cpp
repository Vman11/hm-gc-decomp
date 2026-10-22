// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern char lbl_8035F8E8[4];
extern char lbl_8035F8F0[7];
extern char lbl_802986E0[];
u32 fn_8023F52C(void *, char *, char *, char *, s32, s32);
void fn_8023F214(void *);

void fn_8007C668(u8 *p) {
    char *s = lbl_802986E0;
    *(u32 *)(p + 0x118) = fn_8023F52C(p, lbl_8035F8E8, lbl_8035F8E8, s + 72, 1, 0);
    *(u32 *)(p + 0x11c) = fn_8023F52C(p, lbl_8035F8E8, lbl_8035F8E8, s + 88, 1, 0);
    *(u32 *)(p + 0x120) = fn_8023F52C(p, lbl_8035F8E8, lbl_8035F8E8, s + 104, 1, 0);
    *(u32 *)(p + 0x124) = fn_8023F52C(p, lbl_8035F8E8, lbl_8035F8E8, lbl_8035F8F0, 0, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
