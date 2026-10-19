// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u32 lbl_803308B4[];
void fn_801DDF00(void);
void *fn_800F8274(void *, void *);

void fn_801DDE00(void *a) {
    if (lbl_803308B4[0] == 0) {
        fn_801DDF00();
    }
    ((void (*)(void))fn_800F8274(lbl_803308B4, a))();
}
