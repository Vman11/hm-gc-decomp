// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S8020E184 {
    u8 pad[8];
    u32 flags;
};
struct V8020E184 {
    u8 pad[1720];
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void p8();
    virtual void p9();
    virtual void p10();
    virtual void p11();
    virtual void p12();
    virtual void p13();
    virtual s32 m14();
    virtual S8020E184 *m15();
};
s32 fn_800D22F0(u32 a, s32 key, u8 *buf);
s32 fn_800D240C(u8 *buf);
s32 fn_8020B114(s32 r);

s32 fn_8020E184(V8020E184 *p, s32 key) {
    u8 buf[32];
    s32 r;
    if (p->m14() != 0) {
        do {
            r = fn_800D22F0(**(u32 **)((u8 *)p + 1724), key, buf);
        } while (r == -1);
        if (r != 0) {
            return fn_8020B114(r);
        }
        return fn_8020B114(fn_800D240C(buf));
    }
    {
        S8020E184 *s = p->m15();
        r = 12;
        if (s->flags & 2) {
            r = 11;
        }
    }
    return r;
}

} /* extern "C" */
