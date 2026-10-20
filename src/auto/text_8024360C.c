// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_802439BC(void *);
void fn_800FB064(void *, void *);
s32 fn_800FADA8(void *);
void fn_800FB000(void *, s32);
void fn_80243440(void *, void *, s32);
void fn_80242C70(void *, void *);
void fn_80242D38(void *, void *, void *);
void fn_800FAEA0(void *);

s32 fn_8024360C(s32 *p, s32 a, void *s) {
    char b[8];
    char c[8];

    s32 n;
    s32 m;
    s32 *q;
    s32 i;
    s32 j;
    if (p[0] != 0) {
        fn_802439BC(p);
    }
    p[0] = 1;
    p[7] = a;
    fn_800FB064(s, p + 1);
    n = fn_800FADA8(s);
    q = p;
    for (i = 0; i < n; i++) {
        fn_800FB000(s, 58);
        fn_800FB064(s, b);
        m = fn_800FADA8(s);
        if (i != 0) {
            fn_80243440(q, b, m);
            q = (s32 *)q[9];
        }
        if (m == 0) {
            fn_80242C70(q, b);
        } else {
            for (j = 0; j < m; j++) {
                fn_800FB064(s, c);
                fn_80242D38(q, b, c);
            }
        }
        fn_800FAEA0(s);
    }
    fn_800FAEA0(s);
    p[10] = 1;
    return 0;
}
