// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802D4D90[];
extern char lbl_803594C0[4];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct C8024262C { u32 w[70]; C8024262C(); ~C8024262C(); };
struct D800AEC40 : C8024262C {
    D800AEC40(u8 *b) {
        w[0] = (u32)(b + 0x2e4);
        w[21] = 4;
        w[11] = 4;
        w[26] = 3;
        w[23] = 0;
        w[32] = 1;
        w[31] = 0;
        w[33] = 0;
        w[34] = 0;
        w[35] = 0;
        w[37] = 1;
        w[22] = (u32)(b + 0x23c);
        w[10] = (u32)(b + 0x24c);
        w[12] = (u32)(b + 0x27c);
        w[27] = (u32)(b + 0x230);
        w[30] = 0;
        w[49] = (u32)lbl_803594C0;
        w[50] = 0;
        w[51] = 0;
        w[61] = 0;
        w[63] = 0;
        w[67] = (u32)(b + 0x21c);
    }
};
extern "C" D800AEC40 *fn_800AEC40(void) {
    u8 *b = lbl_802D4D90;
    D800AEC40 *r;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    r = new D800AEC40(b);
    fn_800F7E98();
    if (!r) fn_800604C4(-4, 0, 0, 0);
    return r;
}
