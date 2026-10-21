// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_801E0B34;
extern T12_801E0B34 lbl_802ED6A0[];
void fn_801EF630(void *, void *, void *, s32);

void fn_801E0B34(u8 *p, void *a, void *b, s32 c) {
    T12_801E0B34 *t = lbl_802ED6A0;
    switch (c) {
    case 19:
        *(T12_801E0B34 *)(p + 0x10) = t[0];
        break;
    case 20:
        *(T12_801E0B34 *)(p + 0x10) = t[1];
        break;
    case 21:
        *(T12_801E0B34 *)(p + 0x10) = t[2];
        break;
    }
    fn_801EF630(p, a, b, c);
}

} /* extern "C" */
