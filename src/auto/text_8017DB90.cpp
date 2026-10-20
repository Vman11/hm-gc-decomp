// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8708[];
void fn_8017C964(void *);
void fn_800FF744(void *);

void *__ct__9C8017DB90Fv(u8 *p) {
    fn_8017C964(p);
    *(void **)(p + 0x18) = lbl_802E8708;
    fn_800FF744(p + 0x1C);
    *(s32 *)p = 0;
    return p;
}

} /* extern "C" */
