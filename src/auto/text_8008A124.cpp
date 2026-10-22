// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802C5C08[];
extern u8 lbl_80359328[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C8004C36C : C8024262C {
    u8 pad[280];
    C8004C36C(u8 *base) {
        *(void **)this = base + 744;
        M2C_FIELD(this, s32 *, 0x54) = 6;
        M2C_FIELD(this, s32 *, 0x2c) = 6;
        M2C_FIELD(this, s32 *, 0x68) = 1;
        M2C_FIELD(this, s32 *, 0x5c) = 0;
        M2C_FIELD(this, s32 *, 0x80) = 0;
        M2C_FIELD(this, s32 *, 0x7c) = 0;
        M2C_FIELD(this, s32 *, 0x84) = 1;
        M2C_FIELD(this, s32 *, 0x88) = 0;
        M2C_FIELD(this, s32 *, 0x8c) = 0;
        M2C_FIELD(this, s32 *, 0x94) = 0;
        M2C_FIELD(this, void **, 0x58) = base + 552;
        M2C_FIELD(this, void **, 0x28) = base + 576;
        M2C_FIELD(this, void **, 0x30) = base + 648;
        M2C_FIELD(this, void **, 0x6c) = lbl_80359328;
        M2C_FIELD(this, s32 *, 0x78) = 0;
        M2C_FIELD(this, s32 *, 0xc4) = 0;
        M2C_FIELD(this, s32 *, 0xc8) = 0;
        M2C_FIELD(this, void **, 0xcc) = base + 540;
        M2C_FIELD(this, s32 *, 0xf4) = 0;
        M2C_FIELD(this, s32 *, 0xfc) = 0;
        M2C_FIELD(this, s32 *, 0x10c) = 0;
    }
};

void *fn_8008A124(void) {
    u8 *base = lbl_802C5C08;
    C8004C36C *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8004C36C(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
