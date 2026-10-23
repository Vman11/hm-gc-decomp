// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct S800B2AE8 {
    u8 pad0[96];
    s32 x96;
    u8 pad100[180];
    s32 x280;
} S800B2AE8;
extern s32 lbl_80359508[2];
extern s32 lbl_80359510[2];
extern s32 lbl_80359518[2];
extern void *lbl_8035B79C;
void fn_80241628(S800B2AE8 *p, s32 a, s32 b);
void fn_80268178(void *p, s32 a);

void fn_800B2AE8(S800B2AE8 *p, s32 n) {
    s32 *q;
    s32 idx;
    s32 t;
    idx = lbl_80359508[n];
    t = p->x96;
    for (q = lbl_80359510 + idx; t > 0; q++) {
        if (*q > t) break;
        t -= lbl_80359510[idx++];
    }
    switch (lbl_80359518[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        break;
    case 1:
        p->x280--;
        if (p->x280 == 0) {
            fn_80268178(lbl_8035B79C, 7);
        }
        break;
    case 2:
        return;
    }
}

} /* extern "C" */
