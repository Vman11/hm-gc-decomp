// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8026A5C8;
struct VT_8026A5C8 { u8 pad[8]; void (*f[32])(void); };
struct O_8026A5C8 {
    s32 flags;
    u8 pad[84];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void m8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void m16(void *, s32, s32);
    virtual void v17();
    virtual void m18(void *, s32, s32);
};
struct E_8026A5C8 { O_8026A5C8 *o; u32 k; };
struct R_8026A5C8 {
    u8 pad[72];
    E_8026A5C8 e[40];
    u32 cur;
    inline s32 alloc(u32 *idx) {
        u32 i;
        for (i = (cur + 1) % 40; i != cur; i = (i + 1) % 40) {
            if (e[i].k == 0) {
                if ((e[i].o->flags & 1) == 1) {
                    e[i].o->m8();
                }
                *idx = i;
                cur = i;
                return 1;
            }
        }
        return 0;
    }
};

void fn_8026A5C8(R_8026A5C8 *r, u32 k, u32 *idx, void *a) {
    if (r->e[*idx].k != k) {
        if (r->alloc(idx)) {
            r->e[*idx].k = k;
        }
    }
    if (r->e[*idx].k == k) {
        r->e[*idx].o->m18(a, 0, 0);
    }
}

} /* extern "C" */
