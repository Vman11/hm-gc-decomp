// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V8014E820 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual s32 v13(); virtual void v14(); virtual s32 v15();
};
void fn_800C3528(void);
s32 fn_8011FA98(V8014E820 *p, s32 a);
u32 fn_800FBB9C(void);

s32 fn_8014E820(V8014E820 *p, s32 a) {
    s32 r;
    u32 t;
    s32 q;
    r = p->v13();
    if (r != 0) return r;
    fn_800C3528();
    r = fn_8011FA98(p, a);
    if (r == 0) {
        t = fn_800FBB9C();
        if (M2C_FIELD(p, u32 *, 36) & 8) t += 500;
        do {
            q = p->v15();
            if (q != 0) break;
        } while (fn_800FBB9C() < t);
        r = q;
    }
    return r;
}

} /* extern "C" */
