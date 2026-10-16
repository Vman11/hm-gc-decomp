/* Functions from 0x80226F20 to 0x8022705C, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    char unk_0x0[0x254];
    s32 *unk_0x254[10];
} Unk80226F20;

extern s32 lbl_80365C40;
void fn_80226F20(void *arg0) {
    s32 i;
    for (i = 0; i < 10; i++) {
        s32 *p = ((s32 **)((char *)arg0 + 0x254))[i];
        if (p) p[2] |= lbl_80365C40;
    }
}

void fn_80226FC8(void *arg0) {
    s32 i;
    for (i = 0; i < 10; i++) {
        s32 *p = ((s32 **)((char *)arg0 + 0x254))[i];
        if (p) p[2] &= ~2;
    }
}

