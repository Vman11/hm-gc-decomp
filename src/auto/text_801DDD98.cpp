// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035B040;
extern u32 lbl_803651B8;
extern u32 lbl_80330888[];
extern u8 lbl_802ECCC0[];
void fn_800F6FBC(void *, void *);
void fn_801DDCF4(void);
void fn_801DDE58(void *);

void fn_801DDD98(void) {
    lbl_8035B040 = lbl_803596E0[0];
    fn_800F6FBC(&lbl_803651B8, &lbl_80330888[1]);
    lbl_80330888[0] = (u32)fn_801DDCF4;
    lbl_80330888[4] = (u32)lbl_802ECCC0;
    lbl_80330888[5] = 173;
    fn_801DDE58(lbl_80330888);
}

__declspec(section ".ctors") static void (*const ctor_801DDD98)(void) = fn_801DDD98;

} /* extern "C" */
