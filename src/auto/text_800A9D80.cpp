// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802D2290[];
extern u8 lbl_802D22C0[];
extern u8 lbl_80359478[0x8];
extern u8 lbl_80359480[0x8];
extern u8 lbl_80359488[0x8];
extern u8 lbl_80359490[0x8];
extern u32 lbl_8035B530;
void __ct__9C8024262CFv(void);
u32 __nw__FUl(int);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);

extern "C" {
}


extern "C" u32 * fn_800A9D80(void) {
    u32 *puVar1;

    if (lbl_8035B530 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B530));
    puVar1 = (u32 *)__nw__FUl((int)(0x120));
    if (puVar1 != (u32 *)0x0) {
        __ct__9C8024262CFv();
        *puVar1 = (u32)lbl_802D22C0;
        puVar1[0x15] = 2;
        puVar1[0xb] = 2;
        puVar1[0x1a] = 2;
        puVar1[0x17] = 0;
        puVar1[0x20] = 2;
        puVar1[0x1f] = 0;
        puVar1[0x21] = 0;
        puVar1[0x22] = 0;
        puVar1[0x23] = 0;
        puVar1[0x25] = 0;
        puVar1[0x16] = (u32)lbl_80359488;
        puVar1[10] = (u32)lbl_802D2290;
        puVar1[0xc] = (u32)lbl_80359490;
        puVar1[0x1b] = (u32)lbl_80359480;
        puVar1[0x1e] = 0;
        puVar1[0x31] = (u32)lbl_80359478;
        puVar1[0x32] = 0;
        puVar1[0x33] = 0;
        puVar1[0x3d] = 0;
        puVar1[0x3f] = 0;
        puVar1[0x43] = 0;
        puVar1[0x46] = 0;
        puVar1[0x47] = 0;
    }
    fn_800F7E98();
    if (puVar1 == (u32 *)0x0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return puVar1;
}

} /* extern "C" */
