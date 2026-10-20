// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile u32 lbl_8035B274;
extern s32 lbl_8035B270;
extern u8 lbl_80356DF8[];
void fn_8014C734(void *);
void fn_8022099C(void *);

void fn_80221344(void *p) {
    lbl_8035B274 = lbl_8035B274 - 1;
    if (lbl_8035B274 == 0) {
        fn_8014C734(lbl_80356DF8);
        lbl_8035B270 = 0;
    }
    fn_8022099C(p);
}

} /* extern "C" */
