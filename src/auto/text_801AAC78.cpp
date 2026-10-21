// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
extern f32 lbl_80364E9C;
extern f32 lbl_80364EA0;
extern f32 lbl_80364EA4;
void fn_800F9654(void *, u8 *);
void fn_800F994C(void *, s32);
void fn_801A6A04(void *, u8 *);
void fn_801A6C48(void *, s32);

s32 fn_801AAC78(u8 *p, s32 a, s32 *b) {
    u8 tmp;
    if (F(p, s32, 0) != 0) {
        F(p, s32, 8) = 0;
        F(p, s32, 0) = 0;
        F(p, s32, 4) = 0;
        F(p, s32, 12) = 0;
        F(p, s32, 16) = 0;
        F(p, s32, 20) = 0;
        F(p, s32, 8) = 0;
        F(p, s32, 24) = 0;
        F(p, f32, 272) = lbl_80364E9C;
        F(p, f32, 276) = lbl_80364E9C;
        F(p, f32, 280) = lbl_80364EA0;
        F(p, f32, 284) = lbl_80364EA4;
        F(p, s32, 28) = 0;
        F(p, s32, 32) = 0;
    }
    F(p, s32, 0) = 1;
    F(p, s32 *, 12) = b;
    F(p, s32, 16) = b[1];
    F(p, s32, 8) = a;
    tmp = 0;
    fn_800F9654(p + 96, &tmp);
    fn_800F994C(p + 120, 256);
    fn_801A6A04(p + 216, &tmp);
    fn_801A6C48(p + 236, 256);
    fn_800F9654(p + 156, &tmp);
    fn_800F994C(p + 180, 256);
    fn_800F9654(p + 36, &tmp);
    fn_800F994C(p + 60, 256);
    return 0;
}

} /* extern "C" */
