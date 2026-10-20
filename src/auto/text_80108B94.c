// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_80108B94;
extern void *lbl_8035AA78;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nw__FUl(u32);

void fn_80108B94(u8 **p, void *b, T12_80108B94 *c, void *d) {
    u8 *n;
    if (lbl_8035AA78 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AA78);
    n = __nw__FUl(24);
    fn_800F7E98();
    if (n == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    *(void **)(n + 20) = d;
    *(void **)(n + 4) = b;
    *(T12_80108B94 *)(n + 8) = *c;
    *(u8 **)n = NULL;
    if (*p != NULL) {
        u8 *t = *p;
        while (*(u8 **)t != NULL) {
            t = *(u8 **)t;
        }
        *(u8 **)t = n;
    } else {
        *p = n;
    }
}
