// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801184C4 { virtual void p0(); virtual void m(void *); };
extern "C" void *memcpy(void *, const void *, u32);

static inline u8 *pop_801184C4(u8 *p) {
    u8 *n = *(u8 **)(p + 16);
    if (n != NULL) {
        u8 *h = *(u8 **)n;
        *(u8 **)(p + 16) = h;
        if (h != NULL) {
            *(u8 **)(*(u8 **)(p + 16) + 4) = 0;
        } else {
            *(u8 **)(p + 20) = 0;
        }
    }
    return n;
}

void fn_801184C4(u8 *p, void *a) {
    if (*(u32 *)(p + 32) & 1) {
        if (*(u8 **)(p + 16) != NULL) {
            u8 *n = pop_801184C4(p);
            memcpy(*(void **)(n + 8), a, 28);
            u8 *t = *(u8 **)(p + 12);
            *(u8 **)(n + 4) = t;
            if (t != NULL) {
                **(u8 ***)(p + 12) = n;
            } else {
                *(u8 **)(p + 8) = n;
            }
            *(u8 **)(p + 12) = n;
            *(u8 **)n = 0;
            (*(u32 *)(p + 36))++;
        }
    }
    if (*(V_801184C4 **)(p + 4) != NULL) {
        (*(V_801184C4 **)(p + 4))->m(a);
    }
}

} /* extern "C" */
