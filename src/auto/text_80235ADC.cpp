// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u32 x0;
    u32 counts[10];
    char names[10][8];
    u32 n;
    void ***table;
} S_80235ADC;

s32 fn_800F6CD0(void *, void *);

void *fn_80235ADC(S_80235ADC *p, void *name) {
    u32 i;
    u32 j;

    for (i = 0; i < p->n; i++) {
        if (fn_800F6CD0(p->names[i], name) != 0) break;
    }
    if (i == p->n) return NULL;
    for (j = 0; j < p->counts[i]; j++) {
        if (*(s32 *)((u8 *)p->table[i][j] + 4) == 0) return p->table[i][j];
    }
    return NULL;
}

} /* extern "C" */
