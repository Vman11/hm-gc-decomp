// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern char lbl_802A8770[];
extern char lbl_80365E4C[7];
extern char lbl_80365E54[6];
extern char lbl_80365E5C[6];
extern char lbl_80365E64[8];
extern f32 lbl_80365DF4;
void *fn_8023D13C(u8 *, char *, s32);
u32 *fn_8010FEDC(void *, void *, char *, s32);
void fn_80239024(u8 *);

#pragma opt_propagation off
void fn_80232C90(u8 *p) {
    char *str = lbl_802A8770;
    f32 *r;
    u32 *q;
    if (M2C_FIELD(p, void **, 16) != 0) {
        r = (f32 *)fn_8023D13C(p, lbl_80365E4C, 0);
        if (r != 0) {
            M2C_FIELD(p, f32 *, 600) = *r;
        } else {
            M2C_FIELD(p, f32 *, 600) = lbl_80365DF4;
        }
        M2C_FIELD(p, void **, 628) = fn_8023D13C(p, lbl_80365E54, 0);
        M2C_FIELD(p, void **, 656) = fn_8023D13C(p, lbl_80365E5C, 0);
        M2C_FIELD(p, void **, 612) = fn_8023D13C(p, str + 88, 0);
        M2C_FIELD(p, void **, 680) = fn_8023D13C(p, str + 100, 0);
        M2C_FIELD(p, void **, 684) = fn_8023D13C(p, str + 120, 0);
        M2C_FIELD(p, void **, 604) = fn_8023D13C(p, str + 140, 0);
        q = fn_8010FEDC(M2C_FIELD(p, void **, 12), M2C_FIELD(p, void **, 16), str + 152, 0);
        if (q != 0) {
            M2C_FIELD(p, u32 *, 660) = *q;
        }
        M2C_FIELD(p, void **, 664) = fn_8023D13C(p, str + 164, 1);
        q = fn_8010FEDC(M2C_FIELD(p, void **, 12), M2C_FIELD(p, void **, 16), lbl_80365E64, 0);
        M2C_FIELD(p, u32 *, 668) = *q;
        M2C_FIELD(p, void **, 672) = fn_8023D13C(p, str + 176, 0);
        M2C_FIELD(p, void **, 676) = fn_8023D13C(p, str + 192, 0);
    }
    fn_80239024(p);
}
#pragma opt_propagation reset

} /* extern "C" */
