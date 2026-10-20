// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(s32); virtual s32 m5(); };
extern "C" { extern u16 lbl_80363F40, lbl_80363F42, lbl_80363F44, lbl_80363F46, lbl_80363F48, lbl_80363F4A, lbl_80363F4C; void fn_800FAEF8(void *); u32 fn_800FADA8(void *); void fn_800FB064(void *, void *); void fn_800FBF5C(void *, void *, u16); void fn_800FAEA0(void *); }

void fn_8012F548(u32 *p, E *q, u32 c) {
    s32 k;
    p[5] = c;
    fn_800FAEF8(q);
    *(u16 *)(p + 1) = 0;
    while ((u32)(k = q->m5()) != 102) {
        switch (k) {
        case 104:
            *(u16 *)(p + 1) |= lbl_80363F40;
            break;
        case 105:
            *(u16 *)(p + 1) &= ~0x30;
            break;
        case 106:
            *(u16 *)(p + 1) |= lbl_80363F42;
            break;
        case 88:
            *(u16 *)(p + 1) |= lbl_80363F44;
            *(u16 *)(p + 1) &= ~6;
            break;
        case 89:
            *(u16 *)(p + 1) |= lbl_80363F46;
            *(u16 *)(p + 1) &= ~1;
            break;
        case 90:
            *(u16 *)(p + 1) |= lbl_80363F48;
            *(u16 *)(p + 1) &= ~1;
            break;
        case 91:
            *(u16 *)(p + 1) |= lbl_80363F4A;
            *(u16 *)(p + 1) &= ~7;
            break;
        default:
            q->m4(30);
            break;
        }
    }
    p[0] = fn_800FADA8(q);
    if ((u32)q->m5() == 119) {
        *(u16 *)((u8 *)p + 6) |= lbl_80363F4C;
        fn_800FB064(q, p + 3);
    } else {
        *(u32 *)((u8 *)q + 4) = 1;
        fn_800FBF5C(p, q, *(u16 *)(p + 1));
    }
    fn_800FAEA0(q);
    fn_800FAEA0(q);
}

} /* extern "C" */
