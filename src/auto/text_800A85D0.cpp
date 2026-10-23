// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802D16D8[];
extern u8 lbl_80359468[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800A85D0 : C8024262C {
    u8 pad[0x128];
    C800A85D0(u8 *b) {
        *(void **)this = b + 0x3E4;
        M2C_FIELD(this, s32 *, 0x54) = 7;
        M2C_FIELD(this, s32 *, 0x2C) = 7;
        M2C_FIELD(this, s32 *, 0x68) = 5;
        M2C_FIELD(this, s32 *, 0x5C) = 0;
        M2C_FIELD(this, s32 *, 0x80) = 1;
        M2C_FIELD(this, s32 *, 0x7C) = 3;
        M2C_FIELD(this, s32 *, 0x84) = 0;
        M2C_FIELD(this, s32 *, 0x88) = 1;
        M2C_FIELD(this, s32 *, 0x8C) = 0;
        M2C_FIELD(this, s32 *, 0x94) = 1;
        M2C_FIELD(this, void **, 0x58) = b + 0x27C;
        M2C_FIELD(this, void **, 0x28) = b + 0x298;
        M2C_FIELD(this, void **, 0x30) = b + 0x2EC;
        M2C_FIELD(this, void **, 0x6C) = b + 0x268;
        M2C_FIELD(this, s32 *, 0x78) = 0;
        M2C_FIELD(this, void **, 0xC4) = lbl_80359468;
        M2C_FIELD(this, void **, 0xC8) = b + 0x21C;
        M2C_FIELD(this, s32 *, 0xCC) = 0;
        M2C_FIELD(this, void **, 0xF4) = b + 0x240;
        M2C_FIELD(this, s32 *, 0xFC) = 0;
        M2C_FIELD(this, void **, 0x10C) = b + 0x254;
        M2C_FIELD(this, s32 *, 0x118) = 0;
        M2C_FIELD(this, s32 *, 0x11C) = 0;
        M2C_FIELD(this, s32 *, 0x120) = 0;
        M2C_FIELD(this, s32 *, 0x124) = 0;
    }
};

void *fn_800A85D0(void) {
    u8 *b = lbl_802D16D8;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800A85D0(b);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
