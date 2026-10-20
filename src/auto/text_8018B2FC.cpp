// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8018B2FC { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FAEF8(void *); void fn_800FB064(void *, void *); void fn_800FB0F8(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_80121CE8(void *, void *); u32 fn_800FB33C(void *); f32 fn_800FB2E0(void *); void *fn_800F8274(void *, void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *); void fn_8018E20C(void *, void *, u32); void fn_80101124(void *, void *); void fn_80101820(void *); void *fn_80207198(void *, void *, void *); void __dla__FPv(void *); }
extern "C" { extern u32 lbl_80364A60; }

void fn_8018B2FC(u8 *p, u8 *q, S_8018B2FC *s) {
    u8 b16[8];
    char b8[8];
    u32 t;
    *(s32 *)(p + 4) = 0;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        switch (t) {
        case 59: {
            void *r;
            fn_800FB064(s, b16);
            fn_800FB064(s, b8);
            if (b8 == 0 || b8[0] == 0) {
                r = fn_800F9398(q + 300, b16);
            } else {
                r = fn_800F9788(q + 324, b8, b16);
            }
            *(void **)(p + 16) = r;
            if (*(void **)(p + 16) == 0) {
                s->err(37);
            }
            break;
        }
        case 60:
            *(s32 *)(p + 20) = 0;
            break;
        case 61:
            *(s32 *)(p + 20) = 1;
            break;
        case 62:
            *(s32 *)(p + 20) = 2;
            break;
        case 63:
            fn_80101124(p + 36, s);
            break;
        case 64:
            fn_80101124(p + 24, s);
            fn_80101820(p + 24);
            break;
        default:
            fn_8018E20C(p, s, t);
            break;
        }
    }
    *(u32 *)p |= lbl_80364A60;
}

} /* extern "C" */
