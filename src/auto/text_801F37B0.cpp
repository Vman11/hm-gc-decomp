// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct E801F37B0 { u8 p[0x44]; };
struct F801F37B0 { u8 p[0x80]; };
typedef void (E801F37B0::*PMF801F37B0)(F801F37B0 *, u32);
extern PMF801F37B0 lbl_80330CC8;
struct S801F37B0 { u8 p[0x20]; u32 f20; u8 q[0xc]; u32 f30, f34; E801F37B0 *f38; u32 f3c; F801F37B0 *f40; };
void fn_801F37B0(S801F37B0 *s) {
    if (s->f38 == 0 || s->f40 == 0) return;
    u32 n = s->f34 * s->f30;
    for (u32 i = 0; i < n; i++) (s->f38[i].*lbl_80330CC8)(&s->f40[i], s->f20);
}
}
