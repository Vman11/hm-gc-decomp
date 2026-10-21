// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802C3B60[];
extern f32 lbl_8035FAB4;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C8007FA64 : C8024262C {
    u8 pad[0x12C];
    C8007FA64(u8 *b) {
        *(void **)this = b + 0x3FC;
        M2C_FIELD(this, s32 *, 0x54) = 8;
        M2C_FIELD(this, s32 *, 0x2C) = 8;
        M2C_FIELD(this, s32 *, 0x68) = 5;
        M2C_FIELD(this, s32 *, 0x5C) = 0;
        M2C_FIELD(this, s32 *, 0x80) = 3;
        M2C_FIELD(this, s32 *, 0x7C) = 3;
        M2C_FIELD(this, s32 *, 0x84) = 0;
        M2C_FIELD(this, s32 *, 0x88) = 1;
        M2C_FIELD(this, s32 *, 0x8C) = 0;
        M2C_FIELD(this, s32 *, 0x94) = 0;
        M2C_FIELD(this, void **, 0x58) = b + 0x274;
        M2C_FIELD(this, void **, 0x28) = b + 0x294;
        M2C_FIELD(this, void **, 0x30) = b + 0x2F4;
        M2C_FIELD(this, void **, 0x6C) = b + 0x260;
        M2C_FIELD(this, s32 *, 0x78) = 0;
        M2C_FIELD(this, void **, 0xC4) = b + 0x21C;
        M2C_FIELD(this, void **, 0xC8) = b + 0x228;
        M2C_FIELD(this, s32 *, 0xCC) = 0;
        M2C_FIELD(this, void **, 0xF4) = b + 0x24C;
        M2C_FIELD(this, s32 *, 0xFC) = 0;
        M2C_FIELD(this, s32 *, 0x10C) = 0;
        M2C_FIELD(this, s32 *, 0x118) = 0;
        M2C_FIELD(this, f32 *, 0x11C) = lbl_8035FAB4;
        M2C_FIELD(this, f32 *, 0x120) = lbl_8035FAB4;
        M2C_FIELD(this, f32 *, 0x124) = lbl_8035FAB4;
        M2C_FIELD(this, s32 *, 0x128) = 0;
    }
};

void *fn_8007FA64(void) {
    u8 *b = lbl_802C3B60;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8007FA64(b);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
