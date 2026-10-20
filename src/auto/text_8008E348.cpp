// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 **lbl_8035B684;
extern char lbl_803605B8[8];
extern char lbl_803605C0[8];
extern char lbl_803605C8[8];
void fn_8003E88C(void *);
void *fn_801AA960(void *, const char *, s32);
void *fn_800F9398(void *, const char *);

void fn_8008E348(u8 *p) {
    fn_8003E88C(p);
    *(void **)(p + 1612) = fn_801AA960(*(void **)(*lbl_8035B684 + 13232), lbl_803605B8, 0);
    *(void **)(p + 1616) = fn_801AA960(*(void **)(*lbl_8035B684 + 13232), lbl_803605C0, 0);
    *(void **)(p + 1620) = fn_800F9398(*(u8 **)(*lbl_8035B684 + 11340) + 60, lbl_803605C8);
}

} /* extern "C" */
