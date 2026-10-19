// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_801F6814;
extern T12_801F6814 lbl_802EEAA0;
extern T12_801F6814 lbl_802EEAAC;
void fn_801EF630(void *, void *, void *, s32);

void fn_801F6814(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 33:
    case 34:
        *(T12_801F6814 *)(p + 0x10) = lbl_802EEAA0;
        break;
    case 35:
    case 36:
        *(T12_801F6814 *)(p + 0x10) = lbl_802EEAAC;
        break;
    }
    fn_801EF630(p, a, b, c);
}
