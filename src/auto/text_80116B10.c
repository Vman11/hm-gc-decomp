/* Functions from 0x80116B10 to 0x80116B64, found by decomp-toolkit. */
#include "common.h"

typedef struct H { u8 p[0x10]; s32 off; } H;
typedef struct S { H *h; u8 p[0x10]; s32 a; s32 b; s32 c; } S;

s32 fn_80116B10(S *s, s32 arg1, u8 **arg2) {
    H *h = s->h;
    if ((arg1 >= s->a && arg1 < s->b) || arg1 >= s->c) {
        return 5;
    }
    *arg2 = (u8 *)h + (h->off + arg1);
    return 0;
}

s32 fn_80116B58(u8* arg0, s32 arg1) {
    *(s32*)(arg0 + 0x5C) = arg1;
    return 0;
}
