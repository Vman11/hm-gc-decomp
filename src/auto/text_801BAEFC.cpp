// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EB3A8[];
void fn_801B31A4(void *);
extern u32 lbl_8035AFCC;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C801BAEFC {
    u8 b[0x19c];
    C801BAEFC() {
        fn_801B31A4(this);
        *(u8 **)(b + 0x80) = lbl_802EB3A8;
        *(u32 *)(b + 0x174) = 0;
        *(u32 *)(b + 0x198) = 0;
        *(u32 *)(b + 0x164) = 0;
        *(u32 *)(b + 0x16c) = 0;
        *(u32 *)(b + 0x168) = 0;
        *(u32 *)(b + 0x170) = 1;
        *(u32 *)(b + 0x178) = 0;
        *(u32 *)(b + 0x17c) = 0;
    }
};

C801BAEFC *fn_801BAEFC(void) {
    C801BAEFC *p;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    p = new C801BAEFC;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
