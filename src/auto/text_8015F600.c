// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct {
    s32 f0; u8 pad4[0x10]; s32 f14; u8 pad18[0xA]; u16 f22; u8 pad24[4]; u16 f28; u16 len; u8 buf[4];
    u8 pad30[4]; s32 f34; u8 pad38[0x18]; s32 f50;
} SP8015F;
static inline u8 *spdata(SP8015F *p) { return p->len <= 4 ? p->buf : *(u8 **)p->buf; }
void fn_80170044(s32 a, s32 b, u32 c, s32 d, u8 *e);
void fn_8015F600(SP8015F *p) { s32 a = p->f34; u32 f = p->len; if (f) f = 1; fn_80170044(a, p->f14, p->f28, f, spdata(p)); }
