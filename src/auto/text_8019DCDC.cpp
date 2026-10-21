// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" { void fn_800FB064(void *, void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *);
f32 fn_800FB2E0(void *); void fn_80121CE8(void *, void *); void fn_80182AAC(void *, void *, u32);
extern u32 lbl_80364CE8; extern u32 lbl_80364CEC; extern u32 lbl_80364CF0; extern u32 lbl_80364CF4; }

void fn_8019DCDC(u8 *p, void *s, u32 t);
void __dt__9C8019E380Fv(void);
void fn_8019DF04(void);
void fn_8019E2B4(void);
void fn_8019DF78(void);

/* vtable of C8019E380 */
void *lbl_802E9A70[7] = {
    0, 0, (void *)fn_8019DCDC, (void *)__dt__9C8019E380Fv, (void *)fn_8019DF04, (void *)fn_8019E2B4, (void *)fn_8019DF78
};

void fn_8019DCDC(u8 *p, void *s, u32 t) {
    u8 b16[8];
    char b8[8];
    switch (t) {
    case 64: {
        void *r;
        fn_800FB064(s, b16);
        fn_800FB064(s, b8);
        u8 *q = *(u8 **)(*(u8 **)(p + 44) + 4);
        if (b8 == 0 || b8[0] == 0) {
            r = fn_800F9398(q + 540, b16);
        } else {
            r = fn_800F9788(q + 564, b8, b16);
        }
        *(void **)(p + 84) = r;
        break;
    }
    case 59:
        fn_800FB064(s, b16);
        *(void **)(p + 88) = fn_800F9398(*(u8 **)(*(u8 **)(p + 44) + 12) + 32, b16);
        break;
    case 60:
        *(f32 *)(p + 12) = *(f32 *)(p + 28) * fn_800FB2E0(s);
        *(f32 *)(p + 16) = *(f32 *)(p + 32) * fn_800FB2E0(s);
        break;
    case 70:
        *(f32 *)(p + 36) = fn_800FB2E0(s);
        *(f32 *)(p + 40) = fn_800FB2E0(s);
        break;
    case 61:
        *(u32 *)(p + 4) |= lbl_80364CE8;
        break;
    case 62:
        *(u32 *)(p + 4) |= lbl_80364CEC;
        break;
    case 63:
        *(f32 *)(p + 20) *= fn_800FB2E0(s);
        *(f32 *)(p + 24) *= fn_800FB2E0(s);
        break;
    case 65:
        *(f32 *)(p + 92) = fn_800FB2E0(s);
        break;
    case 66:
        *(f32 *)(p + 96) = fn_800FB2E0(s);
        break;
    case 67:
        *(f32 *)(p + 48) = *(f32 *)(p + 28) * fn_800FB2E0(s);
        *(f32 *)(p + 52) = *(f32 *)(p + 32) * fn_800FB2E0(s);
        *(f32 *)(p + 56) = *(f32 *)(p + 28) * fn_800FB2E0(s);
        *(f32 *)(p + 60) = *(f32 *)(p + 32) * fn_800FB2E0(s);
        break;
    case 68:
        *(u32 *)(p + 4) |= lbl_80364CF0;
        fn_80121CE8(p + 64, s);
        break;
    case 69:
        *(u32 *)(p + 4) |= lbl_80364CF4;
        break;
    default:
        fn_80182AAC(p, s, t);
        break;
    }
}

} /* extern "C" */
