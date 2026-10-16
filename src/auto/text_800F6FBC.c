/* Functions from 0x800F6FBC to 0x800F710C, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E05C8[];
extern u8 lbl_802E06C8[];
extern u8 lbl_802E07C8[];
void fn_800F6FBC(char *src, char *dst) {
    u32 i;
    char c = src[0];
    dst[0] = 0;
    for (i = 0; i < 8; i++) {
        c = src[i];
        dst[i] = c;
        if (c == 0) {
            return;
        }
    }
}

void fn_800F7044(char *s) {
    int c;
    u32 i;
    for (i = 0; i < 8 && *s > 0; i++, s++) {
        c = *s;
        if (lbl_802E05C8[(u8)c] & 0x80) {
            *s = (c == -1) ? -1 : lbl_802E06C8[(u8)c];
        }
    }
}

void fn_800F70A8(char *s) {
    int c;
    u32 i;
    for (i = 0; i < 8 && *s > 0; i++, s++) {
        c = *s;
        if (lbl_802E05C8[(u8)c] & 0x40) {
            *s = (c == -1) ? -1 : lbl_802E07C8[(u8)c];
        }
    }
}

