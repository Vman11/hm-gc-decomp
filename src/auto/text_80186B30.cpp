// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" { void fn_800FB064(void *, void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *);
f32 fn_800FB2E0(void *); void fn_80121CE8(void *, void *); void fn_80182AAC(void *, void *, u32);
extern u32 lbl_803649A0; extern u32 lbl_803649A4; extern u32 lbl_803649A8; extern u32 lbl_803649AC; }

void fn_80186B30(u8 *p, void *s, u32 t);
void __dt__9C801870CCFv(void);
void fn_80186FE4(void);
void fn_80186FA4(void);
void fn_80186D00(void);

/* vtable */
void *lbl_802E8B68[7] = {
    0, 0, (void *)fn_80186B30, (void *)__dt__9C801870CCFv, (void *)fn_80186FE4, (void *)fn_80186FA4, (void *)fn_80186D00
};

void fn_80186B30(u8 *p, void *s, u32 t) {
    u8 b16[8];
    char b8[8];
    switch (t) {
    case 63: {
        void *r;
        fn_800FB064(s, b16);
        fn_800FB064(s, b8);
        u8 *q = *(u8 **)(*(u8 **)(p + 44) + 4);
        if (b8 == 0 || b8[0] == 0) {
            r = fn_800F9398(q + 600, b16);
        } else {
            r = fn_800F9788(q + 624, b8, b16);
        }
        *(void **)(p + 84) = r;
        break;
    }
    case 59:
        *(f32 *)(p + 12) = fn_800FB2E0(s);
        *(f32 *)(p + 16) = fn_800FB2E0(s);
        break;
    case 67:
        *(f32 *)(p + 36) = fn_800FB2E0(s);
        *(f32 *)(p + 40) = fn_800FB2E0(s);
        break;
    case 60:
        *(u32 *)(p + 4) |= lbl_803649A0;
        break;
    case 61:
        *(u32 *)(p + 4) |= lbl_803649A4;
        break;
    case 62:
        *(f32 *)(p + 20) *= fn_800FB2E0(s);
        *(f32 *)(p + 24) *= fn_800FB2E0(s);
        break;
    case 64:
        *(f32 *)(p + 48) = *(f32 *)(p + 28) * fn_800FB2E0(s);
        *(f32 *)(p + 52) = *(f32 *)(p + 32) * fn_800FB2E0(s);
        *(f32 *)(p + 56) = *(f32 *)(p + 28) * fn_800FB2E0(s);
        *(f32 *)(p + 60) = *(f32 *)(p + 32) * fn_800FB2E0(s);
        break;
    case 65:
        *(u32 *)(p + 4) |= lbl_803649A8;
        fn_80121CE8(p + 64, s);
        break;
    case 66:
        *(u32 *)(p + 4) |= lbl_803649AC;
        break;
    default:
        fn_80182AAC(p, s, t);
        break;
    }
}

} /* extern "C" */
