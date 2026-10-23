// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
/* The statics stand for lbl_802B8100 (0x52C, in jt_802B8100; also used by text_8004E1C8) and the vtable lbl_802B862C (0x54):
   fn_8004E7C0 addresses them through the section base at offsets 540, 552, 728, 748, 804, 972, 1324. Contents are filler. */
static u32 d000[135] = { 1 };
static u32 d21c[3] = { 1 };
static u32 d228[44] = { 1 };
static u32 d2d8[5] = { 1 };
static u32 d2ec[14] = { 1 };
static u32 d324[42] = { 1 };
static u32 d3cc[88] = { 1 };
static u32 vt52c[21] = { 1 };
extern u32 lbl_8035B530;
extern char lbl_80359250[8];
extern char lbl_80359258[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
} /* extern "C" */
struct C800A3008 { u32 *vt; u8 pad[268]; C800A3008(); };
struct C8004E7C0 : C800A3008 {
    u8 pad2[532 - 272];
    C8004E7C0() {
        vt = vt52c;
        *(s32 *)((u8 *)this + 84) = 14;
        *(s32 *)((u8 *)this + 44) = 14;
        *(s32 *)((u8 *)this + 104) = 5;
        *(s32 *)((u8 *)this + 92) = 0;
        *(s32 *)((u8 *)this + 128) = 2;
        *(s32 *)((u8 *)this + 124) = 1;
        *(s32 *)((u8 *)this + 132) = 0;
        *(s32 *)((u8 *)this + 136) = 14;
        *(s32 *)((u8 *)this + 140) = 1;
        *(s32 *)((u8 *)this + 148) = 0;
        *(u32 **)((u8 *)this + 88) = d2ec;
        *(u32 **)((u8 *)this + 40) = d324;
        *(u32 **)((u8 *)this + 48) = d3cc;
        *(u32 **)((u8 *)this + 108) = d2d8;
        *(s32 *)((u8 *)this + 120) = 0;
        *(char **)((u8 *)this + 196) = lbl_80359250;
        *(u32 **)((u8 *)this + 200) = d21c;
        *(s32 *)((u8 *)this + 204) = 0;
        *(u32 **)((u8 *)this + 244) = d228;
        *(char **)((u8 *)this + 252) = lbl_80359258;
        *(s32 *)((u8 *)this + 268) = 0;
    }
};
extern "C" {
C800A3008 *fn_8004E7C0(void) {
    C800A3008 *p;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    p = new C8004E7C0;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
