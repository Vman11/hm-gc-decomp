// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E8B20[];
void fn_8017C964(void *);

void *__ct__9C80185A10Fv(u8 *p) {
    fn_8017C964(p);
    *(void **)(p + 0x18) = lbl_802E8B20;
    *(s32 *)p = 4;
    return p;
}
