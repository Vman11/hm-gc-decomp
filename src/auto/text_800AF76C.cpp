// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
static u8 sPad[748] = {1};
static s32 tA[7] = { 0, 1, 2, 3, 4, 5, 6 };
static s32 tB[7] = { 1, 1, 1, 1, 1, 1, 1 };
static s32 tC[7] = { 0, 1, 2, 3, 4, 5, 6 };
extern void *lbl_8035B79C;
void fn_80241628(u8 *p, s32 a, s32 b);
void fn_802491DC(u8 *p, s32 a);
void fn_8026820C(void *a, s32 b);
void fn_80268178(void *a, s32 b);

void fn_800AF76C(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = *(s32 *)(p + 96);
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        break;
    case 1:
        fn_802491DC(p, 0);
        break;
    case 2:
        fn_8026820C(lbl_8035B79C, 7);
        break;
    case 3:
        fn_802491DC(p, 1);
        fn_80268178(lbl_8035B79C, 7);
        break;
    case 4:
        fn_8026820C(lbl_8035B79C, 8);
        break;
    case 5:
        fn_802491DC(p, 2);
        fn_80268178(lbl_8035B79C, 8);
        break;
    case 6:
        fn_8026820C(lbl_8035B79C, 9);
        break;
    case 7:
        break;
    }
}

} /* extern "C" */
