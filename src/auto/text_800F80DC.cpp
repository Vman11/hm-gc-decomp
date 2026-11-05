#include "common.h"

extern "C" {

typedef struct E_80DC { u32 a; u32 b; u32 v; } E_80DC;
typedef struct TH_80DC { u32 a, b; E_80DC it[1]; } TH_80DC;
typedef struct H_80DC { E_80DC *tab; u32 n; } H_80DC;
int fn_800F6CD0(E_80DC *, s8 *);
u32 fn_800F80DC(H_80DC *h, s8 *key, u32 *out) {
    int sh;
    u32 hash;
    int i;
    u32 n, start, k;
    s8 c;
    E_80DC *tab;
    hash = key[0];
    sh = 7;
    for (i = 1; i < 8; i++) {
        c = key[i];
        if (!c) break;
        hash += c << sh;
        sh = (sh + 7) & 31;
    }
    n = h->n;
    start = hash % n;
    k = start;
    while (tab = h->tab, !fn_800F6CD0(&tab[k], key)) {
        if (((TH_80DC *)tab)->it[k].a == 0) return 0;
        if (++k >= n) k = 0;
        if (k == start) return 0;
    }
    if (out) *out = k;
    return h->tab[k].v;
}

} /* extern "C" */
