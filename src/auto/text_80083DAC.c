// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

static u8 sDACpad[0x3B0] = {1};
static s32 sDACa[18] = {1};
static s32 sDACb[18] = {1};
static s32 sDACc[18] = {1};
extern char lbl_8035FCF4[7];
extern char lbl_8035FCFC[8];
extern char lbl_8035FD14[6];
extern char lbl_8035FD1C[8];
extern char lbl_8035FD24[8];
extern char lbl_80298CA0[];
extern s32 lbl_8035B65C;
void fn_802402E0(void *p);
void *fn_80242144(void *p, s32 i);
void fn_80242BC0(void *o, char *s, s32 a, s32 b, s32 c, s32 d);
void fn_80253F24(s32 o, char *s, s32 a, s32 b, s32 c);

void fn_80083DAC(u8 *p, s32 n) {
    s32 i;
    s32 j;
    s32 *q;
    s32 idx;
    s32 t;

    idx = sDACa[n];
    t = *(s32 *)(p + 0x60);

    for (q = sDACb + idx; t > 0; q++) {
        if (*q > t) break;
        t -= sDACb[idx++];
    }
    switch (sDACc[idx]) {
    case 0:
        fn_802402E0(p);
        break;
    case 1:
        return;
    case 2:
        for (i = 0; i < *(s32 *)(p + 0x11C) + *(s32 *)(p + 0x120); i++) {
            fn_80242BC0(fn_80242144(p, i), lbl_8035FCFC, 0, 0, 0, 0);
        }
        fn_80242BC0(fn_80242144(p, 12), lbl_8035FCFC, 0, 0, 0, 0);
        break;
    case 3:
        for (i = 0; j = *(s32 *)(p + 0x11C), i < j; i++) {
            fn_80242BC0(fn_80242144(p, i), lbl_8035FCF4, 0, 0, 0, 0);
            fn_80242BC0(fn_80242144(p, i), lbl_8035FD14, 0, 0, 0, 0);
        }
        for (; j < *(s32 *)(p + 0x11C) + *(s32 *)(p + 0x120); j++) {
            fn_80242BC0(fn_80242144(p, j), lbl_8035FCFC, 0, 0, 0, 0);
        }
        break;
    case 4: fn_80242BC0(fn_80242144(p, 2), lbl_8035FD14, 0, 0, 0, 0); break;
    case 5: fn_80242BC0(fn_80242144(p, 3), lbl_8035FD14, 0, 0, 0, 0); break;
    case 6: fn_80242BC0(fn_80242144(p, 4), lbl_8035FD14, 0, 0, 0, 0); break;
    case 7: fn_80242BC0(fn_80242144(p, 5), lbl_8035FD14, 0, 0, 0, 0); break;
    case 8: fn_80242BC0(fn_80242144(p, 6), lbl_8035FD14, 0, 0, 0, 0); break;
    case 9: fn_80242BC0(fn_80242144(p, 7), lbl_8035FD14, 0, 0, 0, 0); break;
    case 10: fn_80242BC0(fn_80242144(p, 8), lbl_8035FD14, 0, 0, 0, 0); break;
    case 11: fn_80242BC0(fn_80242144(p, 9), lbl_8035FD14, 0, 0, 0, 0); break;
    case 12: fn_80242BC0(fn_80242144(p, 10), lbl_8035FD14, 0, 0, 0, 0); break;
    case 13: fn_80242BC0(fn_80242144(p, 11), lbl_8035FD14, 0, 0, 0, 0); break;
    case 14:
        fn_80242BC0(fn_80242144(p, 12), lbl_8035FD14, 0, 0, 0, 0);
        for (i = 0; i < *(s32 *)(p + 0x11C) + *(s32 *)(p + 0x120); i++) {
            fn_80242BC0(fn_80242144(p, i), lbl_8035FCFC, 0, 0, 0, 0);
        }
        fn_80253F24(lbl_8035B65C, lbl_8035FD1C, 0, 0, 0);
        fn_80242BC0(fn_80242144(p, 14), lbl_8035FCFC, 0, 0, 0, 0);
        break;
    case 15:
        fn_80253F24(lbl_8035B65C, lbl_80298CA0, 0, 0, 0);
        fn_80253F24(lbl_8035B65C, lbl_8035FD24, 0, 0, 0);
        break;
    case 16:
        break;
    }
}
