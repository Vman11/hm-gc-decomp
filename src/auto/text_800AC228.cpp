// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802D3208[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800AC228 : C8024262C {
    u8 pad[0x138];
    C800AC228(u8 *base) {
        *(void **)this = base + 1920;
        M2C_FIELD(this, s32 *, 0x54) = 22;
        M2C_FIELD(this, s32 *, 0x2c) = 21;
        M2C_FIELD(this, s32 *, 0x68) = 7;
        M2C_FIELD(this, s32 *, 0x5c) = 3;
        M2C_FIELD(this, s32 *, 0x80) = 4;
        M2C_FIELD(this, s32 *, 0x7c) = 3;
        M2C_FIELD(this, s32 *, 0x84) = 1;
        M2C_FIELD(this, s32 *, 0x88) = 9;
        M2C_FIELD(this, s32 *, 0x8c) = 0;
        M2C_FIELD(this, s32 *, 0x94) = 2;
        M2C_FIELD(this, void **, 0x58) = base + 868;
        M2C_FIELD(this, void **, 0x28) = base + 956;
        M2C_FIELD(this, void **, 0x30) = base + 1208;
        M2C_FIELD(this, void **, 0x6c) = base + 840;
        M2C_FIELD(this, void **, 0x78) = base + 752;
        M2C_FIELD(this, void **, 0xc4) = base + 540;
        M2C_FIELD(this, void **, 0xc8) = base + 556;
        M2C_FIELD(this, void **, 0xcc) = base + 592;
        M2C_FIELD(this, void **, 0xf4) = base + 604;
        M2C_FIELD(this, s32 *, 0xfc) = 0;
        M2C_FIELD(this, void **, 0x10c) = base + 800;
        M2C_FIELD(this, s32 *, 0x118) = 0;
        M2C_FIELD(this, s32 *, 0x11c) = 0;
        M2C_FIELD(this, s32 *, 0x120) = 0;
        M2C_FIELD(this, s32 *, 0x124) = 0;
        M2C_FIELD(this, s32 *, 0x128) = 0;
        M2C_FIELD(this, s32 *, 0x12c) = 0;
        M2C_FIELD(this, s32 *, 0x130) = 0;
        M2C_FIELD(this, s32 *, 0x134) = 0;
    }
};

void *fn_800AC228(void) {
    u8 *base = lbl_802D3208;
    C800AC228 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800AC228(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
#pragma opt_propagation reset

} /* extern "C" */
