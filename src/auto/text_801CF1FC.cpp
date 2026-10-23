// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void __dla__FPv(void *);
void fn_800FB064(void *, void *);
void fn_800FB0F8(void *, void *);
f32 fn_800FB2E0(void *);
void fn_801A6EC8(void *, s32, void *, void *);
void *fn_80207198(void *, void *, void *);
typedef struct { u8 pad[12]; f32 f; } FA801CF1FC;
typedef struct { u8 pad[12]; s32 i; } IA801CF1FC;
typedef struct { u8 pad[8]; void *f8; } H801CF1FC;
typedef struct {
    u8 pad0[116];
    H801CF1FC *f116;
    u8 pad1[240];
    s32 f360;
    f32 f364;
    u8 pad2[8];
    FA801CF1FC *f376;
    IA801CF1FC *f380;
    s32 f384;
    f32 f388;
    u8 pad3[8];
    FA801CF1FC *f400;
    IA801CF1FC *f404;
    u8 pad4[20];
    f32 f428;
    f32 f432;
    f32 f436;
    f32 f440;
    s32 f444;
    f32 f448;
    u8 pad5[4];
    f32 f456;
} C801CF1FC;
void fn_801CF1FC(C801CF1FC *p, s32 key, void *x, void *r) {
    void *s;
    char name[12];
    name[0] = 0;
    switch (key) {
    case 78:
        p->f428 = fn_800FB2E0(r);
        p->f432 = fn_800FB2E0(r);
        p->f436 = fn_800FB2E0(r);
        p->f440 = fn_800FB2E0(r);
        break;
    case 83:
        p->f456 = fn_800FB2E0(r);
        break;
    case 84:
        p->f448 = fn_800FB2E0(r);
        break;
    case 79:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, name);
        p->f376 = (FA801CF1FC *)fn_80207198(p->f116->f8, s, name);
        p->f360 = 1;
        if (p->f376) p->f364 = p->f376->f;
        __dla__FPv(s);
        break;
    case 80:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, name);
        p->f400 = (FA801CF1FC *)fn_80207198(p->f116->f8, s, name);
        p->f384 = 1;
        if (p->f400) p->f388 = p->f400->f;
        __dla__FPv(s);
        break;
    case 81:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, name);
        p->f380 = (IA801CF1FC *)fn_80207198(p->f116->f8, s, name);
        p->f360 = 1;
        if (p->f380) p->f364 = p->f380->i;
        __dla__FPv(s);
        break;
    case 82:
        fn_800FB0F8(r, &s);
        fn_800FB064(r, name);
        p->f404 = (IA801CF1FC *)fn_80207198(p->f116->f8, s, name);
        p->f384 = 1;
        if (p->f404) p->f388 = p->f404->i;
        __dla__FPv(s);
        break;
    case 85:
        p->f444 = 1;
        break;
    default:
        fn_801A6EC8(p, key, x, r);
        break;
    }
}

} /* extern "C" */
