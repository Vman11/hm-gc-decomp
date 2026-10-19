// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803596E0[];
extern f32 lbl_8035AF50;
extern u32 lbl_80364EFC;
extern u32 lbl_803306C8[];
void fn_800F6FBC(void *, void *);
void fn_801B2A50(void);
void fn_801DDE58(void *);

void fn_801B2B50(void) {
    lbl_8035AF50 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_80364EFC, &lbl_803306C8[1]);
    lbl_803306C8[0] = (u32)fn_801B2A50;
    lbl_803306C8[4] = 0;
    lbl_803306C8[5] = 0;
    fn_801DDE58(lbl_803306C8);
}
