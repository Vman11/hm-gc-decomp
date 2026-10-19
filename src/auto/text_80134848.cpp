// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8032C2D0[];
extern u8 *lbl_8035AC38;
extern char lbl_8029ECA8[];
void fn_80060568(const char *, s32, s32, s32);

void fn_80134848(u32 f) {
    u8 *b = lbl_8032C2D0;
    u32 m = f & 0x1C00;
    if (m == 0) {
        lbl_8035AC38 = b + 1816;
    } else if (m == 0x800) {
        lbl_8035AC38 = b + 4564;
    } else if (m == 0x400) {
        lbl_8035AC38 = b + 3184;
    } else if (m == 0xC00) {
        lbl_8035AC38 = b + 5936;
    } else if (m == 0x1000) {
        lbl_8035AC38 = b + 7312;
    } else {
        fn_80060568(lbl_8029ECA8, 0, 0, 0);
    }
}

} /* extern "C" */
