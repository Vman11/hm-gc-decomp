// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V80209138 {
    virtual void v0();
    virtual s32 v1();
};
static inline bool isAct(s32 s) { return s != 0 && s != 7; }
s32 fn_80209138(void *p) {
    s32 a = ((V80209138 *)((u8 *)p + 72))->v1();
    s32 b = ((V80209138 *)((u8 *)p + 4))->v1();
    s32 fa = isAct(a);
    s32 fb = isAct(b);
    if (fa && fb) {
        if (a == b) return a;
        return 3;
    }
    if (fa) return a;
    if (fb) return b;
    if (a == 7 || b == 7) return 7;
    return 0;
}

} /* extern "C" */
