// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802D55C8[];
extern char lbl_803594C8[4];
extern char lbl_803594CC[4];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct C8024262C { u32 w[70]; C8024262C(); ~C8024262C(); };
struct D800AFA0C : C8024262C {
    D800AFA0C(u8 *b) {
        w[0] = (u32)(b + 0x340);
        w[21] = 7;
        w[11] = 7;
        w[26] = 1;
        w[23] = 3;
        w[32] = 1;
        w[31] = 0;
        w[33] = 0;
        w[34] = 1;
        w[35] = 0;
        w[37] = 0;
        w[22] = (u32)(b + 0x260);
        w[10] = (u32)(b + 0x27c);
        w[12] = (u32)(b + 0x2d0);
        w[27] = (u32)lbl_803594CC;
        w[30] = (u32)(b + 0x230);
        w[49] = (u32)lbl_803594C8;
        w[50] = 0;
        w[51] = 0;
        w[61] = (u32)(b + 0x21c);
        w[63] = 0;
        w[67] = 0;
    }
};
extern "C" D800AFA0C *fn_800AFA0C(void) {
    u8 *b = lbl_802D55C8;
    D800AFA0C *r;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    r = new D800AFA0C(b);
    fn_800F7E98();
    if (!r) fn_800604C4(-4, 0, 0, 0);
    return r;
}
