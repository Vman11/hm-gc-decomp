// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } T12_80108B94;
extern void *lbl_8035AA78;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nw__FUl(u32);

void fn_80108B94(u8 **p, void *b, T12_80108B94 *c, void *d) {
    u8 *n;
    if (lbl_8035AA78 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AA78);
    n = (u8 *)__nw__FUl(24);
    fn_800F7E98();
    if (n == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    *(void **)(n + 20) = d;
    *(void **)(n + 4) = b;
    *(T12_80108B94 *)(n + 8) = *c;
    *(u8 **)n = 0;
    if (*p != 0) {
        u8 *t = *p;
        while (*(u8 **)t != 0) {
            t = *(u8 **)t;
        }
        *(u8 **)t = n;
    } else {
        *p = n;
    }
}

} /* extern "C" */
