// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803664F8;
extern void *lbl_8035B818;
void fn_80272A80(void *);

void fn_80250EBC(u8 *p) {
    if (!(p[284] & 4)) {
        if (*(s32 *)(p + 288) == 0 || *(s32 *)(p + 292) == 0) {
            *(s32 *)(p + 292) = 1;
            p[284] |= lbl_803664F8;
            fn_80272A80(lbl_8035B818);
        }
    }
}

} /* extern "C" */
