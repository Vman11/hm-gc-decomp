// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_801ECE7C;
extern T12_801ECE7C lbl_802EE4A0[];
void fn_801EF630(void *, void *, void *, s32);

void fn_801ECE7C(u8 *p, void *a, void *b, s32 c) {
    T12_801ECE7C *t = lbl_802EE4A0;
    switch (c) {
    case 47:
        *(T12_801ECE7C *)(p + 0x10) = t[1];
        break;
    case 48:
        *(T12_801ECE7C *)(p + 0x10) = t[2];
        break;
    case 45:
        *(T12_801ECE7C *)(p + 0x10) = t[3];
        break;
    case 46:
        *(T12_801ECE7C *)(p + 0x10) = t[4];
        break;
    }
    fn_801EF630(p, a, b, c);
}
