// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80366C78;
extern f32 lbl_80366C7C;
void fn_80261AD4(void *);

void fn_80267E34(u8 *p) {
    *(s32 *)(p + 176) = 0;
    *(s32 *)(p + 180) = 0;
    *(s32 *)(p + 184) = 0;
    *(f32 *)(p + 188) = lbl_80366C78;
    *(s32 *)(p + 192) = 0;
    *(s32 *)(p + 196) = 0;
    *(f32 *)(p + 200) = lbl_80366C78;
    *(s32 *)(p + 204) = 0;
    *(s32 *)(p + 208) = 0;
    *(s32 *)(p + 228) = 0;
    *(s32 *)(p + 232) = 0;
    *(f32 *)(p + 212) = lbl_80366C78;
    *(f32 *)(p + 216) = lbl_80366C78;
    *(f32 *)(p + 220) = lbl_80366C78;
    *(s32 *)(p + 224) = 0;
    *(f32 *)(p + 240) = lbl_80366C7C;
    *(s32 *)(p + 244) = 0;
    *(s32 *)(p + 248) = 0;
    fn_80261AD4(p);
}

} /* extern "C" */
