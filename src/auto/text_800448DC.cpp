// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[124];
    u8 *a224;
    u8 *a228;
    u8 pad232[48];
    char *s280;
    char *s284;
};
static u8 sPad[640] = {1};
static s32 tA[5] = {1};
static s32 tB[5] = {1};
static s32 tC[34] = {1};
extern char lbl_80295660[], lbl_8029566C[];
extern char lbl_8035CAC8[8], lbl_8035CAD0[8], lbl_8035CAD8[8], lbl_8035CAE0[8], lbl_8035CAE8[8], lbl_8035CAF0[8], lbl_8035CAF8[8], lbl_8035CB00[8], lbl_8035CB08[8];
void fn_80240B50(P *, char *, int);
void fn_800F6E88(char *, u8 *);
int fn_800F6CD0(char *, char *);

void fn_800448DC(P *p, s32 n) {
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
        return;
    case 1:
        if (p->s280) fn_80240B50(p, p->s280, 1);
        break;
    case 2:
        if (p->a228) {
            char b[8];
            char a[8];
            fn_800F6E88(a, p->a224 + 140);
            fn_800F6E88(b, p->a228 + 140);
            if (fn_800F6CD0(a, lbl_80295660) || fn_800F6CD0(a, lbl_8035CAC8) || fn_800F6CD0(a, lbl_8035CAD0) ||
                fn_800F6CD0(a, lbl_8035CAD8) || fn_800F6CD0(a, lbl_8029566C)) {
                if (fn_800F6CD0(b, lbl_8035CAE0)) {
                    fn_80240B50(p, lbl_8035CAE8, 0);
                    break;
                }
                if (fn_800F6CD0(b, lbl_8035CAF0) || fn_800F6CD0(b, lbl_8035CAF8) || fn_800F6CD0(b, lbl_8035CB00)) {
                    fn_80240B50(p, lbl_8035CB08, 0);
                    break;
                }
            }
        }
        if (p->s284) fn_80240B50(p, p->s284, 0);
        break;
    case 3:
        return;
    }
}

} /* extern "C" */
