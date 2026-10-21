// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_803593E0[2];
extern s32 lbl_803593E8[2];
extern s32 lbl_803593F0[2];
extern u8 *lbl_8035B308;
extern char lbl_8036199C[8];
extern char lbl_803619A4[8];
void fn_80241628(void *, int, int);
void fn_80241338(void *, char *, char *);
void fn_8009F470(void *p, int idx) {
    s32 i;
    s32 n;
    i = lbl_803593E0[idx];
    n = M2C_FIELD(p, s32 *, 96);
    while (n > 0) {
        if (lbl_803593E8[i] > n) break;
        n -= lbl_803593E8[i++];
    }
    switch (lbl_803593F0[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        break;
    case 1:
        fn_80241338(M2C_FIELD(M2C_FIELD(lbl_8035B308, u8 **, 72), void **, 524), lbl_8036199C, lbl_803619A4);
        break;
    case 2:
        return;
    }
}

} /* extern "C" */
