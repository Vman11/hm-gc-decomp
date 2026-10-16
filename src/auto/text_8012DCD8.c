/* Functions from 0x8012DCD8 to 0x8012DD1C, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 r, g, b, a;
} Color_8012DCE8;

extern s32 lbl_80363EE8;

void fn_8012DCD8(u8* arg0) {
    *(s32*)(arg0 + 8) &= 0xFFFFFFFB;
}

void fn_8012DCE8(u8* arg0, Color_8012DCE8* arg1) {
    u8 r = arg1->r;
    register u8 g = arg1->g;
    u8 a;
    u8 b;
    arg0[0x34] = r;
    b = arg1->b;
    arg0[0x35] = g;
    a = arg1->a;
    arg0[0x36] = b;
    arg0[0x37] = a;
    *(s32*)(arg0 + 8) |= lbl_80363EE8;
}

