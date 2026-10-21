// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F1D60[];
extern u8 lbl_802F1DD8[];
extern u8 lbl_80359A68[0x4];
extern u8 lbl_80359A6C[0x4];
extern u8 lbl_80359A70[0x8];
extern u8 lbl_80359A78[0x8];
extern u32 lbl_8035B530;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C8024262C {
    C8024262C();
};

struct C8024A16C : C8024262C {
    u32 w[0x46];
    C8024A16C() {
        w[0] = (u32)lbl_802F1DD8;
        w[0x15] = 2;
        w[0xb] = 2;
        w[0x1a] = 1;
        w[0x17] = 0;
        w[0x20] = 1;
        w[0x1f] = 0;
        w[0x21] = 0;
        w[0x22] = 0;
        w[0x23] = 0;
        w[0x25] = 0;
        w[0x16] = (u32)lbl_80359A70;
        w[10] = (u32)lbl_802F1D60;
        w[0xc] = (u32)lbl_80359A78;
        w[0x1b] = (u32)lbl_80359A6C;
        w[0x1e] = 0;
        w[0x31] = (u32)lbl_80359A68;
        w[0x32] = 0;
        w[0x33] = 0;
        w[0x3d] = 0;
        w[0x3f] = 0;
        w[0x43] = 0;
    }
};

C8024A16C *fn_8024A16C(void) {
    C8024A16C *p;

    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    p = new C8024A16C;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
