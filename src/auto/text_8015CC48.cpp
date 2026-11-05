// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct wA_B { s32 a; s32 b; s32 c; s32 d; s32 ret; };
extern s32 lbl_8035ACF8;
void fn_800D9958(s32 a, s32 b, s32 c, s32 d);
void fn_80156110(u8 id, wA_B *out);
void fn_800D95E8(u8 on);
void fn_800D61A0(u8 on);
void fn_80174D34(void *t, u8 *c, void *tex, s32 f);
void fn_8017502C(void *t, s32 a, s32 b, s32 c, s32 d);
void fn_80174FB4(void *t, s32 a, s32 b, s32 c, s32 d, s32 e);
void fn_80174F50(void *t, s32 a, s32 b, s32 c, s32 d);
void fn_80174ED8(void *t, s32 a, s32 b, s32 c, s32 d, s32 e);
void fn_80174E2C(void *t, s32 a, s32 b);
void fn_80174EA4(void *t, s32 a);
void fn_80174E70(void *t, s32 a);
void fn_80174CB8(void *t);

inline void wA_blend(u8 *c, s32 a, s32 b, s32 d, s32 e) {
    if (*(s32 *)(c + 0x2404) != a || *(s32 *)(c + 0x2408) != b || *(s32 *)(c + 0x240c) != d || *(s32 *)(c + 0x2410) != e) {
        *(s32 *)(c + 0x2404) = a;
        *(s32 *)(c + 0x2408) = b;
        *(s32 *)(c + 0x240c) = d;
        *(s32 *)(c + 0x2410) = e;
        fn_800D9958(*(s32 *)(c + 0x2404), *(s32 *)(c + 0x2408), *(s32 *)(c + 0x240c), *(s32 *)(c + 0x2410));
    }
}
inline void wA_z(u8 *c, u32 on) {
    if (*(u32 *)(c + 0x2418) != on) {
        *(u32 *)(c + 0x2418) = on;
        fn_800D95E8(*(u32 *)(c + 0x2418));
    }
}
inline void wA_cull(u8 *c, u32 on) {
    if (*(u32 *)(c + 0x2414) != on) {
        *(u32 *)(c + 0x2414) = on;
        fn_800D61A0(*(u32 *)(c + 0x2414));
    }
}

void fn_8015CC48(u8 *p, u8 *c, void *tex, s32 alpha) {
    s32 r = 0;
    if (*(s32 *)(c + 0x27a0) != 0) {
        wA_blend(c, *(s32 *)(c + 0x27a4), *(s32 *)(c + 0x27a8), *(s32 *)(c + 0x27ac), 3);
        r = *(s32 *)(c + 0x27b4);
    } else if (*(u32 *)(p + 0x2c) & 0x80) {
        wA_B bl;
        fn_80156110(*(u8 *)(p + 0x35), &bl);
        {
            s32 a = bl.a;
            s32 b;
            s32 d = bl.c;
            b = bl.b;
            wA_blend(c, a, b, d, 3);
        }
        r = bl.ret;
    } else if ((*(u32 *)(p + 0x2c) & 0x300) && lbl_8035ACF8 != 0) {
        wA_blend(c, 1, 4, 5, 3);
    } else {
        wA_blend(c, 0, 1, 0, 3);
    }
    if (tex != 0) {
        wA_z(c, 1);
        fn_80174D34(c + 0x241c, c, tex, alpha != 0 ? 0 : 0x80);
        wA_cull(c, 1);
        *(u32 *)(c + 0x2c) &= ~0x800;
        if (*(u32 *)(p + 0x2c) & 4) {
            fn_8017502C(c + 0x241c, 0xf, 8, 0xa, 0xf);
        } else {
            fn_8017502C(c + 0x241c, 0xf, 0xf, 0xf, 8);
        }
        fn_80174FB4(c + 0x241c, 0, 0, 0, 1, 0);
        if (*(u32 *)(p + 0x2c) & 8) {
            fn_80174F50(c + 0x241c, 7, 4, 5, 7);
        } else {
            fn_80174F50(c + 0x241c, 7, 7, 7, 4);
        }
        fn_80174ED8(c + 0x241c, 0, 0, 0, 1, 0);
        fn_80174E2C(c + 0x241c, 0, 0);
    } else {
        if (r != 0) {
            if (*(u32 *)(p + 0x2c) & 0x20) {
                fn_8017502C(c + 0x241c, 0xf, 0xf, 0xf, 3);
            } else {
                fn_8017502C(c + 0x241c, 0xf, 0xf, 0xf, 0xb);
            }
        } else if (*(u32 *)(p + 0x2c) & 0x10) {
            fn_80174EA4(c + 0x241c, 0xc);
            fn_8017502C(c + 0x241c, 0xf, 0xf, 0xf, 0xe);
        } else {
            fn_8017502C(c + 0x241c, 0xf, 0xf, 0xf, 0xa);
        }
        if (*(u32 *)(p + 0x2c) & 0x20) {
            fn_80174E70(c + 0x241c, 0x1c);
            fn_80174F50(c + 0x241c, 7, 7, 7, 6);
        } else {
            fn_80174F50(c + 0x241c, 7, 7, 7, 5);
        }
        fn_80174FB4(c + 0x241c, 0, 0, 0, 1, 0);
        fn_80174ED8(c + 0x241c, 0, 0, 0, 1, 0);
        fn_80174E2C(c + 0x241c, 0, 0);
        fn_80174CB8(c + 0x241c);
        wA_cull(c, 0);
        wA_z(c, 1);
        *(u32 *)(c + 0x2c) &= ~0x800;
    }
}

}
