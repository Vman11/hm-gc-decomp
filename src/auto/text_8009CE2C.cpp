// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802CDE68[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C8009CE2C : C8024262C {
    u32 f[77];
    C8009CE2C(u8 *b) {
        f[0] = (u32)(b + 1676);
        f[0x15] = 16;
        f[0xb] = 15;
        f[0x1a] = 6;
        f[0x17] = 4;
        f[0x20] = 3;
        f[0x1f] = 13;
        f[0x21] = 0;
        f[0x22] = 8;
        f[0x23] = 0;
        f[0x25] = 0;
        f[0x16] = (u32)(b + 928);
        f[10] = (u32)(b + 992);
        f[0xc] = (u32)(b + 1172);
        f[0x1b] = (u32)(b + 904);
        f[0x1e] = (u32)(b + 840);
        f[0x31] = (u32)(b + 540);
        f[0x32] = (u32)(b + 552);
        f[0x33] = 0;
        f[0x3d] = (u32)(b + 708);
        f[0x3f] = 0;
        f[0x43] = 0;
        f[0x46] = 0;
        f[0x47] = 0;
        f[0x48] = 0;
        f[0x49] = 0;
        f[0x4a] = 0;
        f[0x4b] = 0;
        f[0x4c] = 0;
    }
};

void *fn_8009CE2C(void) {
    u8 *base = lbl_802CDE68;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8009CE2C(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
