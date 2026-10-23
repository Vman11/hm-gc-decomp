// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802C2B38[];
extern u8 lbl_802AF9E8[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C80249F58 {
    C80249F58();
    ~C80249F58();
};

struct C8007BDF4 : C80249F58 {
    u8 pad[124];
    C8007BDF4(u8 *base) {
        *(void **)this = lbl_802AF9E8;
        *(void **)this = base + 1040;
        M2C_FIELD(this, s32 *, 0x54) = 4;
        M2C_FIELD(this, s32 *, 0x2c) = 4;
        M2C_FIELD(this, s32 *, 0x68) = 29;
        M2C_FIELD(this, s32 *, 0x5c) = 2;
        M2C_FIELD(this, void **, 0x58) = base + 688;
        M2C_FIELD(this, void **, 0x28) = base + 704;
        M2C_FIELD(this, void **, 0x30) = base + 752;
        M2C_FIELD(this, void **, 0x6c) = base + 572;
        M2C_FIELD(this, void **, 0x78) = base + 540;
    }
};

void *fn_8007BDF4(void) {
    u8 *base = lbl_802C2B38;
    C8007BDF4 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C8007BDF4(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
#pragma opt_propagation reset

} /* extern "C" */
