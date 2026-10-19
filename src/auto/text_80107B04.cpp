// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80107B04 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
extern u8 lbl_803286D0[];
extern u32 lbl_80363900;
void fn_80104870(void *);
void fn_80104BCC(void *, s32);

void fn_80107B04(u8 *p, u8 *q, void *c) {
    fn_80104870(q);
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x0))(*(void **)(p + 0x14), *(void **)(q + 0x14));
    if (c != NULL) {
        (*(void (**)(void *, void *))(lbl_803286D0 + 0xA0))(*(void **)(p + 0x14), c);
    }
    fn_80104BCC(p, 43);
    *(u32 *)(p + 0x20) |= lbl_80363900;
    if (*(void **)p == NULL) {
        *(u32 *)(p + 0x20) &= ~1;
        (*(void (**)(void *, void *))lbl_803286D0)(*(void **)(p + 0x10), *(void **)(p + 0x14));
    } else {
        (*(V_80107B04 **)p)->m();
        (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(*(void **)(p + 0x10), *(void **)(p + 0x14), *(void **)(*(u8 **)p + 0x14));
    }
}

} /* extern "C" */
