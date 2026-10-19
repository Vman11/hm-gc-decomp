// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_801E3800;
extern T12_801E3800 lbl_802ED8F0[];
void fn_801EF630(void *, void *, void *, s32);

void fn_801E3800(u8 *p, void *a, void *b, s32 c) {
    T12_801E3800 *t = lbl_802ED8F0;
    switch (c) {
    case 55:
        *(T12_801E3800 *)(p + 0x10) = t[0];
        break;
    case 56:
        *(T12_801E3800 *)(p + 0x10) = t[1];
        break;
    case 57:
        *(T12_801E3800 *)(p + 0x10) = t[2];
        break;
    case 58:
        *(T12_801E3800 *)(p + 0x10) = t[3];
        break;
    }
    fn_801EF630(p, a, b, c);
}
