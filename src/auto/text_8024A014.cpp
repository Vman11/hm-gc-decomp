// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_80359A80[2];
extern s32 lbl_80359A88[2];
extern s32 lbl_80359A90[2];
void fn_80241628(void *p, s32 a, s32 b);

void fn_8024A014(void *p, s32 idx) {
    s32 i = lbl_80359A80[idx];
    s32 v = M2C_FIELD(p, s32 *, 0x60);
    while (v > 0) { if (lbl_80359A88[i] > v) break; v -= lbl_80359A88[i++]; }
    switch (lbl_80359A90[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        break;
    case 1: return;
    case 2: return;
    }
}

} /* extern "C" */
