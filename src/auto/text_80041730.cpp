// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VBC0 { u8 pad_[0xc0]; };
struct VH : VBC0 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void f8(void *s); };
static u8 sPad[2608] = {1};
static s32 tA[73] = {1};
static s32 tB[315] = {1};
static s32 tC[315] = {1};
const char *wG_strpool_80041730[] = { "MGameCam","MFreeCam","MStation","Player25","C_LNFALL","C_MSLEND","C_STRAFE","C_BOUNCE","C_HUNTER","C_RAYMAN","C_UNREAL","C_SHNTER","C_SUNREL","C_SPIRIT","PATHOVER","PATHLOOP","C_FREEZE","C_RESUME","C_STITCH","C_NSCARY","C_UNSPRT","C_NSPRT2","C_TARGET","C_TMSHKS","C_TMSHKM","C_TMSHKL","C_FADEIN","C_FADEOT","C_FDTOYI","C_FDTOYO","C_NOLBOX","C_TRANTM","C_TRANSM","C_GRPEVT","C_CRTEVT","C_EINPUT","C_TITLEA","C_TITLEB","C_TITLEC","C_TITLED","C_TITLEE","C_TITLEF" };
extern int lbl_8035B308;
extern void *lbl_8035B65C;
extern int lbl_8035B488;
extern int lbl_8035A02C;
extern int lbl_8035A1DC;
extern int lbl_8035B7BC;
extern int lbl_8035B684;
extern int lbl_80359748;
extern int lbl_8035A244;
extern f32 lbl_8035C710, lbl_8035C714, lbl_8035C7A8, lbl_8035C7B4, lbl_8035C7B8, lbl_8035C7BC, lbl_8035C7C8;
extern char lbl_8035C708[4], lbl_8035C718[4], lbl_8035C720[4], lbl_8035C728[4], lbl_8035C730[4], lbl_8035C738[4], lbl_8035C740[4], lbl_8035C748[4], lbl_8035C750[4], lbl_8035C758[4], lbl_8035C760[4], lbl_8035C768[4], lbl_8035C770[4], lbl_8035C778[4], lbl_8035C780[4], lbl_8035C788[4], lbl_8035C790[4], lbl_8035C798[4], lbl_8035C7A0[4], lbl_8035C7AC[4], lbl_8035C428[4], lbl_8035C7C0[4];
void __ct__9C80253F24Fiiii(void *, const char *, int, int, int);
int strcmp(const char *, const char *);
int fn_800F6CD0(int, const char *);
void fn_800F6E88(void *, const char *);
int fn_802288FC(int, int);
void fn_80039E80(int, int, f32);
void fn_80076D50(int, int);
void fn_80222C34(int);
void fn_80222C88(int, int, f32);
void fn_80222DAC(int, int, f32);
void fn_80222ED0(int, int);
void fn_80222F8C(int, int, int);
void fn_8022340C(int, int, f32);
void fn_8022345C(int, f32);
void fn_802237B8(int, const char *);
void fn_802237E4(int, f32);
int fn_80240028(int);
int fn_802401A0(int);
int fn_802401D0(int);
void fn_80240A8C(int, int, int);
void fn_80241028(int, int, int);
void fn_802410CC(int, int, int);
int fn_80241628(int, int, int);
void fn_80241DD0(int, const char *, int, int, int, int);
int fn_80242144(int, int);
void fn_80242BC0(int, const char *, int, int, int, int);
int fn_802494A4(int, int);
void fn_8026B3B4(int);
void fn_8026B524(int);
void fn_8026B7CC(int, const char *);

#define I(o) (*(int *)(p + (o)))
#define F(o) (*(f32 *)(p + (o)))
#define PF(o) (**(f32 **)(p + (o)))
#define T(o) (*(int *)(I(0x118) + (o)))
#define CT(s) __ct__9C80253F24Fiiii(lbl_8035B65C, s, 0, 0, 0)

