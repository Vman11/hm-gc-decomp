// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 pad[8]; void *q; u8 pad0c[0x1c]; void *r; u8 f2c[8]; char name[4]; } S801E38BC;
s32 fn_801EF6AC(S801E38BC *p);
void *fn_800F9398(void *q, void *a);
void *fn_800F9788(void *q, char *n, void *a);
s32 fn_801E38BC(S801E38BC *p) {
    void *r;
    u8 *q;
    if (fn_801EF6AC(p) == 0) return 0;
    if (p->r == 0) {
        q = p->q;
        if (p->name == 0 || *p->name == 0) r = fn_800F9398(q, p->f2c);
        else r = fn_800F9788(q + 0x18, p->name, p->f2c);
        p->r = r;
    }
    return 1;
}
