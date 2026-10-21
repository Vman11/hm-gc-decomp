#include "common.h"

#pragma use_lmw_stmw on

extern "C" {

struct N80254990 { u8 pad[0x58]; u16 itemCount; u8 pad5a[0x12]; u16 childCount; };
N80254990 *fn_80180E7C(N80254990 *, u32);
void *fn_80180E9C(N80254990 *, u32);
void fn_80254640(void *, void *, void *);

inline u32 fn_80253E30(N80254990 *n) {
    return n->childCount;
}

inline u32 fn_80254C88(N80254990 *n) {
    return n->itemCount;
}

void fn_80254990(void *a, N80254990 *n, void *b) {
    u32 i;
    u32 count;

    count = fn_80253E30(n);
    for (i = 0; i < count; i++) {
        fn_80254990(a, fn_80180E7C(n, i), b);
    }
    count = fn_80254C88(n);
    for (i = 0; i < count; i++) {
        fn_80254640(a, fn_80180E9C(n, i), b);
    }
}

} /* extern "C" */
