// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct S8 {
    u8 pad[8];
} S8;

typedef struct S228 {
    u8 pad[152];
    u32 flags;
    u8 pad2[228 - 156];
} S228;

s32 fn_800F6CD0(S8 *, void *);

S228 *fn_8022ECB4(void *p, void *arg) {
    u32 i;
    u32 j;
    u32 n;
    S228 *e;

    for (i = 0; i < M2C_FIELD(p, u32 *, 12); i++) {
        if (fn_800F6CD0(&M2C_FIELD(p, S8 **, 8)[i], arg) != 0) {
            break;
        }
    }
    if (i == M2C_FIELD(p, u32 *, 12)) {
        return NULL;
    }
    n = M2C_FIELD(p, u32 **, 4)[i];
    for (j = 0; j < n; j++) {
        e = M2C_FIELD(p, S228 ***, 16)[i];
        if ((e[j].flags & 1) == 0) {
            return &e[j];
        }
    }
    return NULL;
}
