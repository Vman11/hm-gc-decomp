#include "common.h"

extern "C" {

extern s32 lbl_8035ACE8;
void fn_800C1364(void);
u32 fn_800C2600(void);

struct S8015B06C { u8 pad[0x50]; u32 arr[2]; u32 count; u8 pad5c[4]; u32 cur; u32 next; u32 res; };

u32 fn_8015B06C(S8015B06C *p) {
    u32 r = fn_800C2600();
    if (r == p->res) {
        if (p->count == 1) {
            lbl_8035ACE8 = 2;
        }
        fn_800C1364();
        p->res++;
    }
    return p->arr[p->next];
}

} /* extern "C" */
