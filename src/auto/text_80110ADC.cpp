// fn_80110ADC: init 12 resource pools then allocate (NonMatching draft: only the 7 stack-param lwz are interleaved with the mr copies; target issues them after).
#include "common.h"

struct T { u32 n; u32 f4; u32 type; u32 fc; void *a16; void *a20; void *a24; u32 x1c; };
struct O { u8 pad0[8]; u8 x8[0x20]; s32 x28; u8 pad2c[4]; u8 *x30; u8 pad34[4]; T t[13]; u8 pad[0x1e8 - 0x38 - 13 * 0x20]; s32 x1e8; };
extern "C" {
extern s32 lbl_8035AAD8;
extern s32 lbl_8035AADC;
extern u8 lbl_80363A20[0x8];
void fn_80110E5C(O *);
void fn_80207280(s32, O *, u8 *);
void fn_8011131C(T *);
void fn_8010CAF4(void *, void *);
}
static inline void Init(T *t, u32 n, u32 type) {
    t->n = 0; t->f4 = 4; t->type = 0; t->fc = 0; t->a16 = 0; t->a20 = 0; t->a24 = 0; t->x1c = 0;
    t->n = n; t->f4 = n; t->type = type;
}
extern "C" s32 fn_80110ADC(O *o, s32 a, u32 n0, u32 n1, u32 n2, u32 n3, u32 n4, u32 n5, u32 n6, u32 n7, u32 n8, u32 n9, u32 n10, u32 n11, u8 *p) {
    u32 i;
    lbl_8035AADC = lbl_8035AAD8;
    if (o->x1e8 != 0) fn_80110E5C(o);
    o->x28 = a;
    Init(&o->t[0], n0, 0);
    Init(&o->t[1], n1, 1);
    Init(&o->t[2], n2, 2);
    Init(&o->t[3], n3, 3);
    Init(&o->t[4], n4, 4);
    Init(&o->t[5], n5, 5);
    Init(&o->t[6], n6, 6);
    Init(&o->t[7], n7, 7);
    Init(&o->t[8], n8, 8);
    Init(&o->t[9], n9, 9);
    Init(&o->t[10], n10, 10);
    Init(&o->t[11], n11, 11);
    for (i = 0; i < 13; i++) fn_8011131C(&o->t[i]);
    if (p) {
        o->x30 = p;
        fn_8010CAF4(o->x8, o->x30 + 8);
    }
    o->x1e8 = 1;
    fn_80207280(a, o, lbl_80363A20);
    return 0;
}
