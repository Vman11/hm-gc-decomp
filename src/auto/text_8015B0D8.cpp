#include "common.h"

extern "C" {

void fn_800C23E8(void);
void fn_800C2518(u32);
u32 fn_800C2600(void);

struct S8015B0D8 { u8 pad[0x50]; u32 arr[2]; u32 count; u8 pad5c[4]; u32 cur; u32 next; u32 res; };

void fn_8015B0D8(S8015B0D8 *p) {
    p->cur = p->next;
    fn_800C2518(p->arr[p->cur]);
    p->res = fn_800C2600();
    fn_800C23E8();
    if (++p->next >= p->count) {
        p->next = 0;
    }
}

} /* extern "C" */
