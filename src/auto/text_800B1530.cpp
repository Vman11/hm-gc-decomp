// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern char lbl_8029BAD0[];
extern char lbl_80362E28[4];
s32 fn_8023F52C(void *obj, char *a, char *b, char *name, s32 c, s32 d);
void fn_8023F214(void *obj);

void fn_800B1530(void *p) {
    char *s = lbl_8029BAD0;
    M2C_FIELD(p, s32 *, 0x118) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x48, 1, 0);
    M2C_FIELD(p, s32 *, 0x11C) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x58, 1, 0);
    M2C_FIELD(p, s32 *, 0x120) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x68, 1, 0);
    M2C_FIELD(p, s32 *, 0x124) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x74, 1, 0);
    M2C_FIELD(p, s32 *, 0x128) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x80, 1, 0);
    M2C_FIELD(p, s32 *, 0x12C) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0x90, 1, 0);
    M2C_FIELD(p, s32 *, 0x130) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0xA0, 1, 0);
    M2C_FIELD(p, s32 *, 0x134) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0xB0, 1, 0);
    M2C_FIELD(p, s32 *, 0x138) = fn_8023F52C(p, lbl_80362E28, lbl_80362E28, s + 0xC0, 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
