#include "common.h"
extern "C" {
extern u8 *lbl_8035B460;
extern u8 *lbl_8035B7E4;
u8 *fn_801AA960(u32, void *, void *);
void fn_801C2368(u8 *, u8 *, s32);

void fn_80272F28(void *p, void *a, void *b) {
    u8 *obj;
    u8 *found;

    obj = *(u8 **)(lbl_8035B7E4 + 4);
    found = fn_801AA960(*(u32 *)(*(u8 **)(lbl_8035B460 + 0xc) + 0x33b0), a, b);
    if (found != 0 && *(u8 **)(obj + 4) != found) {
        fn_801C2368(obj, found, 1);
    }
}
}
