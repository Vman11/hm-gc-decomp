// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802CF1A0[];
extern char lbl_803593C8[4];
extern char lbl_803593CC[4];
extern char lbl_803593D0[4];
extern char lbl_803593D8[4];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct C8024262C { u32 w[70]; C8024262C(); ~C8024262C(); };
struct D8009F64C : C8024262C {
    D8009F64C(u8 *b) {
        w[0] = (u32)(b + 0x248);
        w[21] = 2;
        w[11] = 2;
        w[26] = 1;
        w[23] = 0;
        w[32] = 1;
        w[31] = 0;
        w[33] = 0;
        w[34] = 1;
        w[35] = 0;
        w[37] = 0;
        w[22] = (u32)lbl_803593D0;
        w[10] = (u32)(b + 0x230);
        w[12] = (u32)lbl_803593D8;
        w[27] = (u32)lbl_803593CC;
        w[30] = 0;
        w[49] = (u32)lbl_803593C8;
        w[50] = 0;
        w[51] = 0;
        w[61] = (u32)(b + 0x21c);
        w[63] = 0;
        w[67] = 0;
    }
};
extern "C" D8009F64C *fn_8009F64C(void) {
    u8 *b = lbl_802CF1A0;
    D8009F64C *r;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    r = new D8009F64C(b);
    fn_800F7E98();
    if (!r) fn_800604C4(-4, 0, 0, 0);
    return r;
}
