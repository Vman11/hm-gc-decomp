#include "common.h"

extern "C" {
extern s64 lbl_8035B158;
void fn_802022C8(void *o);
struct S801FE3F0 { u8 pad[0x14]; void *obj; s32 bit; };
void fn_801FE3F0(S801FE3F0 *p) {
    void *o = p->obj;
    p->obj = 0;
    fn_802022C8(o);
    lbl_8035B158 &= ~(1 << p->bit);
}
}
