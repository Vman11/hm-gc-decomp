// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad[16];
    void * id;
    u8 pad2[40];
} Entry801DF7E0;

typedef struct {
    u8 pad[172];
    s32 count;
    Entry801DF7E0 *entries;
} Q801DF7E0;

typedef struct {
    u8 pad[32];
    void *key;
    u8 pad2[4];
    s32 index;
    void * id;
} P801DF7E0;

Q801DF7E0 *fn_8019556C(void *);

s32 fn_801DF7E0(P801DF7E0 *p) {
    Q801DF7E0 *q;
    u32 i;
    u32 start;
    u32 end;
    q = fn_8019556C(p->key);
    if (q == 0) {
        return 0;
    }
    if (p->index >= 0) {
        start = p->index;
        end = p->index;
    } else {
        start = 0;
        end = q->count - 1;
    }
    for (i = start; i <= end; i++) {
        if (q->entries[i].id == p->id) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
