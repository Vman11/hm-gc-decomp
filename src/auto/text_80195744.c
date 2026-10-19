// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern char lbl_802A231C[];
void fn_80060568(void *, s32, s32, s32);

u8 fn_80195744(u8 *p) {
    if (p == NULL) {
        fn_80060568(lbl_802A231C, 0, 0, 0);
    }
    return *(u16 *)(p + 4) == 10;
}
