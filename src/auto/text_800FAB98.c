/* Functions from 0x800FAB98 to 0x800FADA8, found by decomp-toolkit. */
#include "common.h"

extern char lbl_8029CB28[];
char* fn_800FAB98(void* arg0, s32 arg1) {
    char* s = lbl_8029CB28;
    char* msg;
    switch (arg1) {
    case 0: msg = s + 0x0; break;
    case 1: msg = s + 0x10; break;
    case 2: msg = s + 0x1c; break;
    case 3: msg = s + 0x30; break;
    case 4: msg = s + 0x40; break;
    case 5: msg = s + 0x50; break;
    case 6: msg = s + 0x60; break;
    case 7: msg = s + 0x74; break;
    case 8: msg = s + 0x8c; break;
    case 9: msg = s + 0xa4; break;
    case 10: msg = s + 0xbc; break;
    case 11: msg = s + 0xcc; break;
    case 12: msg = s + 0xe0; break;
    case 13: msg = s + 0xf0; break;
    case 14: msg = s + 0x108; break;
    case 15: msg = s + 0x11c; break;
    case 16: msg = s + 0x12c; break;
    case 17: msg = s + 0x140; break;
    case 18: msg = s + 0x150; break;
    case 19: msg = s + 0x16c; break;
    case 20: msg = s + 0x188; break;
    case 21: msg = s + 0x198; break;
    case 22: msg = s + 0x1a8; break;
    case 23: msg = s + 0x1b8; break;
    case 24: msg = s + 0x1c8; break;
    case 25: msg = s + 0x1dc; break;
    case 26: msg = s + 0x1f4; break;
    case 27: msg = s + 0x208; break;
    case 28: msg = s + 0x220; break;
    case 29: msg = s + 0x234; break;
    case 30: msg = s + 0x248; break;
    case 31: msg = s + 0x25c; break;
    case 32: msg = s + 0x27c; break;
    case 33: msg = s + 0x28c; break;
    case 34: msg = s + 0x29c; break;
    case 35: msg = s + 0x2ac; break;
    case 36: msg = s + 0x2bc; break;
    case 37: msg = s + 0x2cc; break;
    case 38: msg = s + 0x2dc; break;
    case 39: msg = s + 0x2e8; break;
    default: msg = s + 0x2fc; break;
    }
    return msg;
}

void fn_800FAD08(void *arg0, void *arg1) {
    s32 i;
    s8 *src = (s8 *)arg0 + 0x14;
    s8 *dst = (s8 *)arg1;
    for (i = 0; i < 8; i++) {
        dst[i] = src[i];
        if (src[i] == 0) {
            break;
        }
    }
}
