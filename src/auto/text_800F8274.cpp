// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

// NonMatching (SDIFF 12): target hoists arr/n loads into a loop preheader after the b, n check lwz above stmw, final add+lwz vs addi+lwzx.
extern "C" {

typedef struct { char name[8]; void *val; } E;
typedef struct { E *arr; u32 n; } T;
s32 fn_800F6CD0(E *e, const char *s);
#pragma opt_common_subs off
void *fn_800F8274(T *t, const char *key) {
    u32 h;
    s32 shift;
    s32 i;
    u32 start;
    u32 idx;
    E *arr;
    u32 off;
    u32 n;
    n = t->n;
    if (n == 0) return 0;
    h = key[0];
    shift = 7;
    for (i = 1; i < 8; i++) {
        if (key[i] == 0) break;
        h += key[i] << shift;
        shift = (shift + 7) & 31;
    }
    start = h % n;
    idx = start;
    arr = t->arr;
    n = t->n;
    while (!fn_800F6CD0((E *)((u8 *)arr + (off = idx * 12)), key)) {
        if (((E *)((u8 *)arr + off))->val == 0) return 0;
        idx++;
        if (idx >= n) idx = 0;
        if (idx == start) return 0;
    }
    return ((E *)((u8 *)t->arr + off))->val;
}
#pragma opt_common_subs reset

} /* extern "C" */
