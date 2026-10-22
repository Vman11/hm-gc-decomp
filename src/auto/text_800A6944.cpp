// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern char lbl_80361E48[4];
extern char lbl_8029ADD0[];
u32 fn_8023F52C(void *, char *, char *, char *, s32, s32);
void fn_8023F214(void *);

void fn_800A6944(u8 *p) {
    char *s = lbl_8029ADD0;
    *(u32 *)(p + 0x118) = fn_8023F52C(p, lbl_80361E48, lbl_80361E48, s + 60, 1, 0);
    *(u32 *)(p + 0x11c) = fn_8023F52C(p, lbl_80361E48, lbl_80361E48, s + 76, 1, 0);
    *(u32 *)(p + 0x120) = fn_8023F52C(p, lbl_80361E48, lbl_80361E48, s + 92, 1, 0);
    *(u32 *)(p + 0x124) = fn_8023F52C(p, lbl_80361E48, lbl_80361E48, s + 112, 1, 0);
    *(u32 *)(p + 0x128) = fn_8023F52C(p, lbl_80361E48, lbl_80361E48, s + 132, 1, 0);
    *(u32 *)(p + 0x12c) = fn_8023F52C(p, lbl_80361E48, lbl_80361E48, s + 152, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
