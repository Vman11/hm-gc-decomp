// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_801EFBBC;
extern T12_801EFBBC lbl_802EE7D8[];
void fn_801EF630(void *, void *, void *, s32);

void fn_801EFBBC(u8 *p, void *a, void *b, s32 c) {
    T12_801EFBBC *t = lbl_802EE7D8;
    switch (c) {
    case 51:
        *(T12_801EFBBC *)(p + 0x10) = t[0];
        break;
    case 52:
        *(T12_801EFBBC *)(p + 0x10) = t[1];
        break;
    case 49:
        *(T12_801EFBBC *)(p + 0x10) = t[2];
        break;
    case 50:
        *(T12_801EFBBC *)(p + 0x10) = t[3];
        break;
    }
    fn_801EF630(p, a, b, c);
}

} /* extern "C" */
