// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { s32 a, b, c; } T_80250028;
typedef struct { u8 pad[8]; u8 name[24]; s32 flag; u8 pad2[4]; } E_80250028;
extern u8 lbl_802F1F98[];
extern void *lbl_8035B65C;
extern char lbl_80366498[8];
s32 fn_800F6CD0(void *, char *);
void fn_80253A48(void *, void *, void *, void *);
void fn_80253AD8(void *, void *, void *, void *);
void __dla__FPv(void *);
void __dt__9C8010946CFv(void *, s32);
void __dl__FPv(void *);

static inline void clr_80250028(u8 *p, u8 *base) {
    void *mgr;
    u32 i;
    mgr = lbl_8035B65C;
    for (i = 0; i < *(u32 *)(p + 8); i++) {
        if (fn_800F6CD0((*(E_80250028 **)(p + 16))[i].name, lbl_80366498) == 0) {
            if ((*(E_80250028 **)(p + 16))[i].flag != 0) {
                T_80250028 t = *(T_80250028 *)(base + 264);
                fn_80253A48(mgr, p, &t, (*(E_80250028 **)(p + 16))[i].name);
            } else {
                T_80250028 t = *(T_80250028 *)(base + 276);
                fn_80253AD8(mgr, p, &t, (*(E_80250028 **)(p + 16))[i].name);
            }
        }
    }
    if (*(void **)(p + 16) != NULL) {
        __dla__FPv(*(void **)(p + 16));
    }
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 4) = 0;
    __dt__9C8010946CFv(p, 0);
}

void *fn_80250028(u8 *p, s16 f) {
    u8 *base = lbl_802F1F98;
    if (p != NULL) {
        *(void **)p = base + 348;
        clr_80250028(p, base);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
