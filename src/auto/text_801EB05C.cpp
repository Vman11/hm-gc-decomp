// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_801EB05C;
extern T12_801EB05C lbl_802EE060[];
void fn_801EF630(void *, void *, void *, s32);

void fn_801EB05C(u8 *p, void *a, void *b, s32 c) {
    T12_801EB05C *t = lbl_802EE060;
    switch (c) {
    case 28:
        *(T12_801EB05C *)(p + 0x10) = t[0];
        break;
    case 29:
        *(T12_801EB05C *)(p + 0x10) = t[1];
        break;
    case 30:
        *(T12_801EB05C *)(p + 0x10) = t[2];
        break;
    }
    fn_801EF630(p, a, b, c);
}

} /* extern "C" */
