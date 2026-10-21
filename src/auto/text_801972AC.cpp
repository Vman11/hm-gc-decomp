// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FB064(void *, void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *);
void fn_80101124(void *, void *); void fn_801A17B8(void *, void *, void *, u32); extern f32 lbl_80364C18; extern u32 lbl_80364C48; extern u32 lbl_80364C4C; }

void fn_801972AC(u8 *p, u8 *q, S *s, u32 t) {
    u8 b16[8];
    char b8[8];
    switch (t) {
    case 85:
        fn_800FB064(s, b16);
        fn_800FB064(s, b8);
        {
            void *r;
            if (b8 == 0 || b8[0] == 0) {
                r = fn_800F9398(q + 264, b16);
            } else {
                r = fn_800F9788(q + 288, b8, b16);
            }
            *(void **)(p + 144) = r;
        }
        if (*(void **)(p + 144) == 0) {
            s->err(37);
        }
        break;
    case 149:
        fn_80101124(p + 176, s);
        break;
    case 150:
        fn_80101124(p + 188, s);
        *(f32 *)(p + 200) = *(f32 *)(p + 188) * lbl_80364C18;
        *(f32 *)(p + 204) = *(f32 *)(p + 192) * lbl_80364C18;
        *(f32 *)(p + 208) = *(f32 *)(p + 196) * lbl_80364C18;
        break;
    case 160:
        *(u32 *)p |= lbl_80364C48;
        break;
    case 162:
        *(s32 *)(p + 152) = 1;
        break;
    case 163:
        *(s32 *)(p + 152) = 8;
        *(u32 *)p |= lbl_80364C4C;
        break;
    default:
        fn_801A17B8(p, q, s, t);
        break;
    }
}

} /* extern "C" */
