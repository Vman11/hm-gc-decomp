// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802B7B90[];
extern u8 lbl_80359248[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8007EC14(void *);

struct C8004E024 {
    u32 f[103];
    C8004E024(u8 *b) {
        fn_8007EC14(this);
        f[0] = (u32)(b + 1240);
        f[0x15] = 0xe;
        f[0xb] = 0xe;
        f[0x1a] = 4;
        f[0x17] = 2;
        f[0x20] = 1;
        f[0x1f] = 0;
        f[0x21] = 0;
        f[0x22] = 1;
        f[0x23] = 0xb;
        f[0x25] = 0;
        f[0x16] = (u32)(b + 648);
        f[10] = (u32)(b + 704);
        f[0xc] = (u32)(b + 872);
        f[0x1b] = (u32)(b + 632);
        f[0x1e] = (u32)(b + 600);
        f[0x31] = (u32)lbl_80359248;
        f[0x32] = 0;
        f[0x33] = 0;
        f[0x3d] = (u32)(b + 540);
        f[0x3f] = (u32)(b + 556);
        f[0x43] = 0;
    }
};

void *fn_8004E024(void) {
    u8 *base = lbl_802B7B90;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8004E024(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
