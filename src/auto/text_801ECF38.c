// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 pad[8]; u8 *q; u8 pad0c[0x20]; s32 r; u8 f30[8]; char name[4]; } S801ECF38;
s32 fn_801EF6AC(S801ECF38 *p);
s32 fn_800F9398(void *q, void *a);
s32 fn_800F9788(void *q, char *n, void *a);
s32 fn_801ECF38(S801ECF38 *p) {
    s32 r;
    u8 *q;
    if (fn_801EF6AC(p) == 0) return 0;
    q = p->q;
    if (p->name == 0 || *p->name == 0) r = fn_800F9398(q, p->f30);
    else r = fn_800F9788(q + 0x18, p->name, p->f30);
    p->r = r;
    return 1;
}
