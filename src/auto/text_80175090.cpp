// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S {
    u32 f0;
    union { u32 w; u8 b[4]; } f4, f8, f12, f16;
    u8 f20, f21, f22, f23, f24, f25;
    u8 pad[2];
    u32 f28;
    u8 f32, f33, f34, f35;
    u32 f36, f40, f44;
};
extern u32 lbl_802A0F20[];
extern u32 lbl_802A0F40[];
void fn_800D8FB4(int, int, int, int, int);
void fn_800D903C(int, int, int, int, int, int);
void fn_800D8FF8(int, int, int, int, int);
void fn_800D90A4(int, int, int, int, int, int);
void fn_800D92B4(int, int, int);
void fn_800D91FC(int, int);
void fn_800D9258(int, int);
void fn_801554E4(int, int, int, int, int, int);
void fn_800D944C(int, int, int, int);
void fn_800D5F20(int, int, int, int, int, int);
void fn_80175090(S *__restrict p, int b, S *__restrict c, int d) {
    int a2;
    int a4;
    int a5;
    int a6;
    int t;
    if (d == 0) {
        if (p->f4.w != c->f4.w) {
            p->f4.w = c->f4.w;
            fn_800D8FB4(c->f33, c->f4.b[0], c->f4.b[1], c->f4.b[2], c->f4.b[3]);
        }
        if (p->f8.w != c->f8.w || p->f20 != c->f20) {
            u8 v, x;
            p->f8.w = c->f8.w;
            v = c->f20; x = c->f8.b[3];
            p->f20 = v;
            fn_800D903C(c->f33, c->f8.b[0], c->f8.b[1], c->f8.b[2], x, v);
        }
        if (p->f12.w != c->f12.w) {
            p->f12.w = c->f12.w;
            fn_800D8FF8(c->f33, c->f12.b[0], c->f12.b[1], c->f12.b[2], c->f12.b[3]);
        }
        if (p->f16.w != c->f16.w || p->f21 != c->f21) {
            u8 v, x;
            p->f16.w = c->f16.w;
            v = c->f21; x = c->f16.b[3];
            p->f21 = v;
            fn_800D90A4(c->f33, c->f16.b[0], c->f16.b[1], c->f16.b[2], x, v);
        }
        if (p->f24 != c->f24 || p->f25 != c->f25) {
            p->f24 = c->f24;
            p->f25 = c->f25;
            fn_800D92B4(c->f33, c->f24, c->f25);
        }
        if (p->f22 != c->f22) {
            p->f22 = c->f22;
            fn_800D91FC(c->f33, c->f22);
        }
        if (p->f23 != c->f23) {
            p->f23 = c->f23;
            fn_800D9258(c->f33, c->f23);
        }
    }
    if (p->f0 != c->f0 || (p->f28 & 0x80) != (c->f28 & 0x80) || p->f35 != c->f35 || c->f35 != p->f33) {
        p->f0 = c->f0;
        if (p->f0 != 0) {
            fn_801554E4(p->f0, b, (c->f28 >> 7) & 1, c->f40, c->f44, c->f35);
            fn_800D944C(p->f33, c->f35, c->f35, 4);
        } else {
            fn_800D944C(p->f33, 255, 255, 4);
        }
        p->f28 &= ~0x80;
        p->f28 |= c->f28 & 0x80;
    }
    a2 = 1;
    a4 = 60;
    a5 = 0;
    a6 = 125;
    p->f28 = c->f28;
    p->f32 = c->f32;
    p->f34 = c->f34;
    p->f35 = c->f35;
    p->f36 = p->f34 + 4;
    t = (p->f28 & 0x70) != 0;
    if (t) {
        if (p->f28 & 0x10) {
            p->f36 = 2;
            a5 = 1;
        } else if (p->f28 & 0x20) {
            p->f36 = 0;
        } else {
            p->f36 = 1;
        }
        a4 = lbl_802A0F20[p->f33];
        a2 = 0;
    }
    if (t || (p->f28 & 0x10E)) a6 = lbl_802A0F40[p->f33];
    fn_800D5F20(p->f35, a2, p->f36, a4, a5, a6);
}

} /* extern "C" */
