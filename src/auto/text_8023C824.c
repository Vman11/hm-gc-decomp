/* Functions from 0x8023C824 to 0x8023C894, found by decomp-toolkit. */
#include "common.h"

extern char lbl_80366078[8];
extern char lbl_80366080[8];
extern char lbl_80366088[8];
extern char lbl_80366090[8];
extern char lbl_80366098[8];
extern char lbl_803660A0[8];
extern char lbl_802A8C98[];

char* fn_8023C824(void* arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        return lbl_80366078;
    case 3:
        return lbl_80366080;
    case 4:
        return lbl_80366088;
    case 5:
        return lbl_80366090;
    case 2:
        return lbl_80366098;
    case 1:
        return lbl_803660A0;
    default:
        return lbl_802A8C98;
    }
}
