#include "common.h"

extern "C" {

typedef struct { s32 a, b, c; } T_8024FF04;
typedef struct { u8 pad[8]; u8 name[24]; s32 flag; u8 pad2[4]; } E_8024FF04;
typedef struct { u8 pad[8]; u32 n; u32 m; E_8024FF04 *e; } P_8024FF04;
extern T_8024FF04 lbl_802F20B8;
extern T_8024FF04 lbl_802F20C4;
extern void *lbl_8035B65C;
extern char lbl_80366498[8];
s32 fn_800F6CD0(void *, char *);
void fn_80253A48(void *, void *, void *, void *);
void fn_80253AD8(void *, void *, void *, void *);

void fn_8024FF04(P_8024FF04 *p) {
    void *mgr;
    u32 i;
    mgr = lbl_8035B65C;
    for (i = p->n - p->m; i < p->n; i++) {
        if (fn_800F6CD0(p->e[i].name, lbl_80366498) == 0) {
            if (p->e[i].flag != 0) {
                T_8024FF04 t = lbl_802F20B8;
                fn_80253A48(mgr, p, &t, p->e[i].name);
            } else {
                T_8024FF04 t = lbl_802F20C4;
                fn_80253AD8(mgr, p, &t, p->e[i].name);
            }
        }
    }
    p->n -= p->m;
    p->m = 0;
}

} /* extern "C" */
