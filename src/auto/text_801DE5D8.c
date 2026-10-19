// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_801DE5D8;
extern T12_801DE5D8 lbl_802ED420;
extern T12_801DE5D8 lbl_802ED42C;
void fn_801EF630(void *, void *, void *, s32);

void fn_801DE5D8(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 11:
        *(T12_801DE5D8 *)(p + 0x10) = lbl_802ED420;
        break;
    case 12:
        *(T12_801DE5D8 *)(p + 0x10) = lbl_802ED42C;
        break;
    }
    fn_801EF630(p, a, b, c);
}
