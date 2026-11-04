// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029A8B8[];
#pragma opt_propagation off
extern u8 lbl_80361BD4[8];
extern char lbl_80361C3C[8];
extern char lbl_80361C44[8];
extern char lbl_80361C4C[8];
void *fn_8023F52C(void *p, void *a, void *b, char *name, s32 c, s32 d);
void *fn_8023F4A0(void *p, void *a, void *b, char *name, s32 c);
void fn_8023F214(void *p);

void fn_800A2AF0(u8 *p) {
    char *str = lbl_8029A8B8;
    *(void **)(p + 0x118) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 52), 1, 0);
    *(void **)(p + 0x11C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 68), 1, 0);
    *(void **)(p + 0x120) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 84), 1, 0);
    *(void **)(p + 0x124) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 104), 1, 0);
    *(void **)(p + 0x128) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 120), 1, 0);
    *(void **)(p + 0x12C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 132), 1, 0);
    *(void **)(p + 0x130) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 144), 1, 0);
    *(void **)(p + 0x134) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 160), 1, 0);
    *(void **)(p + 0x138) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 176), 1, 0);
    *(void **)(p + 0x13C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 192), 1, 0);
    *(void **)(p + 0x140) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 212), 1, 0);
    *(void **)(p + 0x144) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, lbl_80361C3C, 1, 0);
    *(void **)(p + 0x148) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 232), 1, 0);
    *(void **)(p + 0x14C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 252), 1, 0);
    *(void **)(p + 0x150) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 264), 1, 0);
    *(void **)(p + 0x154) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 276), 1, 0);
    *(void **)(p + 0x158) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 292), 1, 0);
    *(void **)(p + 0x15C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 304), 1, 0);
    *(void **)(p + 0x160) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 316), 1, 0);
    *(void **)(p + 0x164) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 328), 1, 0);
    *(void **)(p + 0x168) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 340), 1, 0);
    *(void **)(p + 0x16C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 360), 1, 0);
    *(void **)(p + 0x170) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 372), 1, 0);
    *(void **)(p + 0x174) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 384), 1, 0);
    *(void **)(p + 0x178) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 400), 1, 0);
    *(void **)(p + 0x17C) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 416), 1, 0);
    *(void **)(p + 0x180) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, lbl_80361C44, 1, 0);
    *(void **)(p + 0x184) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 432), 1, 0);
    *(void **)(p + 0x188) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 448), 1, 0);
    *(void **)(p + 0x18C) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, (str + 464), 1);
    *(void **)(p + 0x190) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, (str + 480), 1);
    *(void **)(p + 0x194) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, lbl_80361C4C, 1);
    *(void **)(p + 0x198) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, (str + 492), 1);
    *(void **)(p + 0x19C) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, (str + 508), 1);
    *(void **)(p + 0x1A0) = fn_8023F4A0(p, lbl_80361BD4, lbl_80361BD4, (str + 520), 1);
    *(void **)(p + 0x1A4) = fn_8023F52C(p, lbl_80361BD4, lbl_80361BD4, (str + 536), 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
