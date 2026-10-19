// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_801E7174;
extern T12_801E7174 lbl_802EDC64;
extern T12_801E7174 lbl_802EDC70;
void fn_801EF630(void *, void *, void *, s32);

void fn_801E7174(u8 *p, void *a, void *b, s32 c) {
    switch (c) {
    case 40:
        *(T12_801E7174 *)(p + 0x10) = lbl_802EDC64;
        break;
    case 41:
        *(T12_801E7174 *)(p + 0x10) = lbl_802EDC70;
        break;
    }
    fn_801EF630(p, a, b, c);
}
