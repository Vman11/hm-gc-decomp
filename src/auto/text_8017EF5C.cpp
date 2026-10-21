#include "common.h"

extern "C" {

extern u32 lbl_802A1258[];
extern u32 lbl_8035ADC8;
void *memset(void *, s32, u32);
void __dla__FPv(void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct S8017EF5C { u32 n; u32 f4; u8 *a; u8 *b; u32 f10; };

static inline u32 NextSize8017EF5C(u32 size) {
    u32 i;
    for (i = 0; i < 18; i++) {
        if (size < lbl_802A1258[i]) {
            return lbl_802A1258[i];
        }
    }
    return size;
}

void fn_8017EF5C(S8017EF5C *p, u32 size) {
    if (p->a != 0) {
        if (p->b != 0) {
            __dla__FPv(p->b);
        }
        if (p->a != 0) {
            __dla__FPv(p->a);
        }
        p->n = 0;
        p->f4 = 0;
        p->a = 0;
        p->b = 0;
        p->f10 = 0;
    }
    p->n = NextSize8017EF5C(size);
    if (lbl_8035ADC8 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035ADC8);
    p->a = new u8[p->n << 3];
    fn_800F7E98();
    if (p->a == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    memset(p->a, 0, p->n << 3);
    if (lbl_8035ADC8 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035ADC8);
    p->b = new u8[p->n << 3];
    fn_800F7E98();
    if (p->b == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    memset(p->b, 0, p->n << 3);
}

} /* extern "C" */
