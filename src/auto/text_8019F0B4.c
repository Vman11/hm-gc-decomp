// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_80364D60;
extern f32 lbl_80364D3C;
extern f32 lbl_80364D64;
extern volatile f32 lbl_80364D40;
extern volatile f32 lbl_80364D68;
extern u8 __vt__9C8019F0B4[];
void __ct__9C801A1FC0Fv(void *);
void fn_80186B0C(void *);
void dtor_80186A98(void);
void __construct_array(void *, void *, void *, u32, u32);

void *__ct__9C8019F0B4Fv(u8 *p) {
    __ct__9C801A1FC0Fv(p);
    *(void * *)(p + 104) = __vt__9C8019F0B4;
    __construct_array(p + 144, (void *)fn_80186B0C, (void *)dtor_80186A98, 20, 2);
    fn_80186B0C(p + 184);
    *(u16 *)(p + 4) = 9;
    *(s32 *)(p + 204) = 0;
    *(s32 *)(p + 208) = 0;
    *(f32 *)(p + 216) = lbl_80364D60;
    *(f32 *)(p + 220) = lbl_80364D3C;
    *(f32 *)(p + 224) = lbl_80364D64;
    *(s32 *)(p + 228) = 100;
    *(s32 *)(p + 232) = 100;
    *(f32 *)(p + 260) = lbl_80364D40;
    *(f32 *)(p + 236) = lbl_80364D40;
    *(f32 *)(p + 240) = lbl_80364D40;
    *(f32 *)(p + 244) = lbl_80364D68;
    *(f32 *)(p + 248) = lbl_80364D40;
    *(f32 *)(p + 252) = lbl_80364D40;
    *(f32 *)(p + 256) = lbl_80364D68;
    return p;
}
