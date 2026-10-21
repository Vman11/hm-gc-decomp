// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EBDD8[];
extern u32 lbl_8035AFCC;
extern f32 lbl_80364FE8;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_801B31A4(void *);
void fn_801DD938(void *);

struct C801B31A4 {
    C801B31A4() { fn_801B31A4(this); }
    ~C801B31A4();
};

struct C801C49D4 : C801B31A4 {
    u8 b0[0x80];
    u8 *vt;
    u8 b1[0x164 - 0x84];
    u32 f164;
    f32 f168;
    u32 f16c, f170, f174, f178, f17c, f180, f184, f188, f18c, f190;
    u8 b194; u8 p1[7];
    u8 b19c; u8 p2[7];
    u8 b1a4; u8 p3[7];
    f32 f1ac;
    C801C49D4() : vt(lbl_802EBDD8) {
        f164 = 0;
        f168 = lbl_80364FE8;
        f16c = 0; f170 = 0; f174 = 0; f178 = 0; f17c = 0; f180 = 0; f184 = 0; f188 = 0; f18c = 0; f190 = 0;
        b194 = 0; b19c = 0; b1a4 = 0;
        f1ac = lbl_80364FE8;
        fn_801DD938(this);
    }
};

C801C49D4 *fn_801C49D4(void) {
    C801C49D4 *p;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    p = new C801C49D4;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
