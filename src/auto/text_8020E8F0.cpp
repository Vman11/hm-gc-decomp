// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8020E8F0 { u8 pad[0x60]; virtual void p0(); virtual void p1(); virtual void m(); };
extern "C" { extern u8 lbl_802EFBF0[]; void fn_8020BB90(void); void fn_800E1F04(void *, void *, u32, u32); void dtor_80211788(void *, s32); void __dl__FPv(void *); }

void *fn_8020E8F0(u8 *p, s16 f) {
    if (p != NULL) {
        u32 i;
        u8 *q;
        i = 0;
        *(void **)p = lbl_802EFBF0;
        q = p;
        do {
            ((V_8020E8F0 *)(q + 4))->m();
            i++;
            q += 43332;
        } while (i < 2);
        *(s32 *)(p + 86668) = 0;
        fn_800E1F04(p + 4, (void *)fn_8020BB90, 43332, 2);
        dtor_80211788(p, 0);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
