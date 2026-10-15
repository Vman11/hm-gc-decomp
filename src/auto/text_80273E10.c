/* Functions from 0x80273E10 to 0x80293ED8, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035B854;
s32 fn_80273EAC(void) {
    return lbl_8035B854;
}

extern s32 lbl_8035B850;
s32 fn_80273EB4(void) {
    return lbl_8035B850;
}

extern s32 lbl_80359F08;
s32 fn_80273EBC(void) {
    return lbl_80359F08;
}

extern s32 lbl_8035B884;
void fn_802749D4(s32 arg0) {
    lbl_8035B884 = arg0;
}

void fn_80274E0C(void) {

}

void fn_80275C64(void);
void fn_80275F98(void);
void fn_80276058(void *);
void fn_8027564C(void *, int);
void fn_802756B8(void *, int, int, int);
extern unsigned int lbl_802F3848[2];
void fn_802767E0(void);
void fn_802767C0(void)
{
    fn_80275C64();
}

void *fn_80276930(u32 *arg0)
{
    if (arg0 == 0) {
        lbl_802F3848[0] = 0;
        lbl_802F3848[1] = 0;
    } else {
        lbl_802F3848[0] = arg0[0];
        lbl_802F3848[1] = arg0[1];
    }
    return (void *)fn_802767E0;
}

extern u8 lbl_80357FC0[];
void fn_800EB764(void *, s32);
void fn_802769B8(s32 arg0) {
    fn_800EB764(lbl_80357FC0, arg0);
}

u8 *fn_802769E4(void) {
    return lbl_80357FC0;
}

#pragma push
#pragma opt_unroll_loops off
void fn_80276A90(s8 *dst, s16 *src, u32 len) {
    u32 n;
    for (n = len >> 1; n != 0; n--) {
        *dst++ = *src++ >> 8;
    }
}
#pragma pop
s32 fn_802753F0(void);
void fn_80276B84(void* arg0);
extern s32 lbl_802F3864;
extern s32 lbl_803580C0;
extern s32 lbl_802F3868;
extern u32 lbl_802F3870;
extern u32 lbl_802F3874[];
extern s32 lbl_802F385C;
void fn_80283E90(s32, void *);
void fn_80276FA0(s32 arg0, s32 arg1) {
    lbl_802F3864 = arg0;
    lbl_803580C0 = arg1;
}

void fn_80276FB4(s32 arg0) {
    lbl_802F3868 = arg0;
}

void fn_80276FD8(u32 count, u32 *src) {
    u32 i;
    if (count > 8) {
        count = 8;
    }
    lbl_802F3870 = count;
    for (i = 0; i < count; i++) {
        lbl_802F3874[i] = src[i];
    }
}

void fn_80277114(u8 *arg0) {
    fn_80283E90(lbl_802F385C, arg0 + 0xFC);
}

s32 fn_802753F0(void);
void fn_80276B84(void* arg0);
s32 fn_802771B8(s32* arg0, s32 arg1) {
    s32 v = arg0[-1];
    if (v == arg1) {
        return 0;
    }
    return ~v;
}

void fn_802771D4(u8* arg0, s32 arg1) {
    u8* p = arg0 - 0x34C;
    if (*(s32*)(p + 0x2F8) != 0) {
        fn_80276B84(p);
    }
    *(s32*)(p + 0x348) = arg1;
}

extern u8 lbl_802F3898[];
u8 *fn_8027A710(void) {
    return lbl_802F3898;
}

