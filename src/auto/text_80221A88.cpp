// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
struct V80221A88 {
    u8 pad[20];
    virtual void v0();
    virtual void v1();
    virtual void v2(s32 a, s32 b, s32 c, s32 d);
    virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(s32 a, s32 b, u32 w, u32 h, void *buf);
};
void fn_80148310(void *p);
void fn_801482C0(void *p, s32 a, s32 b, u32 c, u32 d, u32 e, u32 f);

void fn_80221A88(void *p) {
    u8 buf[32];
    V80221A88 *o;
    u32 w, h;
    V80221A88 *t;
    s32 busy;
    fn_80148310(buf);
    if (M2C_FIELD(p, u32 *, 76) & 2) {
        t = M2C_FIELD(p, V80221A88 **, 24);
        busy = M2C_FIELD(t, u8 *, 15) != 0;
        if (busy == 0) {
            o = t;
            o->v2(1, 0, 0, 0);
            fn_801482C0(buf, 0, 32, 0xFF000000, 0xFF0000, 0xFF00, 0xFF);
            w = 4;
            h = 4;
            while (w < M2C_FIELD(p, u32 *, 64)) w <<= 1;
            while (h < M2C_FIELD(p, u32 *, 68)) h <<= 1;
            o->v13(M2C_FIELD(p, s32 *, 4), M2C_FIELD(p, s32 *, 0), w, h, buf);
        }
    }
}
#pragma opt_propagation reset

} /* extern "C" */
