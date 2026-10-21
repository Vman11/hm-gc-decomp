#include "common.h"

extern "C" {

extern u32 lbl_8035A9F4;
extern u32 lbl_8035AE50;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
struct C8018FFC4 { u8 pad[0x40]; C8018FFC4(); };
struct S8018F124 { u32 count; C8018FFC4 *arr; };

void fn_8018F124(S8018F124 *p, u32 n, s32 mode) {
    if (p->arr != 0) {
        if (p->arr != 0) {
            delete[] p->arr;
        }
        p->count = 0;
        p->arr = 0;
    }
    p->count = n;
    if (*(u32 *)(lbl_8035AE50 + 0x18) >= 5) {
        *(u32 *)(lbl_8035AE50 + 0x1c) = *(u32 *)(lbl_8035AE50 + 0x18);
    }
    else {
        *(u32 *)(lbl_8035AE50 + 0x1c) = 5;
    }
    if (mode == 0) {
        if (lbl_8035AE50 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AE50);
        p->arr = new C8018FFC4[p->count];
        fn_800F7E98();
        if (p->arr == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
    }
    else {
        if (lbl_8035A9F4 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035A9F4);
        p->arr = new C8018FFC4[p->count];
        fn_800F7E98();
        if (p->arr == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
    }
    *(u32 *)(lbl_8035AE50 + 0x1c) = *(u32 *)(lbl_8035AE50 + 0x18);
}

} /* extern "C" */
