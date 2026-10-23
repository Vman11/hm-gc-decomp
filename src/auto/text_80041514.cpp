// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802B09B8[];
extern u8 lbl_80359210[8];
extern f32 lbl_8035C3DC;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80041514 : C8024262C {
    u32 f[74];
    f32 g[3];
    C80041514(u8 *b) {
        f[0] = (u32)(b + 992);
        f[0x15] = 7;
        f[0xb] = 7;
        f[0x1a] = 5;
        f[0x17] = 1;
        f[0x20] = 2;
        f[0x1f] = 2;
        f[0x21] = 6;
        f[0x22] = 0;
        f[0x23] = 0;
        f[0x25] = 0;
        f[0x16] = (u32)(b + 672);
        f[10] = (u32)(b + 700);
        f[0xc] = (u32)(b + 784);
        f[0x1b] = (u32)(b + 652);
        f[0x1e] = (u32)(b + 636);
        f[0x31] = (u32)lbl_80359210;
        f[0x32] = (u32)(b + 540);
        f[0x33] = (u32)(b + 564);
        f[0x3d] = 0;
        f[0x3f] = 0;
        f[0x43] = 0;
        f[0x46] = 0;
        f[0x47] = 0;
        f[0x48] = 0;
        f[0x49] = 0;
        g[0] = lbl_8035C3DC;
        g[1] = lbl_8035C3DC;
        g[2] = lbl_8035C3DC;
    }
};

void *fn_80041514(void) {
    u8 *base = lbl_802B09B8;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80041514(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
