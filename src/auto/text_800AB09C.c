// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

static u8 sAB0pad[0x4E0] = {1};
static s32 sAB0a[34] = {1};
static s32 sAB0b[41] = {1};
static s32 sAB0c[34] = {1};
extern u8 *lbl_8035B308;
extern char lbl_803622F8[4];
extern char lbl_80362308[8];
extern char lbl_80362310[8];
extern char lbl_80362318[8];
extern char lbl_80362320[8];
extern char lbl_80362328[8];
extern char lbl_80362330[8];
extern char lbl_80362338[8];
extern char lbl_80362340[8];
extern char lbl_80362348[8];
extern char lbl_80362350[8];
extern char lbl_80362358[8];
extern char lbl_80362360[8];
extern char lbl_80362368[8];
extern char lbl_80362370[8];
extern char lbl_80362378[8];
extern char lbl_80362380[8];
extern char lbl_80362388[8];
extern char lbl_80362390[8];
extern char lbl_80362398[8];
extern char lbl_803623A0[8];
extern char lbl_803623A8[8];
extern char lbl_803623B0[8];
extern char lbl_803623B8[8];
extern char lbl_803623C0[8];
extern char lbl_803623C8[8];
extern char lbl_803623C8[8];
void fn_80241628(void *p, s32 a, s32 b);
void fn_8022BCD8(void *a, void *b, void *c);
void fn_802494A4(void *p, s32 a);
void fn_802402E0(void *p);
void fn_80240274(void *p, s32 a);
void fn_8022BF30(void *a, s32 b, s32 c, f32 f);
void fn_802490E0(void *p, s32 a, f32 f);
void fn_802413D8(f32 f, void *p, void *a, s32 b, s32 c, void *d);
void fn_802410CC(void *p, void *a, s32 b);
void fn_80240948(void *p, char *s, s32 a);

void fn_800AB09C(u8 *p, s32 n) {
    s32 *q;
    s32 idx;
    s32 t;

    idx = sAB0a[n];
    t = *(s32 *)(p + 0x60);
    for (q = sAB0b + idx; t > 0; q++) {
        if (*q > t) break;
        t -= sAB0b[idx++];
    }
    switch (sAB0c[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        if (*(void **)(p + 0x118) != 0) {
            fn_8022BCD8(*(void **)(p + 0xE0), *(void **)(p + 0x118), lbl_803622F8);
        }
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_802402E0(p);
        fn_80241628(p, 0, 0);
        break;
    case 2:
        fn_80241628(p, 1, 0);
        fn_80240274(p, 0);
        break;
    case 3:
        return;
    case 4:
        fn_8022BF30(*(void **)(p + 0xE0), 0xFF, 1, 0.0f);
        fn_8022BF30(*(void **)(p + 0xE0), 0, 1, 1.0f);
        fn_802490E0(p, 1, 1.0f);
        break;
    case 5:
        fn_8022BF30(*(void **)(p + 0xE0), 0, 1, 0.0f);
        fn_8022BF30(*(void **)(p + 0xE0), 0xFF, 1, 1.0f);
        fn_802490E0(p, 1, 1.0f);
        break;
    case 6:
        if (*(void **)(p + 0xF0) != 0) {
            fn_802413D8(0.2f, p, *(void **)(p + 0xF0), 0, 1, *(void **)(p + 0xEC));
        }
        break;
    case 7:
        if (*(void **)(p + 0xF0) != 0 && *(s32 *)(*(u8 **)(*(u8 **)(lbl_8035B308 + 0x48) + 600) + 0x300) == 0) {
            fn_802410CC(p, *(void **)(p + 0xF0), 0);
        }
        break;
    case 8:
        fn_802494A4(p, 1);
        break;
    case 9:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362308, 0);
        break;
    case 10:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362310, 0);
        break;
    case 11:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362318, 0);
        break;
    case 12:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362320, 0);
        break;
    case 13:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362328, 0);
        break;
    case 14:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362330, 0);
        break;
    case 15:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362338, 0);
        break;
    case 16:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362340, 0);
        break;
    case 17:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362348, 0);
        break;
    case 18:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362350, 0);
        break;
    case 19:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362358, 0);
        break;
    case 20:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362360, 0);
        break;
    case 21:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362368, 0);
        break;
    case 22:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362370, 0);
        break;
    case 23:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362378, 0);
        break;
    case 24:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362380, 0);
        break;
    case 25:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362388, 0);
        break;
    case 26:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362390, 0);
        break;
    case 27:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_80362398, 0);
        break;
    case 28:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623A0, 0);
        break;
    case 29:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623A8, 0);
        break;
    case 30:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623B0, 0);
        break;
    case 31:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623B8, 0);
        break;
    case 32:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623C0, 0);
        break;
    case 33:
        fn_802494A4(p, 2);
        fn_80240948(p, lbl_803623C8, 0);
        break;
    case 34:
        break;
    }
}
