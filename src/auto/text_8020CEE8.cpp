/* Functions from 0x8020CEE8 to 0x8020CFE4, found by decomp-toolkit. */
#include "common.h"

extern "C" {

static inline u32 count_entries(void *arg) {
    u32 i;
    for (i = 0; i < 8; i++) {
        if (M2C_FIELD(arg, u32 *, 0x11c + i * 0x14) == 0) return i;
    }
    return i;
}

typedef struct {
    u32 a;
    u32 size;
    u32 x;
    u32 ptr;
    u32 y;
} E8020CEE8;

typedef struct {
    u8 pad[268];
    u32 f268;
    u32 f272;
    u32 f276;
    u8 pad2[4];
    E8020CEE8 ent[8];
} B8020CEE8;

static inline u32 Count8020CEE8(B8020CEE8 *b) {
    u32 k;
    for (k = 0; k < 8; k++) {
        if (b->ent[k].a == 0) {
            return k;
        }
    }
    return 8;
}

u32 fn_8020CEE8(void *self, B8020CEE8 *b) {
    u32 total;
    u32 p;
    u32 first;
    u32 i;
    first = 0;
    total = b->f268 + b->f276 + 96;
    for (i = 0; i < Count8020CEE8(b); i++) {
        total += b->ent[i].size;
        p = b->ent[i].ptr;
        if (first == 0 && p != 0) {
            first = p;
        }
    }
    return total + first;
}

} /* extern "C" */
