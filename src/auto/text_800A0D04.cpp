// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_80359420[2];
extern s32 lbl_80359428[2];
extern s32 lbl_80359430[2];
extern u8 *lbl_8035A1DC;
extern void *lbl_8035B7BC;
extern char lbl_80361BAC[8];
void fn_80241628(void *p, s32 a, s32 b);
void fn_8026B7CC(void *a, char *s);

void fn_800A0D04(u8 *p, s32 idx) {
    s32 i;
    s32 t = *(s32 *)(p + 96);
    i = lbl_80359420[idx];
    while (t > 0) {
        if (lbl_80359428[i] > t) break;
        t -= lbl_80359428[i++];
    }
    switch (lbl_80359430[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        break;
    case 1:
        if (*(s32 *)(lbl_8035A1DC + 14008) == 0) {
            fn_8026B7CC(lbl_8035B7BC, lbl_80361BAC);
        }
        break;
    case 2:
        return;
    }
}

} /* extern "C" */
