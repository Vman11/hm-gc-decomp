// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80299168[];
extern char lbl_80360178[4];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(void *p);

#pragma opt_propagation off
void fn_8008C174(u8 *p) {
    char *base = lbl_80299168;
    *(s32 *)(p + 0x118) = fn_8023F52C(p, lbl_80360178, lbl_80360178, base + 64, 1, 0);
    *(s32 *)(p + 0x11c) = fn_8023F52C(p, lbl_80360178, lbl_80360178, base + 80, 1, 0);
    *(s32 *)(p + 0x120) = fn_8023F52C(p, lbl_80360178, lbl_80360178, base + 92, 1, 0);
    *(s32 *)(p + 0x124) = fn_8023F52C(p, lbl_80360178, lbl_80360178, base + 104, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
