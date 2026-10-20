// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802EF7C0[];
extern volatile f32 lbl_80365730;
extern f32 lbl_80365734;
void fn_801FD50C(void *);
void fn_8020383C(void *);
void fn_802054EC(void *);
void fn_80206A04(void *);

void *__ct__9C802030D8Fv(u8 *p) {
    fn_801FD50C(p);
    *(void * *)(p + 0) = lbl_802EF7C0;
    fn_8020383C(p + 152);
    fn_802054EC(p + 152);
    fn_80206A04(p + 152);
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 48) = 0;
    *(u8 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 36) = 0;
    *(f32 *)(p + 4) = lbl_80365730;
    *(f32 *)(p + 8) = lbl_80365730;
    *(f32 *)(p + 12) = lbl_80365730;
    *(s32 *)(p + 40) = 0;
    *(f32 *)(p + 44) = lbl_80365734;
    return p;
}
