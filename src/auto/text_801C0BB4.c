/* Functions from 0x801C0BB4 to 0x801C0C70, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AFCC;

extern u8 lbl_802EBB98[];
extern f32 lbl_80364FBC;
void fn_801C0BB4(s32 *arg0) {
    s32 i;
    f32 *f = (f32 *)arg0;

    arg0[0x80 / 4] = (s32)lbl_802EBB98;
    arg0[0x74 / 4] = 0;
    arg0[0] = 0;
    arg0[0x68 / 4] = 0;
    arg0[0x70 / 4] = 0;
    arg0[0x6C / 4] = 3;
    arg0[0x34 / 4] = 0;
    arg0[0x78 / 4] = 0;
    f[0x58 / 4] = lbl_80364FBC;
    f[0x5C / 4] = lbl_80364FBC;
    f[0x60 / 4] = lbl_80364FBC;
    f[0x64 / 4] = lbl_80364FBC;
    f[0x38 / 4] = lbl_80364FBC;
    f[0x3C / 4] = lbl_80364FBC;
    f[0x40 / 4] = lbl_80364FBC;
    f[0x44 / 4] = lbl_80364FBC;
    for (i = 0; i < 4; i++) {
        arg0[1 + i] = 0;
        arg0[5 + i] = 0;
        f[9 + i] = lbl_80364FBC;
    }
}

void fn_801C0C68(s32 arg0) {
    lbl_8035AFCC = arg0;
}
