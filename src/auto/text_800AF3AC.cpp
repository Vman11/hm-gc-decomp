// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029B798[];
extern char lbl_80362AC4[4];
extern char lbl_80362AD8[7];
void *fn_8023F52C(void *p, char *a, char *b, char *name, s32 c, s32 d);
void fn_8023F214(void *p);
#pragma opt_propagation off
void fn_800AF3AC(u8 *p) {
    char *str = lbl_8029B798;
    M2C_FIELD(p, void **, 280) = fn_8023F52C(p, lbl_80362AC4, lbl_80362AC4, lbl_80362AD8, 1, 0);
    M2C_FIELD(p, void **, 284) = fn_8023F52C(p, lbl_80362AC4, lbl_80362AC4, str + 36, 1, 0);
    M2C_FIELD(p, void **, 288) = fn_8023F52C(p, lbl_80362AC4, lbl_80362AC4, str + 48, 1, 0);
    M2C_FIELD(p, void **, 292) = fn_8023F52C(p, lbl_80362AC4, lbl_80362AC4, str + 60, 1, 0);
    M2C_FIELD(p, void **, 296) = fn_8023F52C(p, lbl_80362AC4, lbl_80362AC4, str + 72, 1, 0);
    M2C_FIELD(p, void **, 300) = fn_8023F52C(p, lbl_80362AC4, lbl_80362AC4, str + 84, 1, 0);
    M2C_FIELD(p, void **, 304) = fn_8023F52C(p, lbl_80362AC4, lbl_80362AC4, str + 96, 1, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */
