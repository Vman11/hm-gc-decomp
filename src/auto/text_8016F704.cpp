#include "common.h"

extern "C" {

extern u8 lbl_8032ED28[];
extern u32 lbl_8035AD30;
extern u32 lbl_8035AD34;
extern const u16 lbl_80364710;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
struct C80175748 { u8 pad[0x1c]; u32 f1c; u8 pad2[0x10]; C80175748(); ~C80175748(); };
struct E8016F704 { u8 b[0x30]; };
void fn_80175570(C80175748 *, E8016F704 *);
struct S8016F704 { u16 flags; u16 pad2; C80175748 *arr; u8 pad8[0xa]; u16 count; };

void fn_8016F704(S8016F704 *p) {
    u32 i;

    if (lbl_8035AD34 != 0) {
        p->count = lbl_8035AD34;
        if (lbl_8035AD30 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AD30);
        p->arr = new C80175748[lbl_8035AD34];
        fn_800F7E98();
        if (p->arr == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        for (i = 0; i < lbl_8035AD34; i++) {
            fn_80175570(&p->arr[i], &((E8016F704 *)lbl_8032ED28)[i]);
        }
        for (i = 0; i < lbl_8035AD34; i++) {
            if (p->arr[i].f1c & 0x10) {
                p->flags |= lbl_80364710;
                return;
            }
        }
    }
}

} /* extern "C" */
