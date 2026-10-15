/* Functions from 0x8012DCD8 to 0x8012DD1C, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 r, g, b, a;
} Color_8012DCE8;

extern s32 lbl_80363EE8;

void fn_8012DCD8(u8* arg0) {
    *(s32*)(arg0 + 8) &= 0xFFFFFFFB;
}
