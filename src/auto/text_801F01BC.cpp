// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_801F01BC;
extern T12_801F01BC lbl_802EE840;
extern T12_801F01BC lbl_802EE84C;
void fn_801EF630(void *, void *, void *, s32);

void fn_801F01BC(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 15:
        *(T12_801F01BC *)(p + 0x10) = lbl_802EE840;
        break;
    case 16:
        *(T12_801F01BC *)(p + 0x10) = lbl_802EE84C;
        break;
    }
    fn_801EF630(p, a, b, c);
}

} /* extern "C" */
