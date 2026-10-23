// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u32 lbl_803657F0;
extern u32 lbl_803657F4;
s32 fn_800D0B5C(s32);
s32 fn_800D13F8(s32, void *, s32);
s32 fn_800D0A3C(s32);
s32 fn_800D14DC(s32);
s32 fn_800CDE74(s32, u32 *);
s32 fn_8020B114(s32);

s32 fn_8020B494(u8 *p, u32 *out) {
    s32 r2;
    void *buf;
    s32 r;
    u32 v;
    *out = 0;
    if (*(u32 *)(p + 8) & 2) return 0;
    if (!(*(u32 *)(p + 8) & 0x20)) return 12;
    if (fn_800D0B5C(*(s32 *)p) == 0) return 12;
    buf = (void *)(((u32)(p + 2340) + 31) & ~31);
    do {
        r = fn_800D13F8(*(s32 *)p, buf, 0);
    } while (r == -1);
    if (r == 0 || r == -6) {
        do {
            r2 = fn_800D0A3C(*(s32 *)p);
        } while (r2 == -1);
        if (r2 == -6 || r2 == -13) {
            while (fn_800D14DC(*(s32 *)p) == -1) {}
            return fn_8020B114(r2);
        }
        if (r2 != 0) return fn_8020B114(r2);
        *(u32 *)(p + 8) |= lbl_803657F0;
        *(u32 *)(p + 8) |= lbl_803657F4;
        do {
            r2 = fn_800CDE74(*(s32 *)p, &v);
        } while (r2 == -1);
        if (r2 == 0) {
            *(u32 *)(p + 1816) = v;
            return 0;
        }
        return fn_8020B114(r2);
    }
    if (r == -13) {
        while (fn_800D14DC(*(s32 *)p) == -1) {}
        return fn_8020B114(r);
    }
    return fn_8020B114(r);
}

} /* extern "C" */
