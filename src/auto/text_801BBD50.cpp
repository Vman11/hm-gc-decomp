// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AFA0;
extern u32 lbl_80364FAC;
extern u32 lbl_80330768[];
void fn_800F6FBC(void *, void *);
void fn_801BBC78(void);
void fn_801DDE58(void *);

void fn_801BBD50(void) {
    lbl_8035AFA0 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_80364FAC, &lbl_80330768[1]);
    lbl_80330768[0] = (u32)fn_801BBC78;
    lbl_80330768[4] = 0;
    lbl_80330768[5] = 0;
    fn_801DDE58(lbl_80330768);
}

__declspec(section ".ctors") static void (*const ctor_801BBD50)(void) = fn_801BBD50;

} /* extern "C" */
