#include "common.h"

extern "C" {

extern u32 lbl_8035AA08;
void __dla__FPv(void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct S800FA1F4 { u8 *buf; u8 *start; u32 size; u8 *rd; u8 *wr; u32 valid; };

void fn_800FA1F4(S800FA1F4 *p, u32 size) {
    if (p->buf != 0) {
        if (p->buf != 0) {
            __dla__FPv(p->buf);
        }
        p->buf = 0;
        p->start = 0;
        p->size = 0;
        p->rd = 0;
        p->wr = 0;
        p->valid = 0;
    }
    if (*(u32 *)(lbl_8035AA08 + 0x18) >= 5) {
        *(u32 *)(lbl_8035AA08 + 0x1c) = *(u32 *)(lbl_8035AA08 + 0x18);
    }
    else {
        *(u32 *)(lbl_8035AA08 + 0x1c) = 5;
    }
    size = (size + 4) & ~4;
    if (lbl_8035AA08 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AA08);
    p->buf = new u8[size];
    fn_800F7E98();
    if (p->buf == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    *(u32 *)(lbl_8035AA08 + 0x1c) = *(u32 *)(lbl_8035AA08 + 0x18);
    if (p->buf == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    p->start = p->buf;
    p->size = size;
    p->wr = p->rd = p->start;
    p->valid = 1;
}

} /* extern "C" */
