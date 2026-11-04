// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802967A8[];
#pragma opt_propagation off
extern u8 lbl_8035E060[8];
extern u8 lbl_8035E1C4[8];
extern u8 lbl_8035E1CC[8];
extern u8 lbl_8035E1D4[8];
extern u8 lbl_8035E1DC[8];
void * fn_8023F52C(void *p, const void *a0, const void *a1, const void *a2, s32 a3, s32 a4);
void fn_8023F214(void *p);

void fn_80057DDC(u8 *p) {
    char *str = lbl_802967A8;
    *(void * *)(p + 0x11C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 520), 1, 0);
    *(void * *)(p + 0x120) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 532), 1, 0);
    *(void * *)(p + 0x124) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 548), 1, 0);
    *(void * *)(p + 0x128) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, lbl_8035E1C4, 1, 0);
    *(void * *)(p + 0x12C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 572), 1, 0);
    *(void * *)(p + 0x130) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 584), 1, 0);
    *(void * *)(p + 0x134) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 600), 1, 0);
    *(void * *)(p + 0x138) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 612), 1, 0);
    *(void * *)(p + 0x13C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 636), 1, 0);
    *(void * *)(p + 0x140) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 664), 1, 0);
    *(void * *)(p + 0x144) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 688), 1, 0);
    *(void * *)(p + 0x148) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 712), 1, 0);
    *(void * *)(p + 0x14C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 728), 1, 0);
    *(void * *)(p + 0x150) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 748), 1, 0);
    *(void * *)(p + 0x154) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, lbl_8035E1CC, 1, 0);
    *(void * *)(p + 0x158) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 764), 1, 0);
    *(void * *)(p + 0x15C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 776), 1, 0);
    *(void * *)(p + 0x160) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 796), 1, 0);
    *(void * *)(p + 0x164) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 820), 1, 0);
    *(void * *)(p + 0x168) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 836), 1, 0);
    *(void * *)(p + 0x16C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 848), 1, 0);
    *(void * *)(p + 0x170) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, lbl_8035E1D4, 1, 0);
    *(void * *)(p + 0x174) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 868), 1, 0);
    *(void * *)(p + 0x178) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 880), 1, 0);
    *(void * *)(p + 0x17C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 912), 1, 0);
    *(void * *)(p + 0x180) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, lbl_8035E1DC, 1, 0);
    *(void * *)(p + 0x184) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 944), 1, 0);
    *(void * *)(p + 0x188) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 964), 1, 0);
    *(void * *)(p + 0x18C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 984), 1, 0);
    *(void * *)(p + 0x190) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 1008), 1, 0);
    *(void * *)(p + 0x194) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 1032), 1, 0);
    *(void * *)(p + 0x198) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 1048), 1, 0);
    *(void * *)(p + 0x19C) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 1064), 1, 0);
    *(void * *)(p + 0x1A0) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 1076), 1, 0);
    *(void * *)(p + 0x1A4) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 1088), 1, 0);
    *(void * *)(p + 0x1A8) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 1100), 1, 0);
    *(void * *)(p + 0x1AC) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 1112), 1, 0);
    *(void * *)(p + 0x1B0) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 1124), 1, 0);
    *(void * *)(p + 0x1B4) = fn_8023F52C(p, lbl_8035E060, lbl_8035E060, (str + 1136), 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
