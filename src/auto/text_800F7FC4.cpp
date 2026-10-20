// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035A9F0;
extern s32 lbl_80359710;
extern void *lbl_802E1F60[];
void *fn_800F7798(void *, void *, u32);

void *__nwa__FUl(u32 n) {
    return fn_800F7798(lbl_8035A9F0, lbl_802E1F60[lbl_80359710], n);
}

} /* extern "C" */
