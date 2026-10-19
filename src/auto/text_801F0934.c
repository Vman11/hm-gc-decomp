// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_801F0934;
extern T12_801F0934 lbl_802EE8C0;
void fn_801EF630(void *, s32, s32, s32);

void fn_801F0934(u8 *p, s32 a, s32 b, s32 c) {
    switch (c) {
    case 53:
        *(T12_801F0934 *)(p + 0x10) = lbl_802EE8C0;
        break;
    }
    fn_801EF630(p, a, b, c);
}
