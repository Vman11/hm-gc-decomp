#include "common.h"
extern "C" {
typedef struct { u8 d[0x1c]; } E;
typedef struct { u8 pad[0x6c]; s32 n; E *a; } S;
s32 fn_800F6CD0(E *e, void *key);
#pragma push
#pragma peephole off
E *fn_8025EE5C(S *p, void *key) {
    E *a = p->a;
    s32 n = p->n;
    s32 i;
    for (i = 0; i < n; i++) {
        if (fn_800F6CD0((E *)((u32)a + i * sizeof(E)), key)) return &p->a[i];
    }
    return 0;
}
#pragma pop
}
