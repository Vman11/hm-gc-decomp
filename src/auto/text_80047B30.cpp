// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802B5020[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80047B30 : C8024262C {
    u32 f[78];
    C80047B30(u8 *b) {
        f[0] = (u32)(b + 2164);
        f[0x15] = 29;
        f[0xb] = 28;
        f[0x1a] = 6;
        f[0x17] = 3;
        f[0x20] = 6;
        f[0x1f] = 3;
        f[0x21] = 1;
        f[0x22] = 9;
        f[0x23] = 0;
        f[0x25] = 6;
        f[0x16] = (u32)(b + 952);
        f[10] = (u32)(b + 1068);
        f[0xc] = (u32)(b + 1404);
        f[0x1b] = (u32)(b + 928);
        f[0x1e] = (u32)(b + 760);
        f[0x31] = (u32)(b + 540);
        f[0x32] = (u32)(b + 564);
        f[0x33] = (u32)(b + 600);
        f[0x3d] = (u32)(b + 612);
        f[0x3f] = 0;
        f[0x43] = (u32)(b + 808);
        f[0x46] = 0;
        f[0x47] = 0;
        f[0x48] = 0;
        f[0x49] = 0;
        f[0x4a] = 0;
        f[0x4b] = 0;
        f[0x4c] = 0;
        f[0x4d] = 0;
    }
};

void *fn_80047B30(void) {
    u8 *base = lbl_802B5020;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80047B30(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
