// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct {
    s32 f0; u8 pad4[0x10]; s32 f14; u8 pad18[0xA]; u16 f22; u8 pad24[4]; u16 f28; u16 len; u8 buf[4];
    u8 pad30[4]; s32 f34; u8 pad38[0x18]; s32 f50;
} SP8015F;
static inline u8 *spdata(SP8015F *p) { return p->len <= 4 ? p->buf : *(u8 **)p->buf; }
void fn_801699D8(s32 a, s32 b, u32 len, u8 *d, s32 e, s32 f, u32 g);
void fn_8015F7B4(SP8015F *p, s32 a) { s32 b = p->f0; fn_801699D8(a, b, p->len, spdata(p), p->f50, p->f14, p->f22); }
