#include "common.h"

// BSP sphere walk. fn_8021EA50 text matches (unit left NonMatching: linking it changes extabindex at 0x800278F0): sphere param is const f32* (its loads hoist above the prologue saves; needs GC >=2.0, 1.3.2 ignores const).
extern "C" {

struct N21E { f32 v[4]; u8 pad10[8]; N21E *f18; N21E *f1c; };
struct Cb21E { u8 pad[0x30]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void hit(N21E *); };
static inline f32 fn_8021EFA8(f32 *arg0, const f32 *arg1) {
    return arg0[3] + (arg1[0] * arg0[0] + arg1[1] * arg0[1] + arg1[2] * arg0[2]);
}
void fn_8021EA50(N21E *n, Cb21E *cb, const f32 *s) {
    f32 d = fn_8021EFA8(n->v, s);
    if (d >= s[3]) {
        if (n->f18) fn_8021EA50(n->f18, cb, s);
    } else if (d < -s[3]) {
        if (n->f1c) fn_8021EA50(n->f1c, cb, s);
    } else {
        cb->hit(n);
    }
}

} /* extern "C" */
