#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void showB(); virtual void hideB(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
struct VS0 { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void reset(); };
// The tables really live in lbl_802BB050 (.data 0x802BB050, unit jt_802BB050). Only as statics in this TU
// does MWCC address them from one section base; matching needs that data merged into this unit.
static u8 sPad[0x578] = {1};
static s32 tA[29] = {1};
static s32 tB[114] = {1};
static s32 tC[114] = {1};
typedef struct { f32 x, y, z; } V3;
extern u32 lbl_8035B308;
extern void *lbl_8035B65C;
extern u8 lbl_8035E060[4];
extern u32 lbl_8035E194;
extern f32 lbl_8035E198, lbl_8035E19C, lbl_8035E1A0, lbl_8035E1A4;
extern char lbl_802967F0[], lbl_802968B0[];
extern char lbl_8035E144[5], lbl_8035E14C[7], lbl_8035E1A8[7], lbl_8035E1B0[8];
void __ct__9C80253F24Fiiii(void *, void *, u32, s32, u32);
int fn_800F6CD0(void *, void *);
void fn_800F6E88(void *, void *);
void fn_800F70A8(void *);
int fn_800F6C28(void *);
void fn_80055EFC(int, int);
void fn_8005748C(int, int);
void fn_800572DC(int, int);
void fn_80056D3C(int, int, int, int, int);
void fn_80196688(int);
int fn_8022D694(int);
void fn_80107F3C(int, V3 *);
void fn_80241DD0(int, char *, int, int, int, int);
void fn_8022B618(int);
void fn_8022A7A8(int);
void fn_8022BBF4(int);
void fn_8022AD0C(int);
void fn_80240DBC(int, f32);
void fn_80240948(int, char *, int);
void *fn_80242144(int, int);
void fn_80242BC0(void *, void *, u32, int, u32, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80249008(int, int);
int fn_802494A4(int, int);

#define P(i) (*(int *)(p + (i) * 4))
#define PP(i) (**(int **)(p + (i) * 4))
#define FL (**(u32 **)(p + 0x91 * 4))
#define E0 (*(VO **)(p + 0xe0))

static inline void animOver(int p, int k) {
    fn_8005748C(p, k);
    if (*(int *)(*(int *)(*(int *)(lbl_8035B308 + 0x48) + 600) + 0x300) != 0) fn_80241DD0(p, lbl_802967F0, 0, 0, 0, 0);
}
static inline void show(int p) {
    if (PP(0x6c) != 0) {
        if (P(0x18) != 4 && PP(0x6c) != 0) {
            int o = *(int *)((int)E0 + 0x9c);
            *(f32 *)(o + 0x9c) = lbl_8035E198;
            *(u32 *)(o + 0x98) &= ~6;
            *(f32 *)(o + 0xac) = lbl_8035E198;
            fn_80196688(o);
            *(u32 *)(o + 0x98) &= ~8;
        }
    } else if (PP(0x51) != 0) {
        E0->showB();
    }
    FL |= P(0x92);
}
static inline void tint(int p, V3 *c) {
    if (*(void **)(p + 0x8f * 4) != 0 && PP(0x67) != 0) {
        void *o;
        c->x = lbl_8035E1A0;
        c->y = lbl_8035E1A0;
        c->z = lbl_8035E1A0;
        o = *(void **)(*(int *)((int)E0 + 0x9c) + 0x78);
        if (o != 0) fn_80107F3C((int)o, c);
    }
}
static inline void act(int p) {
    int o; int a; int b;
    fn_80241628(p, 1, 0);
    a = PP(0x53);
    b = PP(0x54);
    if (PP(0x6c) != 0) {
        if (P(0x18) != 4 && PP(0x6c) != 0) {
            o = *(int *)((int)E0 + 0x9c);
            *(f32 *)(o + 0x9c) = lbl_8035E198;
            *(u32 *)(o + 0x98) &= ~6;
            *(f32 *)(o + 0xac) = lbl_8035E198;
            fn_80196688(o);
            *(u32 *)(o + 0x98) &= ~8;
        }
    } else if (PP(0x51) != 0) {
        E0->showB();
    }
    FL |= P(0x92);
    if (a != 0) fn_8022BBF4(*(int *)(p + 0xe0));
    if (b != 0) fn_8022AD0C(*(int *)(p + 0xe0));
}
static inline void bcast(int p, char *m) {
    if (PP(0x4b) != 0) {
        u32 i;
        for (i = 0; i < (u32)P(0x46); i++) fn_80242BC0(fn_80242144(p, i + 1), m, P(0x38), 0, P(0x60), 0);
    }
}
static inline void rst(int p, int k) {
    int v = P(0x8a);
    ((VS0 *)p)->reset();
    P(0x8c) = 1;
    P(0x8a) = v;
    fn_80055EFC(p, k);
}
static inline void say(int p, int idx, int flag, int *done) {
    if (fn_800F6CD0((void *)P(idx), lbl_8035E060) == 0 && (PP(flag) == 0 || (PP(flag) != 0 && *done == 0))) {
        *done = 1;
        __ct__9C80253F24Fiiii(lbl_8035B65C, (void *)P(idx), 0, 0, 0);
    }
}
static inline void resetAnim(int p) {
    int o = fn_8022D694(*(int *)(p + 0xe0));
    *(f32 *)(o + 8) = lbl_8035E198;
    if (*(void **)(o + 0x10) != 0) *(f32 *)(o + 0x24) = *(f32 *)(o + 8) / *(f32 *)(*(int *)(o + 0x10) + 4);
}
static inline void parse(int p, char *buf, int *ps, int *a, int *b) {
    int i;
    fn_800F6E88(buf, (void *)P(0x3b));
    fn_800F70A8(buf);
    if (fn_800F6C28(buf) == 0) *ps = 1;
    for (i = 0; i < 3 && i < fn_800F6C28(buf) && buf[i] != 0; i++) {
        switch (buf[i]) {
        case 'A': *ps = 1; *a = 1; *b = 1; break;
        case 'B': *a = 1; break;
        case 'D': *ps = 1; break;
        case 'L': *b = 1; break;
        }
    }
}
static inline void open(int p, char *buf, int k) {
    int s; int a; int b;
    s = PP(0x52) != 0;
    a = PP(0x53);
    b = PP(0x54);
    parse(p, buf, &s, &a, &b);
    if (s) show(p);
    if (a != 0) fn_8022BBF4(*(int *)(p + 0xe0));
    if (b != 0) fn_8022AD0C(*(int *)(p + 0xe0));
    fn_800572DC(p, k);
}
static inline void open0(int p, char *buf, int k) {
    int s; int a; int b;
    s = PP(0x52) != 0;
    a = PP(0x53);
    b = PP(0x54);
    parse(p, buf, &s, &a, &b);
    if (s) show(p);
    if (a != 0) fn_8022BBF4(*(int *)(p + 0xe0));
    if (b != 0) fn_8022AD0C(*(int *)(p + 0xe0));
    fn_800572DC(p, k);
}
static inline void close(int p, char *buf) {
    int s; int a; int b;
    s = PP(0x52) != 0;
    a = PP(0x53);
    b = PP(0x54);
    parse(p, buf, &s, &a, &b);
    if (s) {
        int x = PP(0x6c);
        if (x != 0) {
            if (x != 0) *(u32 *)(*(int *)((int)E0 + 0x9c) + 0x98) |= lbl_8035E194;
        } else if (PP(0x51) != 0) {
            E0->hideB();
        }
        FL &= ~P(0x92);
    }
    if (a != 0) fn_8022B618(*(int *)(p + 0xe0));
    if (b != 0) fn_8022A7A8(*(int *)(p + 0xe0));
}
#define KEYOK(p) ((fn_800F6CD0((void *)P(0x60), lbl_8035E060) != 0 && *(void **)(p + 0x3b * 4) == 0) || (*(void **)(p + 0x3b * 4) != 0 && fn_800F6CD0(*(void **)(p + 0x3b * 4), (void *)P(0x60)) != 0))

void fn_800548A4(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    V3 c30;
    V3 c3c;
    V3 c48;
    V3 c54;
    V3 c60;
    char b68[8];
    char b70[8];
    char b78[8];
    char b80[8];
    char b88[8];

    idx = tA[st];
    t = P(0x18);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        fn_80055EFC(p, 0);
        break;
    case 1:
        if (P(0x8b) == 0) fn_8005748C(p, 0);
        fn_80241628(p, 0, 0);
        break;
    case 2:
        animOver(p, 1);
        break;
    case 3:
        if (P(0x8b) == 0) fn_8005748C(p, 2);
        break;
    case 4:
        animOver(p, 3);
        break;
    case 5:
        act(p);
        break;
    case 6:
        return;
    case 7:
        if (*(int *)(*(int *)(P(0x75) + 0xc) + 4) == 0 || (*(int *)(*(int *)(P(0x75) + 0xc) + 4) != 0 && P(0x8e) != 0)) {
            say(p, 99, 0x4e, (int *)(p + 0x80 * 4));
            fn_802494A4(p, 3);
        } else {
            fn_80241588(p, 1, 0, lbl_8035E19C);
        }
        break;
    case 8:
        if (*(int *)(*(int *)(P(0x75) + 0xc) + 0xc) == 0 || (*(int *)(*(int *)(P(0x75) + 0xc) + 0xc) != 0 && P(0x8e) != 0)) {
            say(p, 100, 0x4f, (int *)(p + 0x81 * 4));
            fn_802494A4(p, 1);
        } else {
            fn_80241588(p, 3, 0, lbl_8035E19C);
        }
        break;
    case 9:
        if (**(int **)(P(0x75) + 0xc) == 0) resetAnim(p);
        break;
    case 10:
        if (*(int *)(*(int *)(P(0x75) + 0xc) + 4) != 0 && P(0x8e) != 0) {
            say(p, 99, 0x4e, (int *)(p + 0x80 * 4));
            fn_802494A4(p, 3);
        }
        break;
    case 11:
        if (*(int *)(*(int *)(P(0x75) + 0xc) + 8) == 0) resetAnim(p);
        break;
    case 12:
        if (*(int *)(*(int *)(P(0x75) + 0xc) + 0xc) != 0 && P(0x8e) != 0) {
            say(p, 100, 0x4f, (int *)(p + 0x81 * 4));
            fn_802494A4(p, 1);
        }
        break;
    case 13: open0(p, b68, 0); break;
    case 14: open(p, b70, 1); break;
    case 15: open(p, b78, 2); break;
    case 16: open(p, b80, 3); break;
    case 17: {
        close(p, b88);
        tint(p, &c54);
        if (P(0x95) != 0) {
            P(0x95) = 0;
            fn_80240DBC(p, lbl_8035E1A4);
        }
        break;
    }
    case 18:
        if (PP(0x57) != 0) {
            P(0x89)++;
            fn_80056D3C(p, 0, 0, 0, 0);
        }
        break;
    case 19:
        if (PP(0x58) != 0) {
            P(0x89)++;
            fn_80056D3C(p, 0, 0, 0, 0);
        }
        break;
    case 20:
        P(0x89)++;
        fn_80056D3C(p, 0, 0, 0, 0);
        break;
    case 21:
        if (*(u32 *)(p + 0x89 * 4) != 0) P(0x89)--;
        break;
    case 22:
        P(0x82) = 1;
        break;
    case 23:
        if ((FL & P(0x94)) == 0 && KEYOK(p)) {
            FL |= P(0x94);
            bcast(p, lbl_8035E144);
            tint(p, &c60);
        }
        break;
    case 24:
        if ((FL & P(0x94)) != 0 && KEYOK(p)) {
            FL &= ~P(0x94);
            if (*(VO **)(p + 0x39 * 4) != 0) (*(VO **)(p + 0x39 * 4))->send(lbl_802968B0, 0, 0, 0, 0);
            if (PP(0x4c) != 0) fn_80056D3C(p, 0, 0, 0, 0);
            bcast(p, lbl_8035E14C);
        }
        break;
    case 25:
        P(0x83) = 1;
        break;
    case 26:
        P(0x83) = 0;
        break;
    case 27:
        P(0x7e) = 1;
        P(0x7f) = 1;
        break;
    case 28:
        P(0x7e) = 0;
        break;
    case 29:
        P(0x85)++;
        break;
    case 30:
        P(0x85)--;
        break;
    case 31: {
        u32 f = FL;
        int m = f & P(0x93);
        if ((m != 0 || PP(0x4d) == 0) && P(0x85) == 0 && (f & P(0x92)) != 0 && (f & P(0x94)) == 0 &&
            ((m != 0 && PP(0x57) != 0) || (m == 0 && PP(0x58) != 0)))
            (*(VO **)(p + 0x39 * 4))->send(lbl_8035E1A8, P(0x38), 0, (void *)P(0x3b), P(0x6d));
        break;
    }
    case 32:
        P(0x8a) = 0;
        tint(p, &c30);
        break;
    case 33:
        P(0x8a) = 1;
        break;
    case 34:
        rst(p, 0);
        break;
    case 35:
        rst(p, 1);
        break;
    case 36:
        P(0x8e) = 1;
        break;
    case 37:
        P(0x89) = 0;
        break;
    case 38:
        fn_80056D3C(p, 0, 0, 1, 0);
        break;
    case 39:
        fn_80056D3C(p, 0, 0, 0, 0);
        break;
    case 40:
        tint(p, &c3c);
        break;
    case 41:
        fn_80249008(p, 1);
        break;
    case 42:
        fn_80249008(p, 0);
        P(0x82) = 0;
        tint(p, &c48);
        break;
    case 43:
        fn_80241628(p, 0, 0);
        break;
    case 44:
        fn_802494A4(p, 5);
        fn_80240948(p, lbl_8035E1B0, 0);
        break;
    case 45:
        fn_802494A4(p, (FL & P(0x93)) ? 1 : 3);
    case 46:
        break;
    }
}
}
