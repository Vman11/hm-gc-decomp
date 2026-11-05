#include "common.h"

extern "C" {

typedef struct { u16 n; u8 pad[0x12]; void *o; u16 *tbl; } S80160CD4;
u16 fn_80147CD8(void *o);
s32 fn_80160CD4(S80160CD4 *p, s32 b, u32 *out) {
    u32 i;
    u16 *t;
    u32 key;
    key = fn_80147CD8(p->o);
    t = p->tbl;
    for (i = 0; i < p->n; t++, i++) {
        if (key == *t) {
            *out = i;
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
