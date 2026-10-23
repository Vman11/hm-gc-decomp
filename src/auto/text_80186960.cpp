// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct H80186960 {
    u8 pad[24];
    u32 f24;
    u32 f28;
} H80186960;
typedef struct S80186960 {
    u32 *f0;
    u32 f4;
    u32 f8;
    u32 f12;
    u32 f16;
} S80186960;
extern H80186960 *lbl_8035AE20;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *memset(void *, s32, u32);

static inline void setal(H80186960 *h, u32 a) {
    if (h->f24 >= a) {
        h->f28 = h->f24;
    } else {
        h->f28 = a;
    }
}
void fn_80186960(S80186960 *p, u32 a, u32 b, u32 c) {
    u32 n;
    if (p->f0) {
        if (p->f0) delete[] p->f0;
        p->f0 = 0;
        p->f4 = 0;
        p->f8 = 0;
        p->f12 = 0;
        p->f16 = 0;
    }
    p->f4 = a;
    p->f8 = b;
    p->f12 = c;
    n = (c + (p->f8 + c)) * (c + (p->f4 + c));
    setal(lbl_8035AE20, 4);
    if (!lbl_8035AE20) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AE20);
    p->f0 = (u32 *)new u8[n * 4];
    fn_800F7E98();
    if (!p->f0) fn_800604C4(-4, 0, 0, 0);
    lbl_8035AE20->f28 = lbl_8035AE20->f24;
    memset(p->f0, 0, n * 4);
}

} /* extern "C" */
