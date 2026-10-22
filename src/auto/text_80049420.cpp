// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8035D1F8[4];
extern char lbl_8035D23C[6];
extern char lbl_8035D244[7];
extern char lbl_80295B90[];
u32 fn_8023F52C(void *, char *, char *, char *, s32, s32);
void fn_8023F214(void *);

#pragma opt_propagation off
void fn_80049420(u8 *p) {
    char *s = lbl_80295B90;
    *(u32 *)(p + 0x118) = fn_8023F52C(p, lbl_8035D1F8, lbl_8035D1F8, s + 24, 0, 0);
    *(u32 *)(p + 0x11c) = fn_8023F52C(p, lbl_8035D1F8, lbl_8035D1F8, s + 40, 0, 0);
    *(u32 *)(p + 0x120) = fn_8023F52C(p, lbl_8035D1F8, lbl_8035D1F8, lbl_8035D23C, 0, 0);
    *(u32 *)(p + 0x124) = fn_8023F52C(p, lbl_8035D1F8, lbl_8035D1F8, s + 52, 0, 0);
    *(u32 *)(p + 0x128) = fn_8023F52C(p, lbl_8035D1F8, lbl_8035D1F8, lbl_8035D244, 0, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
