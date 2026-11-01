// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 d[80]; } E80171438;
typedef struct { u8 pad[0x14]; u32 cap; u8 pad18[0x18]; E80171438 *base; u8 pad34[4]; u32 used; } S80171438;
extern char lbl_802A0ED8[];
char *strcpy(char *d, const char *s);
void fn_80060568(char *s, s32 a, s32 b, s32 c);
E80171438 *fn_80171438(S80171438 *p, u32 n) {
    E80171438 *r;
    if (p->used + n > p->cap) {
        char buf[128];
        strcpy(buf, lbl_802A0ED8);
        fn_80060568(buf, 0, 0, 0);
    }
    r = &p->base[p->used];
    p->used += n;
    return r;
}
