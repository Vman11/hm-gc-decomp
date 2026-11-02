// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct N { u8 pad[0x62]; u16 leaf; u8 pad64[0x6C - 0x64]; u16 childCount; };
N *fn_80180E7C(N *, u32);
void *fn_80180E8C(N *, u32);
inline u32 fn_80253E30(N *n) { return n->childCount; }
inline u32 fn_80253E38(N *n) { return n->leaf; }

void *fn_80253B70(void *__restrict ctx, N *__restrict n) {
    u32 i;
    void *r;
    if (fn_80253E38(n)) return fn_80180E8C(n, 0);
    for (i = 0; i < fn_80253E30(n); i++) {
        if ((r = fn_80253B70(ctx, fn_80180E7C(n, i))) != 0) return r;
    }
    return 0;
}

} /* extern "C" */
