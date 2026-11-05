// fn_8009D0F4: state walker (tables sIx/sLen/sAct in .data at lbl_802CE5E0+0x324, strings pooled in .rodata 8029A430).
// NonMatching: 12 diff lines, prologue register choice only (target colors the table base before the string-pool base; see hm-work/wA_8009D0F4/STATUS.txt).
#include "common.h"

#pragma readonly_strings on

extern "C" {

struct H { u8 pad[0x10]; u32 n; };
struct LS { H *h; u8 pad[8]; char (*d)[8]; };
struct LI { H *h; u8 pad[8]; s32 *d; };
struct E { u8 pad[0xb4]; u32 fb4; };
struct T {
    u8 pad0[0x60];
    s32 f60;
    u8 pad64[0xd0 - 0x64];
    u32 *fd0;
    u8 padd4[0xe0 - 0xd4];
    E *fe0;
    u8 pade4[0x118 - 0xe4];
    s32 *f118;
    LS *f11c;
    LS *f120;
    LS *f124;
    LS *f128;
    LI *f12c;
    LI *f130;
    LS *f134;
    LI *f138;
    u32 f13c;
};
static s32 sPad[0x324 / 4] = {1};
static s32 sIx[7] = {1};
static s32 sLen[26] = {1};
static s32 sAct[32] = {1};
void fn_800F6E88(char *, const char *);
static void dummy_strs(char *b) { fn_800F6E88(b, "MStation"); fn_800F6E88(b, "BACKWARD"); fn_800F6E88(b, "ANIMOVER"); fn_800F6E88(b, "ACTIVATE"); fn_800F6E88(b, "DEACTIV8"); }
extern char lbl_80361800[4];
extern f32 lbl_803618A8, lbl_803618AC;
extern void *lbl_8035B65C;
void fn_80241628(T *, s32, s32);
void *fn_8023F4A0(T *, const char *, const char *, const char *, s32);
void fn_802494A4(T *, s32);
void fn_800F6E88(char *, const char *);
int fn_800F6CD0(const char *, const char *);
void fn_80240B50(T *, char *, s32);
void fn_80240DBC(T *, f32);
void *fn_8022D694(E *);
void fn_80241588(T *, u32, s32, f32);
void fn_80241DD0(T *, const char *, s32, s32, s32, s32);
void __ct__9C80253F24Fiiii(void *, char *, E *, s32, char *);
void *fn_80242144(T *, s32);
void fn_80242BC0(void *, char *, E *, s32, char *, s32);
static inline void playPart(T *t, u32 idx) {
    char buf[8];
    if (t->f134->h->n > idx) {
        fn_800F6E88(buf, t->f134->d[idx]);
        if (fn_800F6CD0(buf, lbl_80361800) == 0) {
            s32 v = 0;
            if (t->f138->h->n > idx) v = t->f138->d[idx];
            fn_80240B50(t, buf, v);
        } else {
            fn_80240DBC(t, lbl_803618A8);
        }
    }
}
static inline void anim(T *t) {
    if (t->fd0[t->f13c] && fn_8022D694(t->fe0)) {
        fn_80241588(t, t->f13c, 0, lbl_803618AC);
    } else {
        fn_80241DD0(t, "ANIMOVER", 0, 0, 0, 0);
    }
}
#define LA(n) (((LS **)&t->f11c)[(n) * 2])
#define LB(n) (((LS **)&t->f11c)[(n) * 2 + 1])
#define LW(n) (((LI **)&t->f12c)[n])
static inline void spawn(T *t, s32 n, char *a, char *b) {
    u32 h = t->f13c >> 1;
    s32 w;
    fn_800F6E88(a, lbl_80361800);
    fn_800F6E88(b, lbl_80361800);
    w = 0;
    if (LA(n)->h->n > h) fn_800F6E88(a, LA(n)->d[h]);
    if (LB(n)->h->n > h) fn_800F6E88(b, LB(n)->d[h]);
    if (LW(n)->h->n > h) w = LW(n)->d[h];
    if (fn_800F6CD0(a, lbl_80361800) == 0) {
        if (w) __ct__9C80253F24Fiiii(lbl_8035B65C, a, t->fe0, 0, b);
        else fn_80242BC0(fn_80242144(t, 0), a, t->fe0, 0, b, 0);
    }
}
void fn_8009D0F4(T *t, s32 st) {
    s32 *q;
    char b2[8];
    char a2[8];
    char b4[8];
    char a4[8];
    s32 k;
    s32 v;
    v = t->f60;
    k = sIx[st];
    for (q = sLen + k; v > 0; q++) {
        if (*q > v) break;
        v -= sLen[k++];
    }
    switch (sAct[k]) {
    case 0:
        fn_80241628(t, 0, 0);
        t->f11c = (LS *)fn_8023F4A0(t, lbl_80361800, lbl_80361800, "aaActivateEvents", 1);
        t->f120 = (LS *)fn_8023F4A0(t, lbl_80361800, lbl_80361800, "aaActivateData", 1);
        t->f124 = (LS *)fn_8023F4A0(t, lbl_80361800, lbl_80361800, "aaDeactivateEvents", 1);
        t->f128 = (LS *)fn_8023F4A0(t, lbl_80361800, lbl_80361800, "aaDeactivateData", 1);
        t->f12c = (LI *)fn_8023F4A0(t, lbl_80361800, lbl_80361800, "abSendActivateGameEvent", 1);
        t->f130 = (LI *)fn_8023F4A0(t, lbl_80361800, lbl_80361800, "abSendDeactivateGameEvent", 1);
        t->f134 = (LS *)fn_8023F4A0(t, lbl_80361800, lbl_80361800, "aaSounds", 1);
        t->f138 = (LI *)fn_8023F4A0(t, lbl_80361800, lbl_80361800, "abSoundLooped", 1);
        t->fe0->fb4 |= 4;
        fn_802494A4(t, 1);
        break;
    case 1:
        t->f13c = 0;
        playPart(t, 0);
        anim(t);
        break;
    case 2:
        spawn(t, 0, a2, b2);
        playPart(t, 1);
        anim(t);
        break;
    case 3:
        t->f13c = *t->f118 << 1;
        playPart(t, 2);
        anim(t);
        break;
    case 4:
        spawn(t, 1, a4, b4);
        playPart(t, 3);
        anim(t);
        break;
    case 5:
        playPart(t, 4);
        anim(t);
        break;
    case 6:
        return;
    case 7:
        if (++t->f13c == *t->f118 << 1) fn_802494A4(t, 3);
        else fn_802494A4(t, 5);
        break;
    case 8:
        if (--t->f13c == 1) fn_802494A4(t, 1);
        else fn_802494A4(t, 5);
        break;
    case 9:
        t->f13c++;
        fn_802494A4(t, 2);
        break;
    case 10:
        t->f13c--;
        fn_802494A4(t, 4);
        break;
    case 11:
        fn_802494A4(t, 1);
        break;
    case 12:
        fn_802494A4(t, 3);
        break;
    case 13:
        break;
    }
}

} /* extern "C" */
