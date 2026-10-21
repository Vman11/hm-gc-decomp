// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802C9AA0[];
extern u8 lbl_80359370[8];
extern u8 lbl_80359378[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80091820 : C8024262C {
    u32 f[74];
    C80091820(u8 *b) {
        f[0] = (u32)(b + 1268);
        f[0x15] = 18;
        f[0xb] = 18;
        f[0x1a] = 1;
        f[0x17] = 1;
        f[0x20] = 2;
        f[0x1f] = 8;
        f[0x21] = 0;
        f[0x22] = 1;
        f[0x23] = 0;
        f[0x25] = 1;
        f[0x16] = (u32)(b + 692);
        f[10] = (u32)(b + 764);
        f[0xc] = (u32)(b + 980);
        f[0x1b] = (u32)lbl_80359378;
        f[0x1e] = (u32)(b + 656);
        f[0x31] = (u32)lbl_80359370;
        f[0x32] = (u32)(b + 540);
        f[0x33] = 0;
        f[0x3d] = (u32)(b + 636);
        f[0x3f] = 0;
        f[0x43] = (u32)(b + 672);
        f[0x46] = 0;
        f[0x47] = 0;
        f[0x48] = 0;
        f[0x49] = 0;
    }
};

void *fn_80091820(void) {
    u8 *base = lbl_802C9AA0;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80091820(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
