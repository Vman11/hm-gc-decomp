// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EB668[];
void fn_801A7684(void *);
extern u32 lbl_8035AFCC;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C801BBC78 {
    u8 b[0x174];
    C801BBC78() {
        fn_801A7684(this);
        *(u8 **)(b + 0x80) = lbl_802EB668;
        *(u32 *)(b + 0x16c) = 0;
        *(u32 *)(b + 0x170) = 0;
        *(u32 *)(b + 0x168) = 1;
    }
};

C801BBC78 *fn_801BBC78(void) {
    C801BBC78 *p;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    p = new C801BBC78;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
