// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_801E15D0;
extern T12_801E15D0 lbl_802ED760;
void fn_801EF630(void *, s32, s32, s32);

void fn_801E15D0(u8 *p, s32 a, s32 b, s32 c) {
    switch (c) {
    case 24:
        *(T12_801E15D0 *)(p + 0x10) = lbl_802ED760;
        break;
    }
    fn_801EF630(p, a, b, c);
}

} /* extern "C" */
