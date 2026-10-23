// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80297908[];
extern char lbl_8035ED68[0x4];
extern char lbl_8035F310[0x6];
extern char lbl_8035F318[0x8];
s32 fn_80248EAC(char *, char *, char *);
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_80071CE8(u8 *);
#pragma opt_propagation off
void fn_800706D8(u8 *p) {
    char *s = lbl_80297908;
    *(s32 *)(p + 320) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1312, 1, 0);
    *(s32 *)(p + 324) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1324, 1, 0);
    *(s32 *)(p + 328) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1336, 1, 0);
    *(s32 *)(p + 344) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1348, 1, 0);
    *(s32 *)(p + 352) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1364, 0, 0);
    *(s32 *)(p + 364) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1380, 1, 0);
    *(s32 *)(p + 368) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1396, 1, 0);
    *(s32 *)(p + 408) = fn_8023F52C(p, lbl_8035ED68, lbl_8035F310, s + 1412, 1, 0);
    *(s32 *)(p + 412) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1436, 1, 0);
    *(s32 *)(p + 416) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1448, 1, 0);
    *(s32 *)(p + 420) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1460, 1, 0);
    *(s32 *)(p + 488) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1472, 1, 0);
    *(s32 *)(p + 500) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1488, 1, 0);
    *(s32 *)(p + 504) = fn_80248EAC(lbl_8035F318, lbl_8035ED68, s + 1508);
    *(s32 *)(p + 516) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1520, 1, 0);
    *(s32 *)(p + 520) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1536, 1, 0);
    *(s32 *)(p + 536) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1556, 1, 0);
    *(s32 *)(p + 540) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1568, 1, 0);
    *(s32 *)(p + 544) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1580, 1, 0);
    *(s32 *)(p + 568) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1596, 1, 0);
    *(s32 *)(p + 572) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1616, 1, 0);
    *(s32 *)(p + 576) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1632, 0, 0);
    *(s32 *)(p + 608) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1652, 1, 0);
    *(s32 *)(p + 612) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1676, 1, 0);
    *(s32 *)(p + 632) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1696, 1, 0);
    *(s32 *)(p + 636) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1720, 1, 0);
    *(s32 *)(p + 640) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1744, 1, 0);
    *(s32 *)(p + 644) = fn_8023F52C(p, lbl_8035ED68, lbl_8035ED68, s + 1772, 1, 0);
    fn_80071CE8(p);
}

} /* extern "C" */
