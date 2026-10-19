// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801094CC { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void *m(void *, void *); };
extern void *lbl_8035AAB4;
V_801094CC *fn_8010B990(void *, void *);
void *fn_80112AD4(void *, void *);
void *fn_8010D0BC(void *, void *);

void fn_801094CC(u8 *p) {
    u32 t[1];
    void *a;
    void *b;
    *(V_801094CC **)(p + 0x10) = fn_8010B990(lbl_8035AAB4, t);
    a = fn_80112AD4(*(void **)(*(u8 **)(p + 0x10) + 0x30), *(void **)(p + 0x14));
    b = fn_80112AD4(*(void **)(*(u8 **)(p + 0x10) + 0x30), *(void **)(p + 0x18));
    *(void **)(p + 0xC) = fn_8010D0BC((*(V_801094CC **)(p + 0x10))->m(a, *(void **)(p + 0x1C)), b);
    *(s32 *)(p + 0x20) = 1;
}

} /* extern "C" */
