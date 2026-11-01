// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_800A226C(void *);
extern double lbl_8035DCA8;
struct S5 { unsigned char pad[4]; float f4; unsigned char pad2[44]; unsigned short f34; };
struct S4 { unsigned char pad[16]; struct S5 *f10; };
struct PA { unsigned char pad[208]; struct S4 *fd0; unsigned char pad2[532-212]; float *f214; unsigned char pad3[616-536]; float f268; };
void fn_80051A40(struct PA *p) { struct S5 *s = p->fd0->f10; float r = (float)s->f34 / s->f4; float *k = p->f214; p->f268 = *k * (float)(r * lbl_8035DCA8); fn_800A226C(p); }
