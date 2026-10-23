// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct R801EF8D0 {
    u8 pad[292];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual u32 Next();
};
struct P801EF8D0 {
    virtual void v0();
    virtual void Parse(R801EF8D0 *r, u32 tok);
    virtual void v2(); virtual void v3();
    virtual void Reset();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void Finish(u32 a, u32 b, u32 c);
    u32 f4;
    u32 f8;
    u32 f12;
    u8 pad16[28 - 16];
    u32 f28;
    u32 f32;
    u32 f36;
};
extern "C" {
extern u32 lbl_80365430;
void fn_800FAEF8(R801EF8D0 *r);

void fn_801EF8D0(P801EF8D0 *p, u32 x, R801EF8D0 *r) {
    u32 tok;
    p->Reset();
    p->f8 = x;
    fn_800FAEF8(r);
    while ((tok = r->Next()) != 6) {
        p->Parse(r, tok);
    }
    if (!(p->f36 & 4)) {
        p->f36 |= lbl_80365430;
    }
    p->Finish(p->f28, p->f32, p->f12);
}

} /* extern "C" */