static inline void setT(int o, f32 *k) {
    if (k == 0) {
        *(f32 *)(o + 0x264) = lbl_8035C710;
        *(f32 *)(o + 0x260) = lbl_8035C710;
    } else if (lbl_8035C710 == *k) {
        *(f32 *)(o + 0x264) = *k;
        *(f32 *)(o + 0x260) = lbl_8035C710;
    } else {
        *(f32 *)(o + 0x264) = *k;
        *(f32 *)(o + 0x260) = (*(f32 *)(o + 0x25c) - *(f32 *)(o + 0x254)) / *k;
    }
}
static inline void setF(int o, f32 *k) {
    if (k != 0) *(f32 *)(o + 0x268) = *k;
}
static inline void mode(int p, int a, const char *s, int m) {
    fn_80241628(p, a, 0);
    fn_802237B8(I(0x118), s);
    lbl_80359748 = m;
}
static inline void pathA(int p, int n) {
    fn_802494A4(p, 5);
    fn_80240A8C(p, n, 0);
    if (*(u32 *)(fn_80240028(p) + 0xc) == 0) fn_80241DD0(p, "PATHOVER", 0, 0, 0, 0);
}
static inline void pathB(int p, int n) {
    fn_802494A4(p, 0x1c);
    fn_80240A8C(p, n, 0);
}
static inline void fadeA(int p) {
    if (*(void **)(p + 0xec) != 0) {
        if (strcmp(lbl_8035C428, *(char **)(p + 0xf0)) != 0) fn_80222C88(I(0x118), I(0xf0), PF(0xec));
        else fn_80039E80(lbl_8035A02C, 0, PF(0xec));
    }
}
static inline void fadeB(int p) {
    if (*(void **)(p + 0xec) != 0 && *(void **)(p + 0xf0) != 0) {
        if (strcmp(lbl_8035C428, *(char **)(p + 0xf0)) != 0) fn_80222DAC(I(0x118), I(0xf0), PF(0xec));
        else fn_80039E80(lbl_8035A02C, 1, PF(0xec));
    }
}

