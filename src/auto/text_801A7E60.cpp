// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EA828[];
void fn_801A7684(void *);
extern u32 lbl_8035AFCC;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C801A7E60 {
    u8 b[0x16c];
    C801A7E60() {
        fn_801A7684(this);
        *(u8 **)(b + 0x80) = lbl_802EA828;
        *(u32 *)(b + 0x0) = 0;
        *(u32 *)(b + 0x168) = 0;
    }
};

C801A7E60 *fn_801A7E60(void) {
    C801A7E60 *p;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    p = new C801A7E60;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
