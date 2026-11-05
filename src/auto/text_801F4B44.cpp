// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct S12_4B44 { u32 v[3]; } S12_4B44;
extern S12_4B44 lbl_802EE938;
extern S12_4B44 lbl_80330CC8;
extern volatile f64 lbl_8035B0D8;
extern volatile int lbl_8035B0E0;
extern volatile int lbl_8035B0E4;
extern volatile int lbl_8035B0E8;
extern volatile f64 lbl_8035B0F0;
extern volatile f64 lbl_8035B0F8;
extern volatile f64 lbl_8035B100;
extern volatile f64 lbl_80365470;
extern volatile f64 lbl_80365478;
extern volatile f64 lbl_80365480;
extern volatile f64 lbl_80365488;
extern volatile f64 lbl_80365490;
extern volatile f64 lbl_80365498;
extern volatile f64 lbl_803654A0;
extern volatile f64 lbl_803654A8;
f64 fn_800F045C(f64);
f64 fn_800EFDA4(f64);
static inline f64 R_4B44(f64 x) { return x * lbl_80365488; }
void fn_801F4B44(void) {
    lbl_80330CC8 = lbl_802EE938;
    lbl_8035B0D8 = fn_800F045C(lbl_80365470);
    lbl_8035B0E0 = lbl_80365478 * fn_800EFDA4(R_4B44(lbl_80365480 * lbl_8035B0D8));
    lbl_8035B0E4 = lbl_80365490 / fn_800EFDA4(R_4B44(lbl_80365498 * lbl_8035B0D8));
    lbl_8035B0E8 = lbl_80365490 / fn_800EFDA4(R_4B44(lbl_803654A0 * lbl_8035B0D8));
    lbl_8035B0F0 = fn_800EFDA4(R_4B44(lbl_80365480 * lbl_8035B0D8));
    lbl_8035B0F8 = lbl_803654A8 / fn_800EFDA4(R_4B44(lbl_80365498 * lbl_8035B0D8));
    lbl_8035B100 = lbl_803654A8 / fn_800EFDA4(R_4B44(lbl_803654A0 * lbl_8035B0D8));
}

__declspec(section ".ctors") static void (*const ctor_801F4B44)(void) = fn_801F4B44;

} /* extern "C" */
