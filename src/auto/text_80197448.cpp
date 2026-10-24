// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364C1C;
extern f32 lbl_80364C20;
void __dt__9C80196530Fv(void);
void fn_800E1E88(void *, void *);
void fn_801A15D8(void *);

void fn_80197448(u8 *p) {
    if (*(void **)(p + 164) != 0) {
        fn_800E1E88(*(void **)(p + 164), (void *)__dt__9C80196530Fv);
    }
    fn_801A15D8(p);
    *(s32 *)(p + 144) = 0;
    *(s32 *)(p + 148) = 0;
    *(s32 *)(p + 152) = 0;
    *(f32 *)(p + 156) = lbl_80364C1C;
    *(s32 *)(p + 160) = 0;
    *(s32 *)(p + 164) = 0;
    *(f32 *)(p + 168) = lbl_80364C20;
    *(f32 *)(p + 172) = lbl_80364C1C;
    *(f32 *)(p + 176) = lbl_80364C1C;
    *(f32 *)(p + 180) = lbl_80364C1C;
    *(f32 *)(p + 184) = lbl_80364C1C;
    *(f32 *)(p + 188) = lbl_80364C1C;
    *(f32 *)(p + 192) = lbl_80364C1C;
    *(f32 *)(p + 196) = lbl_80364C1C;
    *(f32 *)(p + 200) = lbl_80364C1C;
    *(f32 *)(p + 204) = lbl_80364C1C;
    *(f32 *)(p + 208) = lbl_80364C1C;
    *(s32 *)(p + 212) = 0;
    *(s32 *)(p + 216) = 0;
    *(s32 *)(p + 224) = 0;
}

} /* extern "C" */
