// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern char lbl_8035FD40[4];
extern char lbl_8035FD9C[8];
extern char lbl_80298CC8[];
u32 fn_8023F52C(void *, char *, char *, char *, s32, s32);
void fn_8023F214(void *);

void fn_80084EA8(u8 *p) {
    char *s = lbl_80298CC8;
    *(u32 *)(p + 0x118) = fn_8023F52C(p, lbl_8035FD40, lbl_8035FD40, s + 84, 1, 0);
    *(u32 *)(p + 0x11c) = fn_8023F52C(p, lbl_8035FD40, lbl_8035FD40, s + 100, 1, 0);
    *(u32 *)(p + 0x120) = fn_8023F52C(p, lbl_8035FD40, lbl_8035FD40, s + 120, 1, 0);
    *(u32 *)(p + 0x124) = fn_8023F52C(p, lbl_8035FD40, lbl_8035FD40, s + 136, 1, 0);
    *(u32 *)(p + 0x128) = fn_8023F52C(p, lbl_8035FD40, lbl_8035FD40, s + 152, 1, 0);
    *(u32 *)(p + 0x12c) = fn_8023F52C(p, lbl_8035FD40, lbl_8035FD40, s + 168, 1, 0);
    *(u32 *)(p + 0x130) = fn_8023F52C(p, lbl_8035FD40, lbl_8035FD40, s + 188, 1, 0);
    *(u32 *)(p + 0x134) = fn_8023F52C(p, lbl_8035FD40, lbl_8035FD40, lbl_8035FD9C, 1, 0);
    *(u32 *)(p + 0x138) = fn_8023F52C(p, lbl_8035FD40, lbl_8035FD40, s + 212, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
