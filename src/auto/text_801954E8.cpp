// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A231C[];
extern char lbl_802A22E0[];
void fn_80060568(const char *, s32, s32, s32);

void *fn_801954E8(u8 *p) {
    u8 ok;
    if (p == NULL) {
        fn_80060568(lbl_802A231C, 0, 0, 0);
    }
    ok = 0;
    if (*(u16 *)(p + 4) >= 11 && *(u16 *)(p + 4) <= 13) {
        ok = 1;
    }
    if (!ok) {
        fn_80060568(lbl_802A22E0, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
