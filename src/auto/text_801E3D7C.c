// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_801E3D7C;
extern T12_801E3D7C lbl_802ED958;
extern T12_801E3D7C lbl_802ED964;
void fn_801EF630(void *, void *, void *, s32);

void fn_801E3D7C(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 5:
        *(T12_801E3D7C *)(p + 0x10) = lbl_802ED958;
        break;
    case 6:
        *(T12_801E3D7C *)(p + 0x10) = lbl_802ED964;
        break;
    }
    fn_801EF630(p, a, b, c);
}
