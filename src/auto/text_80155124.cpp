#include "common.h"

extern "C" {

struct O;
struct H { u8 p[1340]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void cb(void *, O *, int); };
struct O { u16 fl; u8 p2[22]; u16 f18; u16 f1A; u16 f1C; u16 f1E; virtual void v0(); virtual void stop(); u8 l[64 - 36]; u32 f40; u32 f44; };
void fn_801482DC(O *, void *);
void fn_80160F40(void *, O *, int);
void fn_80155124(O *__restrict self, void *__restrict a, u32 b, u16 c, u16 d, void *__restrict e, H *__restrict h, u16 k, u32 l) {
    O *o = self;
    if (o->f1A & 1) o->stop();
    o->f44 = b;
    o->f1C = c;
    o->f1E = d;
    fn_801482DC(o, e);
    o->f18 = k;
    o->f1A = 1;
    o->f40 = l;
    if (o->fl & 4) fn_80160F40((u8 *)o + 36, o, 0);
    u16 f = o->f18;
    if (!(f & 1)) h->cb(a, o, (f & 0x80) != 0);
}

} /* extern "C" */
