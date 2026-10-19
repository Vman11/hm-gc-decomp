// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_801E74DC;
extern T12_801E74DC lbl_802EDCB8;
extern T12_801E74DC lbl_802EDCC4;
void fn_801EF630(void *, void *, void *, s32);

void fn_801E74DC(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 22:
        *(T12_801E74DC *)(p + 0x10) = lbl_802EDCB8;
        break;
    case 23:
        *(T12_801E74DC *)(p + 0x10) = lbl_802EDCC4;
        break;
    }
    fn_801EF630(p, a, b, c);
}
