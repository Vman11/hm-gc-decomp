#include "common.h"

extern "C" {

extern s32 lbl_8035AB08;
u32 strlen(char *);

u32 fn_80116A70(u32 *s, u32 *out) {
    u32 n;
    u32 w;
    s32 *q;

    if (*s > 0xff) {
        n = strlen((char *)s);
        if (lbl_8035AB08 != 0) {
            w = *(u32 *)((u8 *)s + (n & ~3));
            n -= n & 3;
            while ((w & 0xff000000) != 0) {
                w <<= 8;
                n++;
            }
        }
    }
    else {
        q = (s32 *)s;
        n = 0;
        while (*q != 0) {
            q++;
            n++;
        }
    }
    *out = n;
    return 0;
}

} /* extern "C" */
