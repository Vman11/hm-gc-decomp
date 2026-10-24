// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct X { u8 pad[8]; u32 f8; };
struct N {
    u8 pad[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void grow();
    virtual X *get(u32);
    u32 count;
    N *next;
};
inline BOOL fn_801339B4(X *x) { return x->f8 != 0; }

X *fn_801335E8(N *n) {
    u32 i;
    for (i = 0; i < n->count; i++) {
        X *x = n->get(i);
        if (!fn_801339B4(x)) return x;
    }
    if (n->next == 0) n->grow();
    return fn_801335E8(n->next);
}
}

} /* extern "C" */
