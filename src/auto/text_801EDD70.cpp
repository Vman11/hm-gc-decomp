// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_801EDD70;
extern T12_801EDD70 lbl_802EE5E8;
extern T12_801EDD70 lbl_802EE5F4;
void fn_801EF630(void *, void *, void *, s32);

void fn_801EDD70(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 26:
        *(T12_801EDD70 *)(p + 0x10) = lbl_802EE5E8;
        break;
    case 27:
        *(T12_801EDD70 *)(p + 0x10) = lbl_802EE5F4;
        break;
    }
    fn_801EF630(p, a, b, c);
}

} /* extern "C" */
