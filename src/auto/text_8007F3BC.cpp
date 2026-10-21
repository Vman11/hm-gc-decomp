// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802C3780[];
extern u8 lbl_803592E8[8];
extern f32 lbl_8035FA24;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C8007F3BC : C8024262C {
    u8 pad[0x124];
    C8007F3BC(u8 *b) {
        *(void **)this = b + 0x36C;
        M2C_FIELD(this, s32 *, 0x54) = 7;
        M2C_FIELD(this, s32 *, 0x2C) = 7;
        M2C_FIELD(this, s32 *, 0x68) = 1;
        M2C_FIELD(this, s32 *, 0x5C) = 2;
        M2C_FIELD(this, s32 *, 0x80) = 0;
        M2C_FIELD(this, s32 *, 0x7C) = 0;
        M2C_FIELD(this, s32 *, 0x84) = 5;
        M2C_FIELD(this, s32 *, 0x88) = 1;
        M2C_FIELD(this, s32 *, 0x8C) = 0;
        M2C_FIELD(this, s32 *, 0x94) = 0;
        M2C_FIELD(this, void **, 0x58) = b + 0x28C;
        M2C_FIELD(this, void **, 0x28) = b + 0x2A8;
        M2C_FIELD(this, void **, 0x30) = b + 0x2FC;
        M2C_FIELD(this, void **, 0x6C) = lbl_803592E8;
        M2C_FIELD(this, void **, 0x78) = b + 0x26C;
        M2C_FIELD(this, s32 *, 0xC4) = 0;
        M2C_FIELD(this, s32 *, 0xC8) = 0;
        M2C_FIELD(this, void **, 0xCC) = b + 0x21C;
        M2C_FIELD(this, void **, 0xF4) = b + 0x258;
        M2C_FIELD(this, s32 *, 0xFC) = 0;
        M2C_FIELD(this, s32 *, 0x10C) = 0;
        M2C_FIELD(this, f32 *, 0x118) = lbl_8035FA24;
        M2C_FIELD(this, f32 *, 0x11C) = lbl_8035FA24;
        M2C_FIELD(this, f32 *, 0x120) = lbl_8035FA24;
    }
};

void *fn_8007F3BC(void) {
    u8 *b = lbl_802C3780;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8007F3BC(b);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
