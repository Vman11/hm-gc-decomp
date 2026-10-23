// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802B86E0[];
extern u8 lbl_80359260[8];
extern u8 lbl_80359268[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C8004EE6C : C8024262C {
    u8 pad[0x134];
    C8004EE6C(u8 *b) {
        *(void **)this = b + 0x3CC;
        M2C_FIELD(this, s32 *, 0x54) = 8;
        M2C_FIELD(this, s32 *, 0x2C) = 8;
        M2C_FIELD(this, s32 *, 0x68) = 4;
        M2C_FIELD(this, s32 *, 0x5C) = 0;
        M2C_FIELD(this, s32 *, 0x80) = 2;
        M2C_FIELD(this, s32 *, 0x7C) = 0;
        M2C_FIELD(this, s32 *, 0x84) = 4;
        M2C_FIELD(this, s32 *, 0x88) = 2;
        M2C_FIELD(this, s32 *, 0x8C) = 1;
        M2C_FIELD(this, s32 *, 0x94) = 0;
        M2C_FIELD(this, void **, 0x58) = b + 0x27C;
        M2C_FIELD(this, void **, 0x28) = b + 0x29C;
        M2C_FIELD(this, void **, 0x30) = b + 0x2FC;
        M2C_FIELD(this, void **, 0x6C) = b + 0x26C;
        M2C_FIELD(this, s32 *, 0x78) = 0;
        M2C_FIELD(this, void **, 0xC4) = lbl_80359260;
        M2C_FIELD(this, s32 *, 0xC8) = 0;
        M2C_FIELD(this, void **, 0xCC) = b + 0x21C;
        M2C_FIELD(this, void **, 0xF4) = b + 0x24C;
        M2C_FIELD(this, void **, 0xFC) = lbl_80359268;
        M2C_FIELD(this, s32 *, 0x10C) = 0;
        M2C_FIELD(this, s32 *, 0x118) = 0;
        M2C_FIELD(this, s32 *, 0x11C) = 0;
        M2C_FIELD(this, s32 *, 0x120) = 0;
        M2C_FIELD(this, s32 *, 0x124) = 0;
        M2C_FIELD(this, s32 *, 0x128) = 1;
        M2C_FIELD(this, s32 *, 0x12C) = 0;
        M2C_FIELD(this, s32 *, 0x130) = 0;
    }
};

void *fn_8004EE6C(void) {
    u8 *b = lbl_802B86E0;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8004EE6C(b);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
