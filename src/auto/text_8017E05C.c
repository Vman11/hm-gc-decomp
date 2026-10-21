// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

u8 *fn_801988DC(void *, void *, void *);
void fn_8017DBDC(void *, void *, void *);
extern u32 lbl_8035ADD0;
typedef struct { u8 *f0; u8 pad[48]; } E52;

void fn_8017E05C(u8 *a, u8 *b) {
    u8 *n;
    E52 *e, *end;
    u8 *r, *x;
    for (n = *(u8 **)(b + 576); n != NULL; n = *(u8 **)(n + 8)) {
        e = *(E52 **)(a + 24);
        end = e + *(s32 *)(a + 20);
        for (; e < end; e++) {
            r = fn_801988DC(e, b, n);
            if (r != NULL) {
                x = e->f0;
                if (lbl_8035ADD0 != *(u32 *)(x + 12)) {
                    *(u32 *)(x + 12) = lbl_8035ADD0;
                    *(u8 **)(x + 16) = NULL;
                }
                *(u8 **)(r + 8) = *(u8 **)(x + 16);
                *(u8 **)(x + 16) = r;
                fn_8017DBDC(e->f0, b, r);
            }
        }
    }
}
