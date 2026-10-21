// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C80165944_S {
    u8 pad0[0x46c];
    u8 x46c;
    u8 pad46d[0x478 - 0x46d];
    u32 x478;
    u32 x47c;
    u32 x480;
    u32 x484;
    s32 x488;
    u8 x48c;
    u8 pad48d[3];
    s32 x490;
    s32 x494;
    u32 pad498;
    f32 x49c;
    f32 x4a0;
    f32 x4a4;
    f32 x4a8;
    u32 x4ac;
    u8 pad4b0[0x10];
    s32 x4c0;
    s32 x4c4;
    s32 x4c8;
    s32 x4cc;
    u32 x4d0;
    u32 x4d4;
    u8 x4d8[4];
};
struct C80165944_G { u8 pad0[0x2c]; u32 x2c; u8 pad30[0x32c - 0x30]; s32 x32c; };
struct C80165944 { u8 pad0[0x10]; u8 x10[0x1934 - 0x10]; C80165944_G *x1934; C80165944_S *x1938; };

void fn_800D61A0(u8);
void fn_800D6DAC(void);
void fn_800D7CA4(s32, u8, s32, u32, u32, u32, u32);
void fn_800D937C(s32, s32, s32, s32, s32);
void fn_800D95E8(u8);
void fn_800D9610(f32, f32, f32, f32, s32, u32 *);
void fn_800D9958(s32, s32, s32, s32);
void fn_800D9A38(s32);
void fn_801576A0(C80165944_S *);
void fn_8015780C(C80165944_S *, s32, u8 *);
void fn_80174CB8(u8 *);
void fn_80174E70(u8 *, s32);
void fn_80174EA4(u8 *, s32);
void fn_80174ED8(u8 *, s32, s32, s32, s32, s32);
void fn_80174F50(u8 *, s32, s32, s32, s32);
void fn_80174FB4(u8 *, s32, s32, s32, s32, s32);
void fn_8017502C(u8 *, s32, s32, s32, s32);

void fn_80165944(C80165944 *param_1) {
    C80165944_S *s;
    s32 v;
    u32 local_18[4];

    fn_8015780C(param_1->x1938, 0, param_1->x10);
    v = param_1->x1934->x32c;
    s = param_1->x1938;
    if (s->x490 != v) {
        s->x490 = v;
        fn_800D6DAC();
    }
    s = param_1->x1938;
    if (s->x494 != 0) {
        s->x494 = 0;
        local_18[0] = s->x4ac;
        fn_800D9610(s->x49c, s->x4a0, s->x4a4, s->x4a8, 0, local_18);
    }
    s = param_1->x1938;
    if (s->x46c != 0) {
        s->x46c = 0;
        if (s->x47c == 0) {
            fn_801576A0(s);
        }
        fn_800D7CA4(0, s->x46c, 0, s->x478, s->x47c, s->x480, s->x484);
    }
    s = param_1->x1938;
    if (s->x488 != 7 || s->x48c != 0) {
        s->x488 = 7;
        s->x48c = 0;
        if (s->x488 == 7) {
            fn_800D9A38(1);
        } else {
            fn_800D9A38(0);
        }
        fn_800D937C(7, 0, 0, 7, 0);
    }
    s = param_1->x1938;
    if (s->x4c0 != 0 || s->x4c4 != 1 || s->x4c8 != 0 || s->x4cc != 3) {
        s->x4c0 = 0;
        s->x4c4 = 1;
        s->x4c8 = 0;
        s->x4cc = 3;
        fn_800D9958(s->x4c0, s->x4c4, s->x4c8, s->x4cc);
    }
    fn_80174EA4(param_1->x1938->x4d8, 0xc);
    fn_80174E70(param_1->x1938->x4d8, 0x1c);
    fn_8017502C(param_1->x1938->x4d8, 0xf, 0xf, 0xf, 0xe);
    fn_80174FB4(param_1->x1938->x4d8, 0, 0, 0, 0, 0);
    fn_80174F50(param_1->x1938->x4d8, 7, 7, 7, 6);
    fn_80174ED8(param_1->x1938->x4d8, 0, 0, 0, 0, 0);
    fn_80174CB8(param_1->x1938->x4d8);
    s = param_1->x1938;
    if (s->x4d0 != 0) {
        s->x4d0 = 0;
        fn_800D61A0(s->x4d0);
    }
    s = param_1->x1938;
    if (s->x4d4 != 1) {
        s->x4d4 = 1;
        fn_800D95E8(s->x4d4);
    }
    param_1->x1934->x2c &= ~0x800;
}

} /* extern "C" */
