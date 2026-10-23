// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct V8022AD0C {
    u8 pad[20];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void *v5();
};
struct O8022AD0C {
    u32 flags;
    u16 type;
    u8 pad6[82];
    void *m88;
    u8 pad92[52];
    V8022AD0C *m144;
};
struct S8022AD0C {
    u8 pad[156];
    O8022AD0C *m156;
};
static inline BOOL IsReady8022AD0C(O8022AD0C *o) {
    if (o && (o->type == 2 || o->type == 3) && o->m144 && o->m144->v5()) {
        return 1;
    }
    return 0;
}
extern "C" {
extern u8 *lbl_8035B65C;
void fn_8019B178(void *a, O8022AD0C *b);
void fn_8022A824(S8022AD0C *s, void *a);

void fn_8022AD0C(S8022AD0C *s) {
    if (s->m156) {
        if (IsReady8022AD0C(s->m156)) {
            O8022AD0C *o = s->m156;
            if (o && !(o->flags & 0x200)) {
                fn_8019B178(*(void **)(lbl_8035B65C + 12), o);
                s->m156->flags |= 0x200;
            }
        }
        fn_8022A824(s, s->m156->m88);
    }
}

} /* extern "C" */
