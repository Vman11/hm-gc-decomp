// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct E80219AA4 {
    void *data;
    u8 pad[16];
} E80219AA4;
typedef struct S80219AA4 {
    u32 x0;
    E80219AA4 *arr;
    u32 x8;
    u32 count;
    u32 x16;
    void *vt;
} S80219AA4;
extern void *lbl_802F0188[];
void __dla__FPv(void *p);
void __dl__FPv(void *p);

static inline void Free80219AA4(S80219AA4 *p) {
    u32 i;
    if (p->arr != 0) {
        for (i = 0; i < p->count; i++) {
            __dla__FPv(p->arr[i].data);
        }
        __dla__FPv(p->arr);
    }
    p->x0 = 0;
    p->arr = 0;
    p->count = 0;
    p->x16 = 0;
}

S80219AA4 *fn_80219AA4(S80219AA4 *p, s16 f) {
    if (p != 0) {
        p->vt = lbl_802F0188;
        Free80219AA4(p);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
