// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802D2290[];
extern u8 lbl_802D22C0[];
extern u8 lbl_80359478[0x8];
extern u8 lbl_80359480[0x8];
extern u8 lbl_80359488[0x8];
extern u8 lbl_80359490[0x8];
extern u32 lbl_8035B530;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C8024262C {
    C8024262C();
};

struct C800A9D80 : C8024262C {
    u32 w[0x48];
    C800A9D80() {
        w[0] = (u32)lbl_802D22C0;
        w[0x15] = 2;
        w[0xb] = 2;
        w[0x1a] = 2;
        w[0x17] = 0;
        w[0x20] = 2;
        w[0x1f] = 0;
        w[0x21] = 0;
        w[0x22] = 0;
        w[0x23] = 0;
        w[0x25] = 0;
        w[0x16] = (u32)lbl_80359488;
        w[10] = (u32)lbl_802D2290;
        w[0xc] = (u32)lbl_80359490;
        w[0x1b] = (u32)lbl_80359480;
        w[0x1e] = 0;
        w[0x31] = (u32)lbl_80359478;
        w[0x32] = 0;
        w[0x33] = 0;
        w[0x3d] = 0;
        w[0x3f] = 0;
        w[0x43] = 0;
        w[0x46] = 0;
        w[0x47] = 0;
    }
};

C800A9D80 *fn_800A9D80(void) {
    C800A9D80 *p;

    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    p = new C800A9D80;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
