// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Arg { void *p; u32 a, b, c, d; } Arg;
typedef struct Hdr { u8 pad[16]; u32 n; } Hdr;
typedef struct Tab { Hdr *h; u8 pad[8]; u8 *data; } Tab;
typedef struct ITab { Hdr *h; u8 pad[8]; int *data; } ITab;
typedef struct Obj {
    u8 pad0[224]; u32 x224; u8 pad228[300 - 228]; int *p300; u8 pad304[320 - 304];
    void *x320, *x324, *x328, *x332; int *p336, *p340; u8 pad344[360 - 344];
    Tab *p360; ITab *p364; Tab *p368; u32 n372; void **arr376; u8 pad380[384 - 380];
    u32 x384; int x388; u8 pad392[396 - 392]; int x396; u8 pad400[404 - 400]; int x404; u8 pad408[420 - 408];
    int x420; int x424; u8 pad428[440 - 428]; u32 *p440; u8 pad444[452 - 444]; u32 x452;
} Obj;
extern "C" Arg lbl_80298AE4;
extern "C" Arg lbl_80298AF8;
extern "C" char lbl_8035FB58[4];
extern "C" f32 lbl_8035FC14;
extern "C" void *lbl_8035B65C;
extern "C" void fn_800F6E88(void *, void *);
extern "C" s32 fn_800F6CD0(void *, void *);
extern "C" void fn_8023F764(Obj *, void **, Arg);
extern "C" void fn_8023FA2C(Obj *, void **, Arg);
extern "C" void fn_80240DBC(Obj *, f32);
extern "C" void fn_80240B50(Obj *, void *, int);
extern "C" void fn_80082D44(Obj *, u32);
extern "C" void __ct__9C80253F24Fiiii(void *, void *, u32, s32, void *);
extern "C" void *fn_80242144(Obj *, s32);
extern "C" void fn_80242BC0(void *, void *, u32, s32, void *, s32);
static inline void Play(Obj *o, u32 idx) {
    void *a, *b;
    int c;
    int z = *o->p300;
    if (!z && (z || o->x404)) return;
    if (o->x388 == 1 && o->x384 == o->x224) {
        o->x388 = 0;
        o->x384 = 0;
    }
    a = idx == 0 ? o->x328 : o->x320;
    b = idx == 0 ? o->x332 : o->x324;
    c = idx == 0 ? *o->p340 : *o->p336;
    if (fn_800F6CD0(a, lbl_8035FB58) == 0) {
        if (c) __ct__9C80253F24Fiiii(lbl_8035B65C, a, o->x224, 0, b);
        else fn_80242BC0(fn_80242144(o, 0), a, o->x224, 0, b, 0);
    }
}
static inline Arg mk(const Arg &t, void *b) { Arg r = t; r.p = b; return r; }
static inline void clr(Obj *o) {
    u32 i;
    for (i = 0; i < o->n372; i++) {
        if (o->arr376[i]) {
            u8 s1[8];
            fn_800F6E88(s1, o->p368->data + i * 8);
            fn_8023F764(o, &o->arr376[i], mk(lbl_80298AE4, s1));
            o->arr376[i] = 0;
        }
    }
}
static inline void snd(Obj *o, u32 idx) {
    if (!o->x404 || (o->p364->h->n > idx && o->p364->data[idx] == 1)) {
        if (o->x420) {
            fn_80240DBC(o, lbl_8035FC14);
            o->x420 = 0;
        }
        if (o->p360->h->n > idx) {
            u8 s3[8];
            fn_800F6E88(s3, o->p360->data + idx * 8);
            if (fn_800F6CD0(s3, lbl_8035FB58) == 0) {
                { int v = 0; if (o->p364->h->n > idx) v = o->p364->data[idx]; fn_80240B50(o, s3, v); }
                o->x420 = 1;
            }
        }
    }
}
extern "C" void fn_80083120(Obj *o, u32 idx) {
    clr(o);
    if (o->n372 > idx) {
        u8 s2[8];
        fn_800F6E88(s2, o->p368->data + idx * 8);
        if (fn_800F6CD0(s2, lbl_8035FB58) == 0) {
            o->arr376[idx] = 0;
            fn_8023FA2C(o, &o->arr376[idx], mk(lbl_80298AF8, s2));
        }
    }
    snd(o, idx);
    fn_80082D44(o, idx);
    switch ((s32)idx) {
    case 0:
        o->x424 = 0;
        *o->p440 |= o->x452;
        Play(o, idx);
        break;
    case 2:
        o->x424 = 0;
        o->x396 = 0;
        *o->p440 &= ~o->x452;
        Play(o, idx);
        break;
    case 1:
    case 3:
        *o->p440 |= o->x452;
        break;
    }
    o->x404 = 0;
}

} /* extern "C" */
