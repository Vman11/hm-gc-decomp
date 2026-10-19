// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s8 lbl_80357740[];
extern void *lbl_8035B478;
extern u32 lbl_8035BC08;
extern u32 lbl_8035BC10;
extern u8 lbl_802AF8B8[];
void fn_800F6FBC(void *, void *);
void *fn_800F8274(void *, void *);
u8 *fn_80110AA4(void *, void *);

void fn_8002FD70(void *p, void *a, s32 c) {
    if (c == -1 && lbl_80357740[0] != 0) {
        fn_800F6FBC(lbl_80357740, a);
        return;
    }
    if (c == -1) {
        c = *(u32 *)(fn_80110AA4(fn_800F8274(lbl_8035B478, &lbl_8035BC08), &lbl_8035BC10) + 0xC);
    }
    if ((u32)c > 31) {
        c = 30;
    }
    fn_800F6FBC(lbl_802AF8B8 + c * 8, a);
}

} /* extern "C" */
