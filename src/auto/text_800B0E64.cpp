// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802D5F48[];
extern u8 lbl_803594E0[8];
extern u8 lbl_803594D8[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800B0E64 : C8024262C {
    u8 pad[0x128];
    C800B0E64(u8 *base) {
        *(void **)this = base + 2116;
        M2C_FIELD(this, s32 *, 0x54) = 36;
        M2C_FIELD(this, s32 *, 0x2c) = 35;
        M2C_FIELD(this, s32 *, 0x68) = 2;
        M2C_FIELD(this, s32 *, 0x5c) = 0;
        M2C_FIELD(this, s32 *, 0x80) = 2;
        M2C_FIELD(this, s32 *, 0x7c) = 12;
        M2C_FIELD(this, s32 *, 0x84) = 1;
        M2C_FIELD(this, s32 *, 0x88) = 0;
        M2C_FIELD(this, s32 *, 0x8c) = 0;
        M2C_FIELD(this, s32 *, 0x94) = 0;
        M2C_FIELD(this, void **, 0x58) = base + 696;
        M2C_FIELD(this, void **, 0x28) = base + 840;
        M2C_FIELD(this, void **, 0x30) = base + 1260;
        M2C_FIELD(this, void **, 0x6c) = lbl_803594E0;
        M2C_FIELD(this, s32 *, 0x78) = 0;
        M2C_FIELD(this, void **, 0xc4) = lbl_803594D8;
        M2C_FIELD(this, void **, 0xc8) = base + 540;
        M2C_FIELD(this, void **, 0xcc) = base + 684;
        M2C_FIELD(this, s32 *, 0xf4) = 0;
        M2C_FIELD(this, s32 *, 0xfc) = 0;
        M2C_FIELD(this, s32 *, 0x10c) = 0;
        M2C_FIELD(this, s32 *, 0x118) = 0;
        M2C_FIELD(this, s32 *, 0x11c) = 0;
        M2C_FIELD(this, s32 *, 0x120) = 0;
        M2C_FIELD(this, s32 *, 0x124) = 0;
    }
};

void *fn_800B0E64(void) {
    u8 *base = lbl_802D5F48;
    C800B0E64 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800B0E64(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
#pragma opt_propagation reset

} /* extern "C" */
