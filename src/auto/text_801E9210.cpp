// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_801E9210;
extern T12_801E9210 lbl_802EDE84;
extern T12_801E9210 lbl_802EDE90;
void fn_801EF630(void *, void *, void *, s32);

void fn_801E9210(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 38:
        *(T12_801E9210 *)(p + 0x10) = lbl_802EDE84;
        break;
    case 39:
        *(T12_801E9210 *)(p + 0x10) = lbl_802EDE90;
        break;
    }
    fn_801EF630(p, a, b, c);
}

} /* extern "C" */
