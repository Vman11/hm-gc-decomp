// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8035FE08[8];
extern volatile f32 lbl_8035FDF8;
void *fn_8023BC90(const char *);
void fn_8023B7A0(void *, void *);
void fn_8005F620(void *);
void fn_8005F59C(void *);

void fn_80086898(u8 *p) {
    void *x = *(void **)(p + 888);
    if (x != NULL) {
        fn_8023B7A0(fn_8023BC90(lbl_8035FE08), x);
    }
    fn_8005F620(p);
    *(s32 *)(p + 892) = 0;
    *(f32 *)(p + 896) = lbl_8035FDF8;
    *(f32 *)(p + 900) = lbl_8035FDF8;
    *(f32 *)(p + 904) = lbl_8035FDF8;
    *(f32 *)(p + 908) = lbl_8035FDF8;
    *(s32 *)(p + 888) = 0;
    *(f32 *)(p + 912) = lbl_8035FDF8;
    *(s32 *)(p + 920) = 0;
    *(s32 *)(p + 608) = 4;
    fn_8005F59C(p);
}

} /* extern "C" */
