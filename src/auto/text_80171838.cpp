// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8032F028[];
void fn_8013F1F8(void *, void *);
void fn_8013F0E8(void *);
void fn_80138BC4(void *, void *);

void fn_80171838(void *p, void *a) {
    u8 *b = lbl_8032F028;
    if (*(u32 *)(b + 0x694) != 0) {
        fn_8013F1F8(p, *(void **)(b + 0x69C));
        fn_8013F0E8(p);
        *(s32 *)(b + 0x694) = 0;
    }
    fn_80138BC4(p, a);
}

} /* extern "C" */
