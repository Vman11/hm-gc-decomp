// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern s32 lbl_80359498[2];
extern s32 lbl_802D22A8[3];
extern s32 lbl_802D22B4[3];
extern char lbl_80362168[8];

typedef struct {
    u8 pad[72];
    void *f72;
} Mgr;
extern Mgr *lbl_8035B308;

typedef struct {
    u8 pad0[96];
    s32 f96;
    u8 pad1[280 - 100];
    void *f280;
    void *f284;
} Obj;

void fn_80241628(Obj *p, s32 a, s32 b);
s32 fn_800F6CD0(void *a, void *b);
void *fn_802288FC(Mgr *m, void *name);
void fn_802494A4(Obj *p, s32 a);
void fn_8023F5E8(Obj *p, void *a);

void fn_800A9B6C(Obj *p, s32 n) {
    s32 idx = lbl_80359498[n];
    s32 v = p->f96;
    for (; v > 0; v -= lbl_802D22A8[idx++]) {
        if (lbl_802D22A8[idx] > v) break;
    }
    switch (lbl_802D22B4[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        if (p->f280 == 0 || fn_800F6CD0(p->f280, lbl_80362168) != 0) {
            p->f284 = lbl_8035B308->f72;
        } else {
            p->f284 = fn_802288FC(lbl_8035B308, p->f280);
        }
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_80241628(p, 1, 0);
        fn_8023F5E8(p, p->f284);
        break;
    case 2:
        return;
    case 3:
        return;
    }
}

} /* extern "C" */
