// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80211FEC { virtual void m(s32); };
struct W_80211FEC { u8 pad[0x6B8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(void *); };
extern "C" { extern u8 lbl_802EFEE8[]; void fn_802122C4(void *); void fn_802114B4(void *); void fn_80212490(void *, s32); void __dt__9C8021151CFv(void *, s32); void __dl__FPv(void *); }

void *fn_80211FEC(u8 *p, s16 f) {
    if (p != NULL) {
        u8 *o;
        *(void **)(p + 1720) = lbl_802EFEE8;
        o = *(u8 **)(p + 1760);
        if (o != NULL) {
            if (o != NULL) {
                ((V_80211FEC *)o)->m(1);
            }
        }
        if (*(void **)(p + 1764) != NULL) {
            (*(W_80211FEC **)(p + 1768))->m(*(void **)(p + 1764));
        }
        fn_802122C4(p + 1724);
    *(s32 *)(p + 1760) = 0;
    *(s32 *)(p + 1764) = 0;
    *(s32 *)(p + 1768) = 0;
        fn_802114B4(p);
        fn_80212490(p + 1724, -1);
        __dt__9C8021151CFv(p, 0);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
