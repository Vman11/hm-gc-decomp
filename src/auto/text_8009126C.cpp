// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802C96A0[];
extern u8 lbl_80359360[4];
extern u8 lbl_80359364[4];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C8009126C : C8024262C {
    u32 f[76];
    C8009126C(u8 *b) {
        f[0] = (u32)(b + 900);
        f[0x15] = 7;
        f[0xb] = 7;
        f[0x1a] = 2;
        f[0x17] = 2;
        f[0x20] = 1;
        f[0x1f] = 0;
        f[0x21] = 1;
        f[0x22] = 4;
        f[0x23] = 0;
        f[0x25] = 0;
        f[0x16] = (u32)(b + 636);
        f[10] = (u32)(b + 664);
        f[0xc] = (u32)(b + 748);
        f[0x1b] = (u32)lbl_80359364;
        f[0x1e] = (u32)(b + 604);
        f[0x31] = (u32)lbl_80359360;
        f[0x32] = 0;
        f[0x33] = (u32)(b + 540);
        f[0x3d] = (u32)(b + 552);
        f[0x3f] = 0;
        f[0x43] = 0;
        f[0x46] = 1;
        f[0x47] = 0;
        f[0x48] = 0;
        f[0x49] = 0;
        f[0x4a] = 0;
        f[0x4b] = 0;
    }
};

void *fn_8009126C(void) {
    u8 *base = lbl_802C96A0;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8009126C(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
