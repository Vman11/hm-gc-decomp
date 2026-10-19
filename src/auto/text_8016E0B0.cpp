// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035AD20;
extern s32 lbl_8035AD24;
void fn_8015B020(int, int);

void fn_8016E0B0(void) {
    fn_8015B020((int)(lbl_8035AD20), (int)(lbl_8035AD24));
}

} /* extern "C" */
