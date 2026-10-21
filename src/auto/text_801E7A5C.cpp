// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_801E7A5C;
extern T12_801E7A5C lbl_802EDD08;
extern T12_801E7A5C lbl_802EDD14;
void fn_801EF630(void *, void *, void *, s32);

void fn_801E7A5C(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 15:
        *(T12_801E7A5C *)(p + 0x10) = lbl_802EDD08;
        break;
    case 16:
        *(T12_801E7A5C *)(p + 0x10) = lbl_802EDD14;
        break;
    }
    fn_801EF630(p, a, b, c);
}

} /* extern "C" */
