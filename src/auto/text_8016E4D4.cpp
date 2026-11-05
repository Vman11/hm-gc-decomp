#include "common.h"

// NonMatching: instructions identical (SDIFF 0); register allocation differs (target j in r31 above params).
struct C80175748 {
    C80175748();
    ~C80175748();
    u8 pad0[0x1C];
    u32 f1C;
    u8 pad20[0x10];
};
struct Ent { void *p; u32 a, b, c; };
struct Src { s32 x; u32 n; Ent e[8]; u32 p88; void *p8C; u32 p90; };
struct G { s32 a, b, c, d; };
struct Self { u16 fl; u16 n; C80175748 *arr; Src *src; u32 c; u16 h10; u16 h12; u16 h14, h16, h18; };
extern "C" {
extern u32 lbl_8035AD34;
extern void *lbl_8035AD30;
extern u16 lbl_80364710;
extern G lbl_8032ED08;
extern C80175748 lbl_8032ED28[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80156110(s32);
void fn_801756D8(C80175748 *);
void fn_80175634(C80175748 *, u32);
void fn_801753B8(C80175748 *, void **, void *, u16);
void fn_80175570(C80175748 *, C80175748 *);

static inline void *pick(void *p, void **arr, u32 &j, u32 cnt) {
    if (p == 0) return 0;
    if (arr != 0) {
        if (j >= cnt) return p;
        if (arr[j] == 0) { j++; return p; }
        return arr[j++];
    }
    return p;
}

void fn_8016E4D4(Self *self, void *unused, Src *src, s32 x, void **arr, u32 cnt) {
    u32 i;
    u32 j;
    C80175748 *t;
    if (x == 0) x = src->x;
    lbl_8035AD34 = 0;
    self->n = 0;
    self->h10 = x;
    if (src->p8C) self->src = src;
    self->c = src->p90;
    lbl_8032ED08.d = 0;
    if (x) {
        fn_80156110(x);
        self->h14 = lbl_8032ED08.a;
        self->h16 = lbl_8032ED08.b;
        self->h18 = lbl_8032ED08.c;
    }
    t = lbl_8032ED28;
    j = 0;
    for (i = 0; i < src->n; t++, i++) {
        void **pp = &src->e[i].p;
        void *p = pick(*pp, arr, j, cnt);
        fn_801756D8(t);
        fn_80175634(t, i);
        fn_801753B8(t, pp, p, self->n);
        self->n++;
    }
    {
        u32 n = src->n;
        lbl_8035AD34 = n;
        if (n == 0) return;
        self->h12 = n;
    }
    if (lbl_8035AD30 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AD30);
    self->arr = new C80175748[lbl_8035AD34];
    fn_800F7E98();
    if (self->arr == 0) fn_800604C4(-4, 0, 0, 0);
    for (j = 0; j < lbl_8035AD34; j++) fn_80175570(&self->arr[j], &lbl_8032ED28[j]);
    {
        u32 n = lbl_8035AD34;
        u32 m;
        for (m = 0; m < n; m++) {
            if (self->arr[m].f1C & 0x10) { self->fl |= lbl_80364710; break; }
        }
    }
}
}
