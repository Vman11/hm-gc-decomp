// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E5158[];
extern f32 lbl_8032E4A8[3];
extern f32 lbl_80364100;
extern f32 lbl_80364104;
void fn_8014CBD8(void *);
void fn_8014D1C4(void *);
void fn_80135CB0(void);
void __construct_array(void *, void *, void *, u32, u32);

void *__ct__9C80135BD0Fv(u8 *p) {
    *(void **)(p + 0x1930) = lbl_802E5158;
    fn_8014CBD8(p + 0x20);
    fn_8014D1C4(p + 0x38);
    __construct_array(p + 0x128, (void *)fn_80135CB0, 0, 16, 256);
    __construct_array(p + 0x1128, (void *)fn_80135CB0, 0, 16, 128);
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 0xC) = 0;
    *(f32 *)(p + 0x14) = lbl_80364100;
    *(s32 *)(p + 0x18) = 0;
    *(f32 *)(p + 0x1C) = lbl_80364104;
    p[0x10] = 0;
    p[0x11] = 0;
    p[0x12] = 0;
    p[0x13] = 255;
    *(s32 *)(p + 0x124) = 0;
    lbl_8032E4A8[0] = lbl_80364104;
    lbl_8032E4A8[1] = lbl_80364104;
    lbl_8032E4A8[2] = lbl_80364104;
    *(f32 **)(p + 0x192C) = lbl_8032E4A8;
    *(s32 *)(p + 0x1928) = 0;
    return p;
}

} /* extern "C" */
