#include "common.h"
// NonMatching (wMO): SDIFF 0 / DIFF 22, register-only (permuter). const T* param keeps the n check above stmw; goto layout reproduces the LICM preheader after the b; (T *) casts stop CSE of the loop loads. QV=2.0p1
extern "C" {
typedef struct { char name[8]; void *val; } E;
typedef struct { E *arr; u32 n; } T;
s32 fn_800F6CD0(E *e, const char *s);
static inline u32 hash(const char *s) {
    u32 h;
    s32 shift;
    s32 i;
    h = s[0];
    shift = 7;
    for (i = 1; i < 8; i++) {
        if (s[i] == 0) break;
        h += s[i] << shift;
        shift = (shift + 7) & 31;
    }
    return h;
}
void *fn_800F8274(const T *t, const char *key) {
    u32 n;
    E *arr;
    u32 start;
    u32 off;
    u32 idx;
    if (t->n == 0) return 0;
    start = hash(key) % t->n;
    idx = start;
    goto L1;
L0:
    if (arr[idx].val == 0) return 0;
    idx++;
    if (idx >= n) idx = 0;
    if (idx == start) return 0;
    goto L2;
L1:
    arr = ((T *)t)->arr;
    n = ((T *)t)->n;
L2:
    off = idx * 12;
    if (fn_800F6CD0((E *)((u8 *)arr + off), key) == 0) goto L0;
    return t->arr[idx].val;
}
} /* extern "C" */
