// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801F359C {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual s32 m3();
    virtual void m4();
    u8 *cur;
    u8 *end;
};
extern "C" void *memcpy(void *, const void *, u32);

static inline u8 ok_801F359C(S_801F359C *s) {
    u8 ok = 0;
    if (s->cur < s->end || s->m3() == 0) {
        ok = 1;
    }
    return ok;
}

u16 fn_801F359C(S_801F359C *s) {
    u8 buf[2];
    u8 *dst = buf;
    s32 avail = s->end - s->cur;
    if (avail >= 2) {
        memcpy(dst, s->cur, 2);
        s->cur += 2;
    } else {
        s32 need;
        memcpy(dst, s->cur, avail);
        dst += avail;
        for (need = 2 - avail; need > 0 && ok_801F359C(s); need -= avail) {
            s->m4();
            avail = s->end - s->cur;
            if (need <= avail) {
                memcpy(dst, s->cur, need);
                s->cur += need;
                break;
            }
            memcpy(dst, s->cur, avail);
            dst += avail;
        }
    }
    return buf[0] * 256 + buf[1];
}

} /* extern "C" */
