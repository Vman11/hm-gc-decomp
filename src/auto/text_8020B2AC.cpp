// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 fn_800D13F8(s32 chan, void *work, void *cb);
extern s32 fn_800D14DC(s32 chan);
extern s32 fn_800D0A3C(s32 chan);
extern s32 fn_800D1D24(s32 chan);
extern s32 fn_8020B114(s32 r);

s32 fn_8020B2AC(s32 *self, u32 *out) {
    s32 r;
    *out = 0;
    if (self[2] & 4) return 0;
    while ((r = fn_800D13F8(self[0], (void *)(((u32)self + 2371) & ~31), 0)) == -1) {
    }
    switch (r) {
    case -128:
    case -5:
    case -2:
    default:
        return fn_8020B114(r);
    case 0:
        fn_800D14DC(self[0]);
        return 0;
    case -13:
    case -6:
        do {
            r = fn_800D0A3C(self[0]);
        } while (r == -1);
        switch (r) {
        case -128:
        case -5:
        case -3:
        default:
            return fn_8020B114(r);
        case 0:
            fn_800D14DC(self[0]);
            return 0;
        case -13:
        case -6:
            r = fn_8020B114(fn_800D1D24(self[0]));
            if (r == 0) {
                r = fn_8020B114(fn_800D14DC(self[0]));
            }
            return r;
        }
    }
}

} /* extern "C" */
