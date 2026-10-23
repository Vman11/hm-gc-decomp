// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N1C1 { u8 pad[0x6c]; u32 f6c; u8 pad70[0x134 - 0x70]; N1C1 *f134; N1C1 *f138; };
struct P1C1 { u8 pad[0x10]; N1C1 *f10; u8 pad14[0xc]; N1C1 *f20; };
s32 fn_801BDAD0(N1C1 *, f32, f32);
inline N1C1 *fn_801C1758(N1C1 *n) { return n->f138; }
inline s32 fn_801C1760(N1C1 *n) { return (n->f6c & 2) != 0; }
inline N1C1 *fn_801C176C(N1C1 *n) { return n->f134; }

u32 fn_801C12B0(P1C1 *p, N1C1 *n, f32 x, f32 y) {
    if (!n) return 0;
    if (fn_801C12B0(p, fn_801C176C(n), x, y) == 1) return 1;
    if (!fn_801C1760(n)) return 0;
    if (fn_801C12B0(p, fn_801C1758(n), x, y) == 1) return 1;
    if (n == p->f10 || fn_801BDAD0(n, x, y)) {
        p->f20 = n;
        return 1;
    }
    return 0;
}

} /* extern "C" */
