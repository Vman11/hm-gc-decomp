// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
extern u8 lbl_802F1E28[];
extern f32 lbl_80366334;
void *__construct_array(void *, void *, void *, u32, u32);
void *__ct__9C8002FAE0Fv(void *);

void *__ct__9C8024AC90Fv(u8 *p) {
    F(p, void *, 104) = lbl_802F1E28;
    __construct_array(p, (void *)__ct__9C8002FAE0Fv, 0, 12, 3);
    __construct_array(p + 36, (void *)__ct__9C8002FAE0Fv, 0, 12, 3);
    F(p, f32, 0) = lbl_80366334;
    F(p, f32, 4) = lbl_80366334;
    F(p, f32, 8) = lbl_80366334;
    F(p, f32, 36) = lbl_80366334;
    F(p, f32, 40) = lbl_80366334;
    F(p, f32, 44) = lbl_80366334;
    F(p, f32, 12) = lbl_80366334;
    F(p, f32, 16) = lbl_80366334;
    F(p, f32, 20) = lbl_80366334;
    F(p, f32, 48) = lbl_80366334;
    F(p, f32, 52) = lbl_80366334;
    F(p, f32, 56) = lbl_80366334;
    F(p, f32, 24) = lbl_80366334;
    F(p, f32, 28) = lbl_80366334;
    F(p, f32, 32) = lbl_80366334;
    F(p, f32, 60) = lbl_80366334;
    F(p, f32, 64) = lbl_80366334;
    F(p, f32, 68) = lbl_80366334;
    F(p, f32, 84) = lbl_80366334;
    F(p, s32, 100) = 0;
    return p;
}

} /* extern "C" */
