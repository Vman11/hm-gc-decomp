// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802C58A0[];
extern u8 lbl_80359320[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80089E30 : C8024262C {
    u32 f[70];
    C80089E30(u8 *b) {
        f[0] = (u32)(b + 788);
        f[0x15] = 7;
        f[0xb] = 7;
        f[0x1a] = 1;
        f[0x17] = 0;
        f[0x20] = 0;
        f[0x1f] = 0;
        f[0x21] = 2;
        f[0x22] = 0;
        f[0x23] = 0;
        f[0x25] = 0;
        f[0x16] = (u32)(b + 564);
        f[10] = (u32)(b + 592);
        f[0xc] = (u32)(b + 676);
        f[0x1b] = (u32)lbl_80359320;
        f[0x1e] = 0;
        f[0x31] = 0;
        f[0x32] = 0;
        f[0x33] = (u32)(b + 540);
        f[0x3d] = 0;
        f[0x3f] = 0;
        f[0x43] = 0;
    }
};

void *fn_80089E30(void) {
    u8 *base = lbl_802C58A0;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80089E30(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
