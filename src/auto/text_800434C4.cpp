// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80295360[];
extern char lbl_8035C7F0[4];
extern char lbl_8035C864[8];
s32 fn_8023F4A0(u8 *p, char *a, char *b, char *c, s32 d);
void fn_80241DD0(u8 *p, char *a, s32 b, s32 c, s32 d, s32 e);
void fn_800408D4(u8 *p);

#pragma opt_propagation off
void fn_800434C4(u8 *p) {
    char *str = lbl_80295360;
    if (*(s32 *)(p + 360) != 0) {
        *(s32 *)(p + 396) = fn_8023F4A0(p, lbl_8035C7F0, lbl_8035C7F0, str + 288, 0);
        *(s32 *)(p + 400) = fn_8023F4A0(p, lbl_8035C7F0, lbl_8035C7F0, str + 300, 0);
        *(s32 *)(p + 404) = fn_8023F4A0(p, lbl_8035C7F0, lbl_8035C7F0, str + 312, 0);
        *(s32 *)(p + 408) = 0;
        *(s32 *)(p + 412) = 0;
        fn_80241DD0(p, lbl_8035C864, 0, 0, 0, 0);
    }
    fn_800408D4(p);
}
#pragma opt_propagation reset

} /* extern "C" */
