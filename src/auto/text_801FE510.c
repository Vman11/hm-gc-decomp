// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803656C8;
extern f32 lbl_803656CC;
void fn_801FB668(void *);

void fn_801FE510(u8 *p) {
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 0x10) = 0;
    *(f32 *)(p + 0x18) = lbl_803656C8;
    *(f32 *)(p + 0x1C) = lbl_803656CC;
    fn_801FB668(p);
}
