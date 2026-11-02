// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct O { u32 a0; u8 p4[0x10]; u32 a14; u8 p18[0x22 - 0x18]; u16 h22; u8 p24[0x2A - 0x24]; u16 n; u32 buf[4]; u32 a3C[4]; u16 h4C; } O;
void fn_80167AF4(void *, u32, u16, u32 *, u32, u16, u32 *, u16);
void fn_8015F658(O *o, void *d) { u32 a = o->a0; fn_80167AF4(d, a, o->n, o->n <= 4 ? o->buf : (u32 *)o->buf[0], o->a14, o->h22, o->a3C, o->h4C); }

} /* extern "C" */