void fn_80041730(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;

    t = *(s32 *)(p + 0x60);
    idx = tA[st];
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        I(0x12c) = *(int *)(lbl_8035B308 + 0x48);
        mode(p, 0, lbl_8035C708, 1);
        break;
    case 1:
        fn_80241628(p, 1, 0);
        fn_802401A0(p);
        break;
    case 2:
        fn_80241628(p, 2, 0);
        fn_802401A0(p);
        break;
    case 3:
        fn_80241628(p, 3, 0);
        T(0x280) = 0;
        fn_802401A0(p);
        fn_8022345C(I(0x118), lbl_8035C710);
        break;
    case 4:
        return;
    case 5:
        fn_80241628(p, 4, 0);
        *(f32 *)(lbl_8035B488 + 0x27ec) = lbl_8035C714;
        fn_80222F8C(I(0x118), 0x41, 500);
        if (*(void **)(p + 0x12c) != 0) *(int *)(I(0x12c) + 0x68c) = 0;
        fn_80242BC0(fn_80242144(p, 0), "STRTPATH", 0, 0, 0, 0);
        CT(lbl_8035C718);
        T(0x2a4) = 1;
        if (*(void **)(p + 0x12c) != 0) fn_80076D50(I(0x12c), 0);
        break;
    case 6:
        mode(p, 0, lbl_8035C708, 1);
        break;
    case 7: fn_802237B8(I(0x118), lbl_8035C720); break;
    case 8: fn_802237B8(I(0x118), lbl_8035C728); break;
    case 9: fn_802237B8(I(0x118), lbl_8035C730); break;
    case 10: fn_802237B8(I(0x118), lbl_8035C738); break;
    case 11: fn_802237B8(I(0x118), "LongFall"); break;
    case 12: fn_802237B8(I(0x118), lbl_8035C740); break;
    case 13: fn_802237B8(I(0x118), lbl_8035C748); break;
    case 14: fn_802237B8(I(0x118), lbl_8035C750); break;
    case 15:
        return;
    case 16: fn_802237B8(I(0x118), lbl_8035C758); break;
    case 17: fn_802237B8(I(0x118), lbl_8035C760); break;
    case 18: fn_802237B8(I(0x118), lbl_8035C768); break;
    case 19: fn_802237B8(I(0x118), lbl_8035C770); break;
    case 20: mode(p, 6, lbl_8035C778, 2); break;
    case 21: mode(p, 0, lbl_8035C780, 3); break;
    case 22: mode(p, 0, lbl_8035C788, 4); break;
    case 23: mode(p, 0, lbl_8035C790, 5); break;
    case 24: mode(p, 0, "CSHunter", 3); break;
    case 25: mode(p, 0, "CSUnreal", 5); break;
    case 26: mode(p, 0, lbl_8035C798, 5); break;
    case 27:
        fn_80241628(p, 4, 0);
        fn_80240A8C(p, 0, 0);
        break;
    case 28:
        fn_80241628(p, 4, 0);
        break;
    case 29:
        return;
    case 30:
        fn_802401D0(p);
        break;
    case 31:
        fn_80222C34(I(0x118));
        fn_80242BC0(fn_80242144(p, 0), lbl_8035C7A0, 0, 0, 0, 0);
        if (*(void **)(p + 0x12c) != 0) *(int *)(I(0x12c) + 0x68c) = 1;
        fn_80039E80(lbl_8035A02C, 0, lbl_8035C7A8);
        fn_80222ED0(I(0x118), 500);
        if (*(int *)(lbl_8035A1DC + 0x36b8) == 0) {
            int e = I(0xe0);
            if (*(int *)(e + 0x328) != 0) {
                if (*(int *)(e + 0x32c) == 0) fn_8026B7CC(lbl_8035B7BC, lbl_8035C428);
                *(int *)(e + 0x328) = 0;
                *(int *)(e + 0x32c) = 0;
            }
        }
        *(f32 *)(lbl_8035B488 + 0x27ec) = lbl_8035C714;
        CT(lbl_8035C7AC);
        T(0x2a4) = 0;
        break;
    case 32:
        fn_80241628(p, 0, 0);
        break;
    case 33: fn_802494A4(p, 1); break;
    case 34: fn_802494A4(p, 0x15); break;
    case 35: fn_802494A4(p, 3); break;
    case 36: fn_802494A4(p, 4); break;
    case 37: fn_802494A4(p, 5); break;
    case 38: fn_802494A4(p, 6); break;
    case 39: fn_802494A4(p, 7); break;
    case 40: fn_802494A4(p, 8); break;
    case 41: fn_802494A4(p, 9); break;
    case 42: fn_802494A4(p, 10); break;
    case 43: fn_802494A4(p, 0xb); break;
    case 44: fn_802494A4(p, 0xc); break;
    case 45: fn_802494A4(p, 0xd); break;
    case 46: fn_802494A4(p, 0xe); break;
    case 47: fn_802494A4(p, 0xf); break;
    case 48: fn_802494A4(p, 0x10); break;
    case 49: fn_802494A4(p, 0x11); break;
    case 50: fn_802494A4(p, 0x12); break;
    case 51: fn_802494A4(p, 0x13); break;
    case 52: fn_802494A4(p, 0); break;
    case 53: pathA(p, 0); break;
    case 54: pathA(p, 1); break;
    case 55: pathA(p, 2); break;
    case 56: pathA(p, 3); break;
    case 57: pathA(p, 4); break;
    case 58: pathA(p, 5); break;
    case 59: pathA(p, 6); break;
    case 60: pathA(p, 7); break;
    case 61: pathA(p, 8); break;
    case 62: pathA(p, 9); break;
    case 63:
        fn_80241628(p, 0, 0);
        fn_802494A4(p, I(0x134));
        I(0x134) = I(0x130);
        CT("C_PTHOVR");
        break;
    case 64:
        fn_80241628(p, 0, 0);
        fn_802494A4(p, 0x15);
        CT("C_PTHOVR");
        break;
    case 65: fn_802494A4(p, 0x14); break;
    case 66: fn_802494A4(p, 0x18); break;
    case 67: fn_802494A4(p, 0x16); break;
    case 68: fn_802494A4(p, 0x17); break;
    case 69: fn_802494A4(p, 0x19); break;
    case 70: fn_802494A4(p, 0x1a); break;
    case 71: fn_802494A4(p, 0x1b); break;
    case 72: {
        int o;
        int s;
        s = I(0xec);
        o = 0;
        if ((u32)s != 0 && fn_800F6CD0(s, lbl_8035C428) == 0) o = fn_802288FC(lbl_8035B308, s);
        lbl_8035A244 = o;
        break;
    }
    case 73:
        if (*(void **)(p + 0xec) != 0) *(f32 *)(I(0x118) + 0x25c) = PF(0xec);
        break;
    case 74: {
        int o;
        f32 *k;
        k = *(f32 **)(p + 0xec);
        if (k != 0) {
            o = I(0x118);
            *(f32 *)(o + 600) = *(f32 *)(o + 0x254);
            setT(o, k);
            fn_802237E4(I(0x118), lbl_8035C7B4);
        }
        break;
    }
    case 75:
        if (*(void **)(p + 0xec) != 0) setF(I(0x118), *(f32 **)(p + 0xec));
        break;
    case 76:
        if (*(void **)(p + 0xec) != 0) fn_8022345C(I(0x118), PF(0xec));
        else fn_8022345C(I(0x118), lbl_8035C7B8);
        break;
    case 77:
        if (*(void **)(p + 0xec) != 0) fn_8022340C(I(0x118), 2, PF(0xec));
        break;
    case 78:
        if (*(void **)(p + 0xec) != 0) fn_8022340C(I(0x118), 3, PF(0xec));
        break;
    case 79:
        if (*(void **)(p + 0xec) != 0) fn_8022340C(I(0x118), 4, PF(0xec));
        break;
    case 80:
        fadeA(p);
        break;
    case 81:
        fadeB(p);
        break;
    case 82: {
        char nm[8];
        f32 k;
        k = lbl_8035C7BC;
        *(f32 **)(p + 0xec) = &k;
        fn_800F6E88(nm, lbl_8035C7C0);
        *(char **)(p + 0xf0) = nm;
        fadeA(p);
        break;
    }
    case 83: {
        char nm[8];
        f32 k;
        k = lbl_8035C7C8;
        *(f32 **)(p + 0xec) = &k;
        fn_800F6E88(nm, lbl_8035C7C0);
        *(char **)(p + 0xf0) = nm;
        fadeB(p);
        break;
    }
    case 84:
        fn_80222ED0(I(0x118), 0);
        break;
    case 85:
        if (*(void **)(p + 0xec) != 0) *(f32 *)(I(0x118) + 0x278) = PF(0xec);
        break;
    case 86:
        if (*(void **)(p + 0xec) != 0) *(f32 *)(I(0x118) + 0x270) = PF(0xec);
        break;
    case 87:
        if (*(void **)(p + 0xec) != 0) {
            char *s = *(char **)(p + 0xf0);
            if (s != 0) fn_80242BC0(fn_80242144(p, (int)PF(0xec)), s, 0, 0, 0, 0);
        }
        break;
    case 88:
        if (*(void **)(p + 0xf0) != 0) ((VH *)lbl_8035B684)->f8(*(void **)(p + 0xf0));
        break;
    case 89:
        if (*(void **)(p + 0x12c) != 0) *(int *)(I(0x12c) + 0x68c) = 1;
        break;
    case 90:
        if (*(void **)(p + 0xf0) != 0 && *(int *)(lbl_8035A1DC + 0x36b8) == 0) {
            int e = I(0xe0);
            int n = (int)PF(0xec);
            *(int *)(e + 0x328) = 1;
            *(int *)(e + 0x32c) = n;
            fn_8026B7CC(lbl_8035B7BC, *(const char **)(p + 0xf0));
        }
        break;
    case 91:
        if (*(void **)(p + 0xf0) != 0 && T(0x300) == 0) fn_802410CC(p, I(0xf0), 0);
        break;
    case 92:
        if (*(void **)(p + 0xf0) != 0 && T(0x300) == 0) fn_80241028(p, I(0xf0), 0);
        break;
    case 93:
        if (*(void **)(p + 0xf0) != 0) CT(*(const char **)(p + 0xf0));
        break;
    case 94: pathB(p, 0); break;
    case 95: pathB(p, 1); break;
    case 96: pathB(p, 2); break;
    case 97: pathB(p, 3); break;
    case 98: pathB(p, 4); break;
    case 99: pathB(p, 5); break;
    case 100:
        fn_8026B524(lbl_8035B7BC);
        fn_8026B3B4(lbl_8035B7BC);
        break;
    case 101:
        if (*(void **)(p + 0xec) != 0) I(0x134) = (int)PF(0xec);
    case 102:
        break;
    }
}
}

} /* extern "C" */
