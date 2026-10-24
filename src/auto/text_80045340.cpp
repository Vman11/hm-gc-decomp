// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[180];
    s32 cur;
};
static u8 sPad[792] = {1};
static s32 tA[8] = {1};
static s32 tB[8] = {1};
static s32 tC[34] = {1};
extern char lbl_8035CC44[4];
void fn_80241628(P *, int, int);
void *fn_80242144(P *, int);
void fn_80242BC0(void *, char *, int, int, int, int);

static inline void play(P *p, s32 k) {
    if (p->cur != k) fn_80242BC0(fn_80242144(p, k), lbl_8035CC44, 0, 0, 0, 0);
    p->cur = k;
}

void fn_80045340(P *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = p->t96;
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        break;
    case 1:
        play(p, 1);
        break;
    case 2:
        play(p, 2);
        break;
    case 3:
        play(p, 3);
        break;
    case 4:
        play(p, 4);
        break;
    case 5:
        play(p, 5);
        break;
    case 6:
        play(p, 6);
        break;
    case 7:
        p->cur = 0;
        break;
    case 8:
        break;
    }
}

} /* extern "C" */
