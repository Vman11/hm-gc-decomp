// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AC18;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8016CB28(void *, void *);
struct C8015F26C { u8 data[80]; C8015F26C(); ~C8015F26C(); };

void fn_80160720(u8 *p, void *q) {
    if (lbl_8035AC18 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AC18);
    *(C8015F26C **)(p + 40) = new C8015F26C[*(u32 *)(p + 20)];
    fn_800F7E98();
    if (*(void **)(p + 40) == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    *(void **)(p + 36) = q;
    fn_8016CB28(*(void **)(p + 36), p);
}

} /* extern "C" */
