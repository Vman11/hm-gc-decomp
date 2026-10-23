// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Str800FA4FC {
    u32 capacity;
    u32 unk4;
    u32 length;
    virtual void f0();
    virtual void SetChar(u32 i, int c);
    
};

static inline s32 wcslen800FA4FC(const u16 *s) {
    const u16 *p = s;
    while (*p != 0) p++;
    return p - s;
}

void fn_800FA4FC(Str800FA4FC *s, const u16 *src) {
    u32 len = wcslen800FA4FC(src);
    u32 n;
    u32 i;
    n = len; if (len >= s->capacity) n = s->capacity;
    for (i = 0; i < n; i++) {
        s->SetChar(i, src[i]);
    }
    s->SetChar(n, 0);
    s->length = n;
    s->unk4 = 0;
}

} /* extern "C" */
