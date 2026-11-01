// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct {
    s32 f0; u8 pad4[0x10]; s32 f14; u8 pad18[0xA]; u16 f22; u8 pad24[4]; u16 f28; u16 len; u8 buf[4];
    u8 pad30[4]; s32 f34; u8 pad38[4]; u8 f3c[0x10]; u16 f4c; u8 pad4e[2]; s32 f50;
} SP8015F;
static inline u8 *spdata(SP8015F *p) { return p->len <= 4 ? p->buf : *(u8 **)p->buf; }
void fn_8016A32C(s32 a, s32 b, u32 len, u8 *d, s32 e, u32 f, u8 *g, u32 h);
void fn_8015F708(SP8015F *p, s32 a) { s32 b = p->f0; fn_8016A32C(a, b, p->len, spdata(p), p->f14, p->f22, p->f3c, p->f4c); }
