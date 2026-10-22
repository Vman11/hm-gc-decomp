// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct C80214F1C;
extern "C" void fn_800FA1A0(C80214F1C *p);
extern "C" void fn_800FA1F4(C80214F1C *p, void *a);
struct In80214F1C { u8 pad[8]; u32 flags; bool Is() { return (flags & 4) || (flags & 8); } };
struct Cur80214F1C { u8 pad[4]; In80214F1C *inner; BOOL Check() { if (inner == 0) return false; return inner->Is(); } };
struct C80214F1C {
    u8 pad[24];
    virtual void v0();
    virtual void v1();
    Cur80214F1C *cur;
    u32 f32;
    BOOL HasCur() { return cur != 0; }
    void Reset() {
        if (HasCur()) {
            if (cur != 0 && cur->Check()) v1();
        }
        cur = 0;
        f32 = 0;
        fn_800FA1A0(this);
    }
};
extern "C" {

void fn_80214F1C(C80214F1C *self, Cur80214F1C *c, void *p3) {
    if (self->HasCur()) self->Reset();
    self->cur = c;
    fn_800FA1F4(self, p3);
}

} /* extern "C" */
