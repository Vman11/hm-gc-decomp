// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
#pragma optEH2 on

extern "C" {
extern void *lbl_8035B738;
extern u8 lbl_802F2DE8[];
extern f32 lbl_80366C00;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80267F2C(void *);
} /* extern "C" */

struct C80266A14 {
    u8 pad[268];
    C80266A14();
    ~C80266A14();
};

struct C80266A14i {
    u8 pad[252];
    s32 f252;
    s32 f256;
    f32 f260;
    u8 pad2[268 - 264];
    C80266A14i() {
        fn_80267F2C(this);
        *(void **)this = lbl_802F2DE8;
        f252 = 0;
        f256 = 0;
        f260 = lbl_80366C00;
    }
};

extern "C" void *fn_802660E4(s32 n) {
    C80266A14 *r;
    if (n <= 1) {
        if (lbl_8035B738 == NULL) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B738);
        r = (C80266A14 *)new C80266A14i;
        fn_800F7E98();
        if (r == NULL) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return r;
    }
    if (lbl_8035B738 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B738);
    r = new C80266A14[n];
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
