// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_801E0758;
extern T12_801E0758 lbl_802ED64C;
extern T12_801E0758 lbl_802ED658;
void fn_801EF630(void *, void *, void *, s32);

void fn_801E0758(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 17:
        *(T12_801E0758 *)(p + 0x10) = lbl_802ED64C;
        break;
    case 18:
        *(T12_801E0758 *)(p + 0x10) = lbl_802ED658;
        break;
    }
    fn_801EF630(p, a, b, c);
}

} /* extern "C" */
