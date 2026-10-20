// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 pad[80]; u8 *x; } T_8019B380;
void fn_801951C4(void *, s32);

static inline void unlink_8019B380(u8 *p, u32 *q) {
    u8 *n = ((u8 **)(p + 80))[*(s32 *)(p + 76)];
    u8 **pp = (u8 **)((u32 *)p + *(s32 *)(p + 76) + 20);
    while (n != NULL) {
        if (*(u32 **)(*(u8 **)(n + 24) + 12) == q) {
            *pp = *(u8 **)(n + 28);
            *q &= ~(32 << *(s32 *)(p + 76));
            break;
        }
        pp = (u8 **)(n + 28);
        n = *(u8 **)(n + 28);
    }
    {
        u8 **pp2 = (u8 **)(q + *(s32 *)(p + 76) + 16);
        u8 *m = *pp2;
        while (m != NULL) {
            if (*(u8 **)m == p) {
                break;
            }
            pp2 = (u8 **)(m + 20);
            m = *(u8 **)(m + 20);
        }
        if (m != NULL) {
            u8 *k;
            *pp2 = *(u8 **)(m + 20);
            k = *(u8 **)(m + 24);
            while (k != NULL) {
                u8 *nx = *(u8 **)(k + 16);
                fn_801951C4(k, *(s32 *)(p + 76));
                *(u8 **)(k + 16) = *(u8 **)(p + 20);
                *(u8 **)(p + 20) = k;
                k = nx;
            }
            *(u8 **)m = NULL;
            *(u8 **)(m + 20) = *(u8 **)(p + 8);
            *(u8 **)(p + 8) = m;
        }
    }
}

void fn_8019B380(u8 *p, u32 *q) {
    *(s32 *)(p + 76) = 1;
    unlink_8019B380(p, q);
}
