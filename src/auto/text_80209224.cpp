#include "common.h"

extern "C" {
struct Q80209224 { u8 pad[4]; };
struct O80209224 : Q80209224 { virtual void v0(); virtual void v1(); virtual void v2(s32 e); };
struct S80209224 { u8 pad[4]; u8 f4[4]; u8 f8[0x40]; u8 f48[4]; };
void fn_80208BB8(void *p, s32 a);
void fn_800BD810(void *p, s32 b, s32 c, s32 d, s32 z, s32 two);
void fn_80208870(void *p, O80209224 *o, s32 f, s32 g, s32 h);
void fn_80209224(S80209224 *p, s32 a, s32 b, s32 c, s32 d, O80209224 *o, s32 e, s32 f, s32 g, s32 h) {
    fn_80208BB8(p->f4, a);
    fn_800BD810(p->f8, b, c, d, 0, 2);
    o->v2(e);
    fn_80208870(p->f48, o, f, g, h);
}
}
