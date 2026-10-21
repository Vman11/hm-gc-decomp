// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u32 lbl_8035AB38;
extern s8 lbl_8035AB3C;
extern volatile s32 lbl_8035AB40;
extern u32 lbl_80363D98, lbl_80363D9C, lbl_80363DA0, lbl_80363DA4, lbl_80363DA8, lbl_80363DAC;
extern s8 lbl_8035AB44;
extern u32 (*volatile lbl_8035AB34)(u32);
s32 fn_800B86FC(void);
s32 DVDGetDriveStatus(void);
void fn_800C3424(u32);
void fn_800C6F38(void);
void fn_800D6438(void);
void fn_800C2584(s32);
void fn_800C23E8(void);
void fn_800C1364(void);
s32 fn_800BFF54(void);
void OSResetSystem(s32, u32, s32);

void fn_8011B250(void) {
    if (lbl_8035AB3C == 0) {
        lbl_8035AB38 = 0;
        lbl_8035AB3C = 1;
    }
    if (lbl_8035AB44 == 0) {
        lbl_8035AB40 = 0;
        lbl_8035AB44 = 1;
    }
    if (lbl_8035AB40 == 0) {
        u32 r;
        if (fn_800B86FC() != 0) {
            lbl_8035AB38 |= lbl_80363D98;
        } else {
            if (lbl_8035AB38 & 1) {
                lbl_8035AB38 |= lbl_80363D9C;
            }
            lbl_8035AB38 &= ~1;
        }
        r = DVDGetDriveStatus();
        lbl_8035AB38 &= ~0x78;
        switch (r) {
        case 11:
            *(volatile u32 *)&lbl_8035AB38 |= lbl_80363DA0;
            break;
        case 4:
            *(volatile u32 *)&lbl_8035AB38 |= lbl_80363DA4;
            break;
        case 5:
            *(volatile u32 *)&lbl_8035AB38 |= lbl_80363DA8;
            break;
        case 6:
            *(volatile u32 *)&lbl_8035AB38 |= lbl_80363DAC;
            break;
        }
        lbl_8035AB40 = 1;
        { u32 (*fp)(u32) = lbl_8035AB34; r = fp(*(volatile u32 *)&lbl_8035AB38); }
        lbl_8035AB40 = 0;
        if (r & 2) {
            fn_800C3424(0xF0000000);
            fn_800C6F38();
            fn_800D6438();
            fn_800C2584(1);
            fn_800C23E8();
            fn_800C1364();
            if (r & 4) {
                OSResetSystem(1, 1, 1);
            } else if (fn_800BFF54() != 0) {
                OSResetSystem(0, 1, 0);
            } else {
                OSResetSystem(1, 1, 0);
            }
        }
    }
}
