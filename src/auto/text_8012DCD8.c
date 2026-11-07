/* Functions from 0x8012DCD8 to 0x8012DD1C, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 r, g, b, a;
} Color_8012DCE8;

static inline void CopyColor(Color_8012DCE8 *d, const Color_8012DCE8 *s) {
    u8 x, y;
    x = s->r;
    y = s->g;
    d->r = x;
    x = s->b;
    d->g = y;
    y = s->a;
    d->b = x;
    d->a = y;
}

extern s32 lbl_80363EE8;

void fn_8012DCD8(u8* arg0) {
    *(s32*)(arg0 + 8) &= 0xFFFFFFFB;
}

void fn_8012DCE8(u8* arg0, Color_8012DCE8* arg1) {
    CopyColor((Color_8012DCE8*)(arg0 + 0x34), arg1);
    *(s32*)(arg0 + 8) |= lbl_80363EE8;
}
