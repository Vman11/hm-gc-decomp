// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_801EE0D0;
extern T12_801EE0D0 lbl_802EE638;
extern T12_801EE0D0 lbl_802EE644;
void fn_801EF630(void *, void *, void *, s32);

void fn_801EE0D0(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 31:
        *(T12_801EE0D0 *)(p + 0x10) = lbl_802EE638;
        break;
    case 32:
        *(T12_801EE0D0 *)(p + 0x10) = lbl_802EE644;
        break;
    }
    fn_801EF630(p, a, b, c);
}

} /* extern "C" */
