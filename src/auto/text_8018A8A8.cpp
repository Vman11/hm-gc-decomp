// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Obj {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32);
};
struct Self {
    u32 flags;
    u8 pad[140];
    void *f144;
};
extern u32 lbl_80364A34;
void fn_800FB064(Obj *, char *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
void fn_801A17B8(Self *, u8 *, Obj *, s32);

void fn_8018A8A8(Self *self, u8 *p2, Obj *o, s32 msg) {
    char b[8];
    char a[16];
    switch (msg) {
    case 139:
        fn_800FB064(o, a);
        fn_800FB064(o, b);
        {
            void *r;
            if (b == 0 || b[0] == 0) r = fn_800F9398(p2 + 324, a);
            else r = fn_800F9788(p2 + 348, b, a);
            self->f144 = r;
        }
        if (self->f144 == 0) o->v4(37);
        break;
    case 140:
        self->flags |= lbl_80364A34;
        break;
    case 141:
        self->flags &= ~0x10000;
        break;
    default:
        fn_801A17B8(self, p2, o, msg);
        break;
    }
}

} /* extern "C" */
