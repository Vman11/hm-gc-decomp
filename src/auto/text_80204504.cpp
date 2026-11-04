// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct DVDFI { u8 pad[0x3c]; };
struct S0 { u8 pad[0xc]; u32 xc; };
struct HW { u8 pad[0x1c]; u32 x1c; u8 pad2[0x1a6 - 0x20]; u16 x1a6; u16 x1a8; u16 x1aa; u16 x1ac; u16 x1ae; u16 x1b0; };
struct S {
    S0 *x0; u32 x4; u32 x8; void *xc; void *x10; u32 x14; u32 x18; u32 x1c; u32 x20; u32 x24; u32 x28;
    u32 x2c; u32 x30; s32 x34; u32 x38; u32 x3c; u32 x40; u32 x44; u32 x48; void *x4c;
    u8 pad50[0x20];
    DVDFI fi[3];
    u32 x124; u16 x128; u16 x12a; u32 x12c; HW *x130;
};
extern u8 fn_802056DC[];
extern u8 fn_80205504[];
extern u8 fn_802056F8[];
s32 fn_800BD810(void *, void *, u32, u32, void *, s32);
s32 fn_800BFAA8(void *);
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(s32);
void fn_80202B48(u32);
void *memset(void *, int, u32);

static inline void Issue(S *s, void *buf, u32 len, u32 off, void *cb) {
    if (fn_800BFAA8(&s->fi[0]) == 0) {
        fn_800BD810(&s->fi[0], buf, len, off, cb, 2);
    } else if (fn_800BFAA8(&s->fi[1]) == 0) {
        fn_800BD810(&s->fi[1], buf, len, off, cb, 2);
    } else if (fn_800BFAA8(&s->fi[2]) == 0) {
        fn_800BD810(&s->fi[2], buf, len, off, cb, 2);
    }
}

void fn_80204504(S *s) {
    u32 half;
    u32 len, pos, a, n;
    half = s->x14 >> 1;
    s->x2c += s->x3c;
    if ((s->x128 & 0x100) && s->x2c == half) {
        u32 hi, lo;
        s32 lvl;
        s->x128 &= ~0x100;
        hi = ((s->x1c + s->x24) << 1) - 1;
        lo = s->x0->xc << 1;
        lvl = OSDisableInterrupts();
        s->x130->x1a6 = 0;
        s->x130->x1aa = lo >> 16;
        s->x130->x1ac = lo;
        s->x130->x1ae = hi >> 16;
        s->x130->x1b0 = hi;
        s->x130->x1c |= 0xe000;
        OSRestoreInterrupts(lvl);
        fn_80202B48(s->x8);
        return;
    }
    if (s->x2c != half) return;
    pos = s->x30;
    len = s->x38;
    if (s->x40 - pos > len) {
        if (s->x34 == 0) {
            Issue(s, s->xc, len, pos, fn_802056DC);
            s->x34 = 1;
        } else {
            Issue(s, s->x10, len, pos, fn_802056DC);
            s->x34 = 0;
        }
        s->x30 += s->x38;
        s->x2c = 0;
        return;
    }
    s->x44 = s->x40 - pos;
    a = (s->x44 + 0x1f) & ~0x1f;
    pos = a;
    if (s->x124 != 0) {
        s->x48 = s->x38 - s->x44;
        n = s->x38;
        a = s->x48 & ~0x1f;
        if (a < n) {
            if (s->x34 == 0) {
                Issue(s, s->xc, pos, s->x30, fn_80205504);
                s->x4c = s->xc;
            } else {
                Issue(s, s->x10, pos, s->x30, fn_80205504);
                s->x4c = s->x10;
            }
            s->x30 = a;
        } else {
            if (s->x34 == 0) {
                Issue(s, s->xc, pos, s->x30, fn_802056DC);
            } else {
                Issue(s, s->x10, n, s->x30, fn_802056DC);
            }
            s->x30 = 0;
        }
        s->x2c = 0;
        s->x124--;
        s->x12c = 1;
        s->x34 = 1 - s->x34;
        return;
    }
    if (s->x34 == 0) {
        memset(s->xc, 0, half);
        Issue(s, s->xc, a, s->x30, fn_802056F8);
    } else {
        memset(s->x10, 0, half);
        Issue(s, s->x10, a, s->x30, fn_802056F8);
    }
    s->x128 |= 0x100;
    s->x2c = 0;
}

} /* extern "C" */
