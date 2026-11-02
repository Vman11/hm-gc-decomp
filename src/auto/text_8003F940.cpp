// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
extern "C" {
#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802B0498[];
extern u8 lbl_80359208;
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct C80040F68 { u32 w[96]; C80040F68(); ~C80040F68(); };
struct D8003F940 : C80040F68 {
    D8003F940(u8 *b) {
        w[0] = (u32)(b + 1068);
        w[21] = 10;
        w[11] = 9;
        w[26] = 4;
        w[23] = 0;
        w[32] = 2;
        w[31] = 0;
        w[33] = 0;
        w[34] = 4;
        w[35] = 0;
        w[37] = 0;
        w[22] = (u32)(b + 624);
        w[10] = (u32)(b + 664);
        w[12] = (u32)(b + 772);
        w[27] = (u32)(b + 608);
        w[30] = 0;
        w[49] = (u32)&lbl_80359208;
        w[50] = 0;
        w[51] = 0;
        w[61] = (u32)(b + 540);
        w[63] = 0;
        w[67] = 0;
        w[94] = 0;
        w[95] = 0;
    }
};
extern "C" D8003F940 *fn_8003F940(void) {
    u8 *b = lbl_802B0498;
    D8003F940 *r;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    r = new D8003F940(b);
    fn_800F7E98();
    if (!r) fn_800604C4(-4, 0, 0, 0);
    return r;
}
extern "C" {

} /* extern "C" */
