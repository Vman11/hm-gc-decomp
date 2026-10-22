// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct R80129938 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual u32 Read();
};
struct Src80129938 {
    u8 pad[48];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual R80129938 *GetReader();
};
struct P80129938 {
    u8 pad[36];
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void Release();
    Src80129938 *f40;
    u32 f44;
    u32 f48;
};
extern "C" {
void fn_80104F78(P80129938 *p, u32 a, u32 b);
void fn_80129938(P80129938 *p, Src80129938 *src) {
    R80129938 *r;
    if (p->f48 != 0) {
        p->Release();
    }
    p->f40 = src;
    r = src->GetReader();
    p->f44 = r->Read();
    p->f48 = r->Read();
    fn_80104F78(p, r->Read(), r->Read());
}

} /* extern "C" */
