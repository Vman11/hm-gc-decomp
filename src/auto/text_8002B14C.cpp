// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B80 { u8 pad[0x80]; };
struct C52 : B80 { virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9(); virtual void c10(); virtual void c11(); virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15(); virtual void c16(); virtual void c17(); virtual void c18(); virtual void c19(); virtual void c20(s32 on); };
struct F52 { u32 f0; };
struct G52 { u8 pad[0xc]; s32 fc; };
struct P52 { u8 pad[0xe8]; F52 *fe8; u8 pec[0x188 - 0xec]; C52 *f188; u8 p18c[4]; C52 *f190; u8 p194[0x1b4 - 0x194]; C52 *f1b4; u8 p1b8[0x1d8 - 0x1b8]; C52 *f1d8, *f1dc, *f1e0, *f1e4; u8 p1e8[0x244 - 0x1e8]; G52 *f244; };
extern u32 lbl_8035B9A0;
void fn_8002B14C(P52 *p, s32 on) {
    if (p->f244->fc != 2) on = 0;
    p->f1b4->c20(on);
    p->f1d8->c20(on);
    p->f188->c20(on);
    p->f190->c20(on);
    p->f1dc->c20(on);
    p->f1e0->c20(on);
    p->f1e4->c20(on);
    if (on != 0) p->fe8->f0 |= lbl_8035B9A0;
    else p->fe8->f0 &= ~0x800;
}

} /* extern "C" */
