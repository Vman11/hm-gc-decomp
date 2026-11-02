// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802D2720[];
extern char lbl_803594A8[4];
extern char lbl_803594AC[4];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct C8024262C { u32 w[71]; C8024262C(); ~C8024262C(); };
struct D800AAF08 : C8024262C {
    D800AAF08(u8 *b) {
        w[0] = (u32)(b + 0x2ec);
        w[21] = 6;
        w[11] = 6;
        w[26] = 1;
        w[23] = 1;
        w[32] = 1;
        w[31] = 0;
        w[33] = 0;
        w[34] = 0;
        w[35] = 0;
        w[37] = 0;
        w[22] = (u32)(b + 0x22c);
        w[10] = (u32)(b + 0x244);
        w[12] = (u32)(b + 0x28c);
        w[27] = (u32)lbl_803594AC;
        w[30] = (u32)(b + 0x21c);
        w[49] = (u32)lbl_803594A8;
        w[50] = 0;
        w[51] = 0;
        w[61] = 0;
        w[63] = 0;
        w[67] = 0;
        w[70] = 0;
    }
};
extern "C" D800AAF08 *fn_800AAF08(void) {
    u8 *b = lbl_802D2720;
    D800AAF08 *r;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    r = new D800AAF08(b);
    fn_800F7E98();
    if (!r) fn_800604C4(-4, 0, 0, 0);
    return r;
}
