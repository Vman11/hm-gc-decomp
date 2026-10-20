// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8035BFD8;
extern u8 *lbl_8035A1DC;
extern char lbl_8035C008[8];
extern char lbl_8035C010[8];
u8 *fn_801AA960(void *, const char *, const char *);

void fn_80038BE4(u8 *p) {
    if (*(s32 *)(p + 4) != 0) {
    *(s32 *)(p + 4) = 0;
    *(f32 *)(p + 8) = lbl_8035BFD8;
    *(f32 *)(p + 12) = lbl_8035BFD8;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 40) = 4;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 4;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 56) = 25000;
    *(s32 *)(p + 32) = 1;
    *(s32 *)(p + 60) = 0;
    }
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 36) = *(s32 *)(fn_801AA960(*(void **)(lbl_8035A1DC + 13232), lbl_8035C008, lbl_8035C010) + 112);
    *(s32 *)(p + 4) = 1;
}

} /* extern "C" */
