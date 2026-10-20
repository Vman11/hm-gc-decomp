// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E3080[];
extern volatile f32 lbl_80328870[];
extern volatile f32 lbl_80363A68;
extern volatile f32 lbl_80363A74;
void __ct__9C8011F770Fv(void *);
void fn_801188F8(void *);
void *memset(void *, s32, u32);

void *__ct__9C801178ECFv(u8 *p) {
    f32 v;
    f32 st;
    __ct__9C8011F770Fv(p);
    *(void **)(p + 0xD0) = lbl_802E3080;
    fn_801188F8(p + 0xD8);
    v = lbl_80363A68;
    *(s32 *)(p + 0x10) = 5;
    lbl_80328870[0] = lbl_80363A68;
    st = lbl_80363A74;
    v += st;
    lbl_80328870[1] = v;
    v += st;
    lbl_80328870[2] = v;
    v += st;
    lbl_80328870[3] = v;
    v += st;
    lbl_80328870[4] = v;
    v += st;
    lbl_80328870[5] = v;
    v += st;
    lbl_80328870[6] = v;
    v += st;
    lbl_80328870[7] = v;
    memset(p + 0x100, 0, 16);
    memset(p + 0x110, 0, 16);
    *(s32 *)(p + 0xD4) = 0;
    return p;
}
