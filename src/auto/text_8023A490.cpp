#include "common.h"
extern "C" {
typedef struct { u8 pad[0x1c]; s32 sz; } R;
typedef struct { u8 pad[8]; s32 id; u8 pad2[8]; u8 *base; u8 pad3[4]; void *tbl; } S;
R *fn_800F85F0(void *t, s32 id);
u8 *fn_8023A490(S *p, s32 i) {
    s32 sz = fn_800F85F0(p->tbl, p->id)->sz;
    return p->base + i * sz;
}
}
