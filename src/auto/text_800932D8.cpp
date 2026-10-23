// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802CA620[];
extern u8 lbl_8035938C[4];
extern u8 lbl_80359388[4];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800932D8 : C8024262C {
    u32 f[71];
    C800932D8(u8 *b) {
        f[0] = (u32)(b + 1252);
        f[0x15] = 0x11;
        f[0xb] = 0x11;
        f[0x1a] = 1;
        f[0x17] = 0;
        f[0x20] = 1;
        f[0x1f] = 0;
        f[0x21] = 0xe;
        f[0x22] = 0;
        f[0x23] = 0;
        f[0x25] = 0;
        f[0x16] = (u32)(b + 708);
        f[10] = (u32)(b + 776);
        f[0xc] = (u32)(b + 980);
        f[0x1b] = (u32)lbl_8035938C;
        f[0x1e] = 0;
        f[0x31] = (u32)lbl_80359388;
        f[0x32] = 0;
        f[0x33] = (u32)(b + 540);
        f[0x3d] = 0;
        f[0x3f] = 0;
        f[0x43] = 0;
        f[0x46] = 0;
    }
};

void *fn_800932D8(void) {
    u8 *base = lbl_802CA620;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800932D8(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
