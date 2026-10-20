// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8017B784 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FAEF8(void *); void fn_800FB064(void *, void *); void fn_800FB0F8(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_80121CE8(void *, void *); u32 fn_800FB33C(void *); f32 fn_800FB2E0(void *); void *fn_800F8274(void *, void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *); void fn_8018E20C(void *, void *, u32); void fn_80101124(void *, void *); void fn_80101820(void *); void *fn_80207198(void *, void *, void *); void __dla__FPv(void *); }
extern "C" { extern u32 lbl_80364838; }

void fn_8017B784(u8 *p, u8 *q, S_8017B784 *s) {
    u8 b16[8];
    char b8[8];
    u32 t;
    *(s32 *)(p + 4) = 5;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        if (t == 106) {
            switch (s->n()) {
            case 58:
                *(s32 *)(p + 16) = 0;
                break;
            case 65:
                *(s32 *)(p + 16) = 1;
                break;
            case 110:
                *(s32 *)(p + 16) = 2;
                break;
            case 111:
                *(s32 *)(p + 16) = 3;
                break;
            }
        } else if (t == 57) {
            void *r;
            fn_800FB064(s, b16);
            fn_800FB064(s, b8);
            if (b8 == 0 || b8[0] == 0) {
                r = fn_800F9398(q + 204, b16);
            } else {
                r = fn_800F9788(q + 228, b8, b16);
            }
            *(void **)(p + 20) = r;
        } else {
            fn_8018E20C(p, s, t);
        }
    }
    *(u32 *)p |= lbl_80364838;
}

} /* extern "C" */
