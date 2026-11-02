// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 p[0x70]; volatile u32 flags; s32 f74; } E;
typedef struct { u8 p[0x277c]; u8 list[4]; } O;
E *fn_800F8274(void *, void *);
s32 fn_80115450(O *o, void *key) {
    E *e = fn_800F8274(o->list, key);
    if (e != 0 && e->f74 != 0) {
        if (e->flags & 2) return 7;
        e->flags |= 4;
        e->flags &= ~8;
        e->flags &= ~2;
        e->flags &= ~0x10;
        return 0;
    }
    return 5;
}
