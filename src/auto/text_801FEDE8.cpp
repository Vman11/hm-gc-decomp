// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801FEDE8 { virtual void p0(); virtual s32 m(); };
extern f32 lbl_803656E4;
extern f32 lbl_803656E8;
extern f32 lbl_803656F0;
extern f32 lbl_803656EC;
void fn_801FBA4C(void *, void *, f32);
double fn_800F04DC(double);
s32 fn_80202B68(void *);
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(s32);

static inline void setall_801FEDE8(u8 *q, s32 v) {
    s32 lv = OSDisableInterrupts();
    for (q = *(u8 **)(q + 0x68); q != NULL; q = *(u8 **)(q + 0x1D4)) {
        if (((V_801FEDE8 *)q)->m() != 0 || fn_80202B68(q) != 0) {
            *(s32 *)(q + 0x7C) = v;
        }
    }
    OSRestoreInterrupts(lv);
}

void fn_801FEDE8(u8 *p, void *a, f32 f) {
    f32 s;
    s32 v;
    if (f < lbl_803656E4) {
        f = lbl_803656E4;
    }
    if (f > lbl_803656E8) {
        f = lbl_803656E8;
    }
    fn_801FBA4C(p, a, f);
    s = fn_800F04DC(f);
    fn_801FBA4C(p, a, f);
    v = (s32)(lbl_803656EC * (lbl_803656F0 * s));
    if (a == NULL) {
        setall_801FEDE8(p, v);
    }
}

} /* extern "C" */
