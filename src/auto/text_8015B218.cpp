// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C8015B218 {
    u8 pad0[0x18];
    u16 x18;
    u16 x1a;
    u16 x1c;
    u16 x1e;
    u8 pad20[0x50 - 0x20];
    u32 x50[2];
    u32 x58;
    u32 x5c;
    u32 x60;
    s32 x64;
    u32 x68;
    u32 x6c;
};

extern s32 lbl_8035ACE8;
void fn_801482DC(C8015B218 *, u32);

void fn_8015B218(C8015B218 *param_1, u16 param_2, u16 param_3, u32 param_4, u32 param_5, u32 param_6, u32 *param_7) {
    u32 i;

    lbl_8035ACE8 = 0;
    param_1->x6c = 0;
    param_1->x1c = param_2;
    param_1->x1e = param_3;
    fn_801482DC(param_1, param_5);
    param_1->x18 = 1;
    param_1->x1a = 1;
    param_1->x58 = param_6;
    param_1->x5c = param_4;
    param_1->x60 = 0;
    param_1->x64 = param_1->x58 - 1;
    param_1->x68 = 0;
    for (i = 0; i < param_1->x58; i++) {
        param_1->x50[i] = param_7[i];
    }
}

} /* extern "C" */
