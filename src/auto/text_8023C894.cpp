#include "common.h"

extern "C" {

extern u32 lbl_80366078, lbl_80366080, lbl_80366088, lbl_80366090, lbl_80366098, lbl_803660A0;
s32 stricmp(void *, void *);

s32 fn_8023C894(void *p, void *s) {
    if (stricmp(s, &lbl_80366078) == 0) {
        return 0;
    }
    if (stricmp(s, &lbl_80366080) == 0) {
        return 3;
    }
    if (stricmp(s, &lbl_80366088) == 0) {
        return 4;
    }
    if (stricmp(s, &lbl_80366090) == 0) {
        return 5;
    }
    if (stricmp(s, &lbl_80366098) == 0) {
        return 2;
    }
    if (stricmp(s, &lbl_803660A0) == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
