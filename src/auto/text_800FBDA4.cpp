#include "common.h"

extern "C" {

extern u32 lbl_8035AA18;
void __dla__FPv(void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct S800FBDA4 { u32 flags; u32 count; u8 *data; u32 fc; };

void fn_800FBDA4(S800FBDA4 *p, u32 a, u32 count) {
    if (p->data != 0) {
        if (p->data != 0 && (p->flags & 1) == 0) {
            __dla__FPv(p->data);
        }
        p->flags = 0;
        p->count = 0;
        p->data = 0;
        p->fc = 0;
    }
    p->count = count;
    if (*(u32 *)(lbl_8035AA18 + 0x18) >= 5) {
        *(u32 *)(lbl_8035AA18 + 0x1c) = *(u32 *)(lbl_8035AA18 + 0x18);
    }
    else {
        *(u32 *)(lbl_8035AA18 + 0x1c) = 5;
    }
    if (lbl_8035AA18 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AA18);
    p->data = new u8[p->count << 5];
    fn_800F7E98();
    if (p->data == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    *(u32 *)(lbl_8035AA18 + 0x1c) = *(u32 *)(lbl_8035AA18 + 0x18);
    p->fc = a;
}

} /* extern "C" */
