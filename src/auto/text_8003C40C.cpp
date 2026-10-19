// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80294DF8[];
extern s32 lbl_8035B65C;
void __ct__9C80253F24Fiiii(int, int, int, int, int);

u32 fn_8003C40C(void) {
    __ct__9C80253F24Fiiii((int)(lbl_8035B65C), (int)(lbl_80294DF8), (int)(0), (int)(0), (int)(0)); /* "C_TITLEA" */
    return 1;
}

} /* extern "C" */
