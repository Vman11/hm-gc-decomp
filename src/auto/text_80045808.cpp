// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
extern "C" {
#pragma opt_propagation off
extern void *lbl_8035B530;
extern u8 lbl_802B3FA0[];
extern u8 lbl_80359228;
extern u8 lbl_8035922C;
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct C8024262C { u32 w[73]; C8024262C(); ~C8024262C(); };
struct D80045808 : C8024262C {
    D80045808(u8 *b) {
        w[0] = (u32)(b + 888);
        w[21] = 8;
        w[11] = 8;
        w[26] = 1;
        w[23] = 0;
        w[32] = 1;
        w[31] = 0;
        w[33] = 0;
        w[34] = 7;
        w[35] = 0;
        w[37] = 0;
        w[22] = (u32)(b + 632);
        w[10] = (u32)(b + 664);
        w[12] = (u32)(b + 760);
        w[27] = (u32)&lbl_8035922C;
        w[30] = 0;
        w[49] = (u32)&lbl_80359228;
        w[50] = 0;
        w[51] = 0;
        w[61] = (u32)(b + 540);
        w[63] = 0;
        w[67] = 0;
        w[70] = 0;
        w[71] = 0;
        w[72] = 0;
    }
};
extern "C" D80045808 *fn_80045808(void) {
    u8 *b = lbl_802B3FA0;
    D80045808 *r;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    r = new D80045808(b);
    fn_800F7E98();
    if (!r) fn_800604C4(-4, 0, 0, 0);
    return r;
}
extern "C" {

} /* extern "C" */
