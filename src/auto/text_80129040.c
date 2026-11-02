// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct G_80129040 { u32 flags; u8 pad[8]; u8 c[4]; u8 pad2[0x6BC]; f32 f1740; s32 v[3]; } G_80129040;
extern G_80129040 lbl_8032C2D0;
extern u32 lbl_80363E40;
extern u32 lbl_80363E44;
extern u32 lbl_80363E48;
void fn_80129040(u8 *a, u32 m, u8 *col) {
    if (m & 1) {
        lbl_8032C2D0.flags |= lbl_80363E40;
        lbl_8032C2D0.c[0] = a[20];
        lbl_8032C2D0.c[1] = a[21];
        lbl_8032C2D0.c[2] = a[22];
        lbl_8032C2D0.c[3] = a[23];
    } else {
        lbl_8032C2D0.flags &= ~0x2000;
    }
    if (m & 4) {
        lbl_8032C2D0.flags |= lbl_80363E44;
        if (col) lbl_8032C2D0.f1740 = (f32)(255 - col[3]);
    } else {
        lbl_8032C2D0.flags &= ~0x800;
    }
    if (m & 8) {
        lbl_8032C2D0.flags |= lbl_80363E48;
        lbl_8032C2D0.v[0] = col[0] * 2 - 255;
        lbl_8032C2D0.v[1] = col[1] * 2 - 255;
        lbl_8032C2D0.v[2] = col[2] * 2 - 255;
    } else {
        lbl_8032C2D0.flags &= ~0x1000;
    }
}
