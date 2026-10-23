// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802D2A78[];
extern u8 lbl_803594B0[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800AB6A8 : C8024262C {
    u32 f[71];
    C800AB6A8(u8 *b) {
        f[0] = (u32)(b + 1712);
        f[0x15] = 0x22;
        f[0xb] = 0x22;
        f[0x1a] = 3;
        f[0x17] = 1;
        f[0x20] = 2;
        f[0x1f] = 0;
        f[0x21] = 0;
        f[0x22] = 0;
        f[0x23] = 0;
        f[0x25] = 0;
        f[0x16] = (u32)(b + 568);
        f[10] = (u32)(b + 704);
        f[0xc] = (u32)(b + 1112);
        f[0x1b] = (u32)(b + 556);
        f[0x1e] = (u32)(b + 540);
        f[0x31] = (u32)lbl_803594B0;
        f[0x32] = 0;
        f[0x33] = 0;
        f[0x3d] = 0;
        f[0x3f] = 0;
        f[0x43] = 0;
        f[0x46] = 0;
    }
};

void *fn_800AB6A8(void) {
    u8 *base = lbl_802D2A78;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800AB6A8(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
