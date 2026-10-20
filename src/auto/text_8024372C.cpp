// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F6E88(void *, void *);
void fn_800F6FBC(char *, void *);
void fn_80243440(void *, void *, s32);
void fn_80242C70(void *, void *);
void fn_80242D38(void *, void *, void *);

s32 fn_8024372C(s32 *p, s32 a, void *s, char ***pp) {
    char b[8];
    char c[8];
    s32 *q;
    p[7] = a;
    fn_800F6E88(p + 1, s);
    q = p;
    if (***pp == 0) {
        (*pp)++;
    }
    while (***pp != 0) {
        fn_800F6FBC(**pp, b);
        if (p[0] != 0) {
            fn_80243440(q, b, 8);
            q = (s32 *)q[9];
        }
        (*pp)++;
        if (***pp == 0) {
            fn_80242C70(q, b);
        }
        while (***pp != 0) {
            fn_800F6FBC(**pp, c);
            fn_80242D38(q, b, c);
            (*pp)++;
        }
        (*pp)++;
    }
    p[0] = 1;
    (*pp)++;
    p[10] = 0;
    return 0;
}

} /* extern "C" */
