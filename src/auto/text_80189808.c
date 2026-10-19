/* Functions from 0x80189808 to 0x80189BA4, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_803649F8, lbl_803649FC;
void fn_80189808(f32 *arg0, void *arg1, f32 *arg2) {
 f32 x, y, size, dx, dy, nx, xp, yp, xm, ym;
 f32 ax, ay, bx, by, cx, cy;
 f32 *p;
 x = M2C_FIELD(arg1, f32 *, 0xac);
 y = M2C_FIELD(arg1, f32 *, 0xb0);
 x += arg2[1] * M2C_FIELD(arg1, f32 *, 0x9c);
 y += arg2[1] * M2C_FIELD(arg1, f32 *, 0xa0);
 size = arg2[2] * M2C_FIELD(arg1, f32 *, 0xb4);
 if (M2C_FIELD(arg2, s32 *, 0xc)) { dx = arg0[22] * size; dy = arg0[23] * size; }
 else { dx = lbl_803649F8; dy = -size; }
 nx = -dy;
 xp = x + dx; yp = y + dy; xm = x - dx; ym = y - dy;
 ax = xp - nx; ay = yp - dx;
 bx = xp + nx; by = yp + dx;
 cx = xm - nx; cy = ym - dx;

 p = M2C_FIELD(arg1, f32 **, 0);
 p[0] = ax; p[1] = ay; p[2] = lbl_803649F8; p[3] = lbl_803649FC;
 M2C_FIELD(arg1, u8 **, 0) += M2C_FIELD(arg1, u32 *, 4);
 *M2C_FIELD(arg1, u32 **, 0x20) = M2C_FIELD(arg1, u32 *, 0xb8);
 M2C_FIELD(arg1, u8 **, 0x20) += M2C_FIELD(arg1, u32 *, 0x24);
 *M2C_FIELD(arg1, s32 **, 0x28) = -1;
 M2C_FIELD(arg1, u8 **, 0x28) += M2C_FIELD(arg1, u32 *, 0x2c);
 p = M2C_FIELD(arg1, f32 **, 0x30);
 p[0] = p[1] = lbl_803649F8;
 M2C_FIELD(arg1, u8 **, 0x30) += M2C_FIELD(arg1, u32 *, 0x50);

 p = M2C_FIELD(arg1, f32 **, 0);
 p[0] = bx; p[1] = by; p[2] = lbl_803649F8; p[3] = lbl_803649FC;
 M2C_FIELD(arg1, u8 **, 0) += M2C_FIELD(arg1, u32 *, 4);
 *M2C_FIELD(arg1, u32 **, 0x20) = M2C_FIELD(arg1, u32 *, 0xb8);
 M2C_FIELD(arg1, u8 **, 0x20) += M2C_FIELD(arg1, u32 *, 0x24);
 *M2C_FIELD(arg1, s32 **, 0x28) = -1;
 M2C_FIELD(arg1, u8 **, 0x28) += M2C_FIELD(arg1, u32 *, 0x2c);
 p = M2C_FIELD(arg1, f32 **, 0x30);
 p[0] = lbl_803649FC; p[1] = lbl_803649F8;
 M2C_FIELD(arg1, u8 **, 0x30) += M2C_FIELD(arg1, u32 *, 0x50);

 p = M2C_FIELD(arg1, f32 **, 0);
 p[0] = cx; p[1] = cy; p[2] = lbl_803649F8; p[3] = lbl_803649FC;
 M2C_FIELD(arg1, u8 **, 0) += M2C_FIELD(arg1, u32 *, 4);
 *M2C_FIELD(arg1, u32 **, 0x20) = M2C_FIELD(arg1, u32 *, 0xb8);
 M2C_FIELD(arg1, u8 **, 0x20) += M2C_FIELD(arg1, u32 *, 0x24);
 *M2C_FIELD(arg1, s32 **, 0x28) = -1;
 M2C_FIELD(arg1, u8 **, 0x28) += M2C_FIELD(arg1, u32 *, 0x2c);
 p = M2C_FIELD(arg1, f32 **, 0x30);
 p[0] = lbl_803649F8; p[1] = lbl_803649FC;
 M2C_FIELD(arg1, u8 **, 0x30) += M2C_FIELD(arg1, u32 *, 0x50);

 p = M2C_FIELD(arg1, f32 **, 0);
 p[0] = bx; p[1] = by; p[2] = lbl_803649F8; p[3] = lbl_803649FC;
 M2C_FIELD(arg1, u8 **, 0) += M2C_FIELD(arg1, u32 *, 4);
 *M2C_FIELD(arg1, u32 **, 0x20) = M2C_FIELD(arg1, u32 *, 0xb8);
 M2C_FIELD(arg1, u8 **, 0x20) += M2C_FIELD(arg1, u32 *, 0x24);
 *M2C_FIELD(arg1, s32 **, 0x28) = -1;
 M2C_FIELD(arg1, u8 **, 0x28) += M2C_FIELD(arg1, u32 *, 0x2c);
 p = M2C_FIELD(arg1, f32 **, 0x30);
 p[0] = lbl_803649FC; p[1] = lbl_803649F8;
 M2C_FIELD(arg1, u8 **, 0x30) += M2C_FIELD(arg1, u32 *, 0x50);

 p = M2C_FIELD(arg1, f32 **, 0);
 p[0] = xm + nx; p[1] = ym + dx; p[2] = lbl_803649F8; p[3] = lbl_803649FC;
 M2C_FIELD(arg1, u8 **, 0) += M2C_FIELD(arg1, u32 *, 4);
 *M2C_FIELD(arg1, u32 **, 0x20) = M2C_FIELD(arg1, u32 *, 0xb8);
 M2C_FIELD(arg1, u8 **, 0x20) += M2C_FIELD(arg1, u32 *, 0x24);
 *M2C_FIELD(arg1, s32 **, 0x28) = -1;
 M2C_FIELD(arg1, u8 **, 0x28) += M2C_FIELD(arg1, u32 *, 0x2c);
 p = M2C_FIELD(arg1, f32 **, 0x30);
 p[0] = p[1] = lbl_803649FC;
 M2C_FIELD(arg1, u8 **, 0x30) += M2C_FIELD(arg1, u32 *, 0x50);

 p = M2C_FIELD(arg1, f32 **, 0);
 p[0] = cx; p[1] = cy; p[2] = lbl_803649F8; p[3] = lbl_803649FC;
 M2C_FIELD(arg1, u8 **, 0) += M2C_FIELD(arg1, u32 *, 4);
 *M2C_FIELD(arg1, u32 **, 0x20) = M2C_FIELD(arg1, u32 *, 0xb8);
 M2C_FIELD(arg1, u8 **, 0x20) += M2C_FIELD(arg1, u32 *, 0x24);
 *M2C_FIELD(arg1, s32 **, 0x28) = -1;
 M2C_FIELD(arg1, u8 **, 0x28) += M2C_FIELD(arg1, u32 *, 0x2c);
 p = M2C_FIELD(arg1, f32 **, 0x30);
 p[0] = lbl_803649F8; p[1] = lbl_803649FC;
 M2C_FIELD(arg1, u8 **, 0x30) += M2C_FIELD(arg1, u32 *, 0x50);
}
