// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803638C8;
extern volatile f32 lbl_803638CC;
void __dt__9C801063F0Fv(void);
void fn_800E1E88(void *, void *);
void fn_800F8DD0(void *);

void fn_80106718(u8 *p) {
    if (*(void **)(p + 40) != NULL) {
        fn_800E1E88(*(void **)(p + 40), (void *)__dt__9C801063F0Fv);
    }
    *(f32 *)(p + 20) = lbl_803638C8;
    *(f32 *)(p + 24) = lbl_803638CC;
    *(f32 *)(p + 28) = lbl_803638CC;
    *(f32 *)(p + 32) = lbl_803638CC;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
    *(f32 *)(p + 44) = lbl_803638CC;
    *(f32 *)(p + 48) = lbl_803638CC;
    *(f32 *)(p + 52) = lbl_803638CC;
    fn_800F8DD0(p);
}

} /* extern "C" */
