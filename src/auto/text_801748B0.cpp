// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct wA_Q { u8 pad[0x3abc]; u32 tex[8]; };
struct C80152B64 { u8 b[0x4c]; C80152B64(); };
extern u8 lbl_803286D0[];
extern const f32 lbl_80364748;
extern volatile f32 lbl_8036474C;
void fn_800D9ECC(C80152B64 *o, u32 a, s32 b);
void fn_80060568(const char *s, s32 a, s32 b, s32 c);
extern const u32 lbl_802A0F20[8];
extern const u32 lbl_802A0F40[28];
const u32 lbl_802A0F20[8] = { 0x1E, 0x21, 0x24, 0x27, 0x2A, 0x2D, 0x30, 0x33 };
const u32 lbl_802A0F40[28] = { 0x40, 0x43, 0x46, 0x49, 0x4C, 0x4F, 0x52, 0x55, 0, 6, 9, 0xC, 0xF, 0x12, 0x15, 0x18, 0x1B, 0, 6, 9, 0xC, 0xF, 0x12, 0x15, 0x18, 0x1B, 0, 6 };
#define T0 (*(void (**)(C80152B64 *, u32))(lbl_803286D0 + 0x0))
#define T4 (*(void (**)(C80152B64 *))(lbl_803286D0 + 0x4))
#define TC (*(void (**)(C80152B64 *, f32 *))(lbl_803286D0 + 0xC))
#define TBC (*(void (**)(C80152B64 *, f32 *))(lbl_803286D0 + 0xBC))
#define TE4 (*(void (**)(C80152B64 *, f32))(lbl_803286D0 + 0xE4))
#define T10C (*(void (**)(u32, u32))(lbl_803286D0 + 0x10C))
#define T164 (*(void (**)(C80152B64 *, u32))(lbl_803286D0 + 0x164))

void fn_801748B0(u8 *p, u8 *q) {
    C80152B64 o;
    if (*(u32 *)(p + 0x1c) & 1) {
        if (*(u32 *)(q + 0x275c) == 3) {
            if (*(s32 *)(q + 0x2a94) == 0) {
                T10C(*(u32 *)(q + 0x2a90), *(u32 *)(q + 0x2a84));
                *(s32 *)(q + 0x2a94) = 1;
            }
            T0(&o, *(u32 *)(q + 0x2a90));
            if (*(s32 *)(p + 0x24) != 0) {
                f32 v[3];
                v[0] = lbl_80364748;
                v[1] = lbl_80364748;
                v[2] = lbl_80364748;
                TC(&o, v);
            }
        } else if (*(u32 *)(q + 0x275c) == 6) {
            T0(&o, *(u32 *)(q + 0x1fc8));
            if (*(s32 *)(q + 0x2a94) == 0) {
                T10C(*(u32 *)(q + 0x2a90), *(u32 *)(q + 0x2a84));
                *(s32 *)(q + 0x2a94) = 1;
            }
            T164(&o, *(u32 *)(q + 0x2a90));
            if (*(s32 *)(p + 0x24) != 0) {
                f32 v[3];
                v[0] = lbl_80364748;
                v[1] = lbl_80364748;
                v[2] = lbl_80364748;
                TC(&o, v);
            }
        } else {
            T4(&o);
        }
    } else {
        if (*(u32 *)(q + 0x275c) == 0) {
            T0(&o, *(u32 *)(q + 0x2a84));
            if (*(s32 *)(p + 0x24) != 0) {
                f32 v[3];
                v[0] = lbl_80364748;
                v[1] = lbl_80364748;
                v[2] = lbl_80364748;
                TC(&o, v);
            }
        } else if (*(u32 *)(q + 0x275c) == 6) {
            T0(&o, *(u32 *)(q + 0x1fc8));
            if (*(s32 *)(p + 0x24) != 0) {
                f32 v[3];
                v[0] = lbl_80364748;
                v[1] = lbl_80364748;
                v[2] = lbl_80364748;
                TC(&o, v);
            }
        } else {
            T4(&o);
        }
    }
    fn_800D9ECC(&o, lbl_802A0F20[*(u8 *)(p + 0x21)], 0);
    {
        u32 f = *(u32 *)(p + 0x1c);
        if ((f & 0x70) || (f & 0x10e)) {
            if (f & 6) {
                u32 t = ((s32 *)(q + 0x3ABC))[*(u8 *)(p + 0x20)];
                if (t != 0) {
                    T0(&o, t);
                } else {
                    T4(&o);
                }
            } else if (f & 0x100) {
                u32 t = *(u32 *)(q + 0x2a8c);
                if (t != 0) {
                    T0(&o, t);
                } else {
                    T4(&o);
                }
            } else if (f & 8) {
                fn_80060568("4D texture transform not supported on the GameCube.", 0, 0, 0);
            } else {
                T4(&o);
            }
            {
                u32 x = lbl_802A0F40[*(u8 *)(p + 0x21)];
                volatile f32 v[3];
                TE4(&o, lbl_80364748);
                v[0] = lbl_80364748;
                v[1] = lbl_80364748;
                v[2] = lbl_8036474C;
                TBC(&o, (f32 *)v);
                fn_800D9ECC(&o, x, 0);
            }
        }
    }
}

} /* extern "C" */
