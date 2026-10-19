// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_801DEB5C;
extern T12_801DEB5C lbl_802ED470[];
void fn_801EF630(void *, void *, void *, s32);

void fn_801DEB5C(u8 *p, void *a, void *b, s32 c) {
    T12_801DEB5C *t = lbl_802ED470;
    switch (c) {
    case 3:
        *(T12_801DEB5C *)(p + 0x10) = t[0];
        break;
    case 4:
        *(T12_801DEB5C *)(p + 0x10) = t[1];
        break;
    case 1:
        *(T12_801DEB5C *)(p + 0x10) = t[2];
        break;
    case 2:
        *(T12_801DEB5C *)(p + 0x10) = t[3];
        break;
    }
    fn_801EF630(p, a, b, c);
}
