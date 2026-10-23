// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EC108[];
extern void *lbl_8035AFCC;
extern f32 lbl_80365010;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801B31A4(void *);
void fn_8010EFF8(void *);
void fn_8010EE3C(void *);

struct C801B31A4 {
    C801B31A4() { fn_801B31A4(this); }
    ~C801B31A4();
};

struct C8010EFF8 {
    u8 pad[0x18];
    C8010EFF8() { fn_8010EFF8(this); }
    ~C8010EFF8();
};

struct C8010EE3C {
    u8 pad[0xC];
    C8010EE3C() { fn_8010EE3C(this); }
    ~C8010EE3C();
};

struct C801CB160 : C801B31A4 {
    u8 b0[0x80];
    u8 *vt;
    u8 b1[0x164 - 0x84];
    u32 f164, f168, f16c, f170, f174, f178, f17c;
    C8010EFF8 m180;
    C8010EE3C m198;
    u32 f1a4, f1a8, f1ac, f1b0, f1b4, f1b8, f1bc, f1c0;
    s32 f1c4;
    u32 f1c8;
    f32 f1cc, f1d0, f1d4, f1d8, f1dc, f1e0, f1e4;
    u32 f1e8;
    f32 f1ec;
    u32 f1f0;
    u8 b1f4[0x234 - 0x1f4];
    u8 b234;
    u32 f238;
    C801CB160() : vt(lbl_802EC108) {
        f164 = 0;
        f16c = 0;
        f170 = 0;
        f174 = 0;
        f17c = 0;
        f1a4 = 0;
        f1a8 = 0;
        f1ac = 0;
        f1b0 = 0;
        f1b4 = 0;
        f1b8 = 0;
        f1bc = 0;
        f1c0 = 0;
        f1c4 = -1;
        f1c8 = 0;
        f1cc = lbl_80365010;
        f1d0 = lbl_80365010;
        f1d4 = lbl_80365010;
        f1d8 = lbl_80365010;
        f1dc = lbl_80365010;
        f1e0 = lbl_80365010;
        f1e4 = lbl_80365010;
        f1e8 = 0;
        f1ec = lbl_80365010;
        f1f0 = 0;
        b234 = 0;
        f238 = 0;
        f168 = 0;
        f178 = 0;
    }
};

C801CB160 *fn_801CB160(void) {
    C801CB160 *p;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    p = new C801CB160;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
