// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802D1F48[];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct C8024262C { u32 w[71]; C8024262C(); ~C8024262C(); };
struct D800A99DC : C8024262C {
    D800A99DC(u8 *b) {
        w[0] = (u32)(b + 0x2d8);
        w[21] = 4;
        w[11] = 4;
        w[26] = 3;
        w[23] = 0;
        w[32] = 0;
        w[31] = 0;
        w[33] = 0;
        w[34] = 0;
        w[35] = 0;
        w[37] = 0;
        w[22] = (u32)(b + 0x228);
        w[10] = (u32)(b + 0x238);
        w[12] = (u32)(b + 0x268);
        w[27] = (u32)(b + 0x21c);
        w[30] = 0;
        w[49] = 0;
        w[50] = 0;
        w[51] = 0;
        w[61] = 0;
        w[63] = 0;
        w[67] = 0;
        w[70] = 0;
    }
};
extern "C" D800A99DC *fn_800A99DC(void) {
    u8 *b = lbl_802D1F48;
    D800A99DC *r;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    r = new D800A99DC(b);
    fn_800F7E98();
    if (!r) fn_800604C4(-4, 0, 0, 0);
    return r;
}
