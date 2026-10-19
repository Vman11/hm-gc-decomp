// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B65C;
extern u8 lbl_80297CF8[];
extern f32 lbl_8035F210;
extern f32 lbl_8035F214;
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, s32);
void fn_80076D50(void *, s32);
s32 fn_800724A4(void *);
void fn_8007115C(void *);
void fn_80241588(void *, s32, void *, f32);
void fn_80242174(void *, f32);

void fn_8006BA1C(u8 *p) {
    *(s32 *)(p + 0x1EC) = 0;
    __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80297CF8, 0, 0, 0);
    fn_80076D50(*(void **)(p + 0x118), 0);
    *(s32 *)(*(u8 **)(p + 0x118) + 0x4C8) = 0;
    *(s32 *)(*(u8 **)(p + 0x118) + 0x73C) = 1;
    if (**(s32 **)(*(u8 **)(p + 0x118) + 0x540) <= 0) {
        if (*(s32 *)(p + 0xDC) == 14 && fn_800724A4(*(void **)(p + 0x118)) == 0) {
            fn_8007115C(p);
        }
        fn_80241588(p, 106, 0, lbl_8035F210);
    } else {
        if (*(s32 *)(p + 0xDC) == 14 && fn_800724A4(*(void **)(p + 0x118)) == 0) {
            fn_8007115C(p);
        }
        fn_80241588(p, 39, 0, lbl_8035F210);
        fn_80242174(p, lbl_8035F214);
    }
    *(s32 *)(*(u8 **)(p + 0x118) + 0x68C) = 0;
}

} /* extern "C" */
